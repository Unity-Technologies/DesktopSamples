#if 1// UNITY_WSA

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX

#include <string>
#include <vector>

#include <inspectable.h>
#include <windows.h>
#include <wrl.h>

using Microsoft::WRL::ComPtr;

struct CriticalSection
{
    inline CriticalSection()
    {
        InitializeCriticalSectionAndSpinCount(&m_CriticalSection, 200);
    }

    inline ~CriticalSection()
    {
        DeleteCriticalSection(&m_CriticalSection);
    }

    inline void Enter()
    {
        EnterCriticalSection(&m_CriticalSection);
    }

    inline void Leave()
    {
        LeaveCriticalSection(&m_CriticalSection);
    }

    struct Lock
    {
        inline Lock(CriticalSection& criticalSection) :
            m_CriticalSection(criticalSection)
        {
            criticalSection.Enter();
        }

        inline ~Lock()
        {
            m_CriticalSection.Leave();
        }

    private:
        CriticalSection& m_CriticalSection;
    };

private:
    CRITICAL_SECTION m_CriticalSection;
};

typedef void (__stdcall* ActivatedEventCallback)(IInspectable* activatedEventArgs);

static CriticalSection s_CriticalSection;
static std::vector<ComPtr<IInspectable>> s_ActivationEventBackLog;
static ActivatedEventCallback s_ActivatedEventCallback;

extern "C"
{
    void __stdcall SetupActivatedEventCallback(ActivatedEventCallback callback)
    {
        CriticalSection::Lock lock(s_CriticalSection);

        s_ActivatedEventCallback = callback;

        for (const auto& activationEventArgs : s_ActivationEventBackLog)
            s_ActivatedEventCallback(activationEventArgs.Get());

        s_ActivationEventBackLog.clear();
    }

    __declspec(dllexport) void __stdcall AddActivatedEventArgs(IInspectable* activatedEventArgs)
    {
        CriticalSection::Lock lock(s_CriticalSection);

        auto callback = s_ActivatedEventCallback;
        if (callback != nullptr)
        {
            callback(activatedEventArgs);
        }
        else
        {
            s_ActivationEventBackLog.emplace_back(activatedEventArgs);
        }
    }
}

#endif