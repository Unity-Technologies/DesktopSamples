// Generic implementation for platforms that don't have this implemented
#include "os/c-api/il2cpp-config-platforms.h"

#if !IL2CPP_PLATFORM_SUPPORTS_DEBUGGER_PRESENT

#include "os/Debug.h"

namespace il2cpp
{
namespace os
{
    bool Debug::IsDebuggerPresent()
    {
        return false;
    }
}
}

#endif
