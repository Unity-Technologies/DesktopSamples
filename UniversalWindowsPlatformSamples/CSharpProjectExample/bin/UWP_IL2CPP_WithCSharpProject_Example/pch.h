//
// pch.h
// Header for standard system include files.
//

#pragma once

#include <collection.h>
#include <ppltasks.h>
#include <Windows.h>

#include <cstdint>
#include <string>

#include "App.xaml.h"

struct HandleHolder
{
    inline HandleHolder(HANDLE handle) :
        m_Handle(handle)
    {
    }

    HandleHolder(const HandleHolder&) = delete;
    HandleHolder& operator=(const HandleHolder&) = delete;

    inline ~HandleHolder()
    {
        if (m_Handle != INVALID_HANDLE_VALUE)
            CloseHandle(m_Handle);
    }

    inline operator HANDLE() const
    {
        return m_Handle;
    }

private:
    HANDLE m_Handle;
};
