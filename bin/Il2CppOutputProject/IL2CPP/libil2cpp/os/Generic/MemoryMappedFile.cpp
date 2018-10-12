#include "il2cpp-config.h"

#if IL2CPP_USE_GENERIC_MEMORY_MAPPED_FILE
#include <map>
#include "os/File.h"
#include "os/MemoryMappedFile.h"
#include "os/Mutex.h"
#include "utils/Memory.h"

namespace il2cpp
{
namespace os
{
    static os::FastMutex s_Mutex;
    static std::map<void*, int64_t> s_MemoryFiles;

    static bool IsMemoryFile(void* possibleMemoryFile)
    {
        os::FastAutoLock lock(&s_Mutex);
        return s_MemoryFiles.find(possibleMemoryFile) != s_MemoryFiles.end();
    }

    FileHandle* MemoryMappedFile::Create(FileHandle* file, const char* mapName, int32_t mode, int64_t *capacity, MemoryMappedFileAccess access, int32_t options, MemoryMappedFileError* error)
    {
        if (file == NULL)
        {
            if (mapName != NULL)
            {
                os::FastAutoLock lock(&s_Mutex);
                void* memoryFile = IL2CPP_MALLOC_ZERO((size_t)*capacity);
                s_MemoryFiles[memoryFile] = *capacity;
                file = (FileHandle*)memoryFile;
            }
        }

        return file;
    }

    static MemoryMappedFile::MemoryMappedFileHandle ViewRealFile(FileHandle* mappedFileHandle, int64_t* length, int64_t offset, MemoryMappedFileAccess access, MemoryMappedFileError* error)
    {
        int fileError = 0;
        if (*length == 0)
        {
            *length = os::File::GetLength(mappedFileHandle, &fileError);
            if (fileError != 0)
            {
                if (error != NULL)
                    *error = COULD_NOT_MAP_MEMORY;
                return NULL;
            }
        }

        void* buffer = IL2CPP_MALLOC_ZERO((size_t)*length);

        os::File::Seek(mappedFileHandle, offset, 0, &fileError);
        if (fileError != 0)
        {
            IL2CPP_FREE(buffer);
            if (error != NULL)
                *error = COULD_NOT_MAP_MEMORY;
            return NULL;
        }

        int bytesRead = File::Read(mappedFileHandle, (char*)buffer, (int)*length, &fileError);
        if (bytesRead != *length || fileError != 0)
        {
            IL2CPP_FREE(buffer);
            if (error != NULL)
                *error = COULD_NOT_MAP_MEMORY;
            return NULL;
        }

        return buffer;
    }

    static MemoryMappedFile::MemoryMappedFileHandle ViewMemoryFile(void* mappedFileHandle, int64_t* length, int64_t offset, MemoryMappedFileAccess access, MemoryMappedFileError* error)
    {
        os::FastAutoLock lock(&s_Mutex);
        std::map<void*, int64_t>::iterator entry = s_MemoryFiles.find((void*)mappedFileHandle);
        IL2CPP_ASSERT(entry != s_MemoryFiles.end());

        if (*length == 0)
            *length = entry->second;

        if (*length > entry->second)
        {
            if (error != NULL)
                *error = COULD_NOT_MAP_MEMORY;
            return NULL;
        }
        return entry->first;
    }

    MemoryMappedFile::MemoryMappedFileHandle MemoryMappedFile::View(FileHandle* mappedFileHandle, int64_t* length, int64_t offset, MemoryMappedFileAccess access, MemoryMappedFileError* error)
    {
        if (IsMemoryFile((void*)mappedFileHandle))
            return ViewMemoryFile((void*)mappedFileHandle, length, offset, access, error);
        else
            return ViewRealFile(mappedFileHandle, length, offset, access, error);
    }

    void MemoryMappedFile::Flush(MemoryMappedFileHandle memoryMappedFileData, int64_t length)
    {
    }

    bool MemoryMappedFile::UnmapView(MemoryMappedFileHandle memoryMappedFileData, int64_t length)
    {
        if (!IsMemoryFile(memoryMappedFileData))
            IL2CPP_FREE(memoryMappedFileData);
        return true;
    }

    bool MemoryMappedFile::Close(FileHandle* file)
    {
        os::FastAutoLock lock(&s_Mutex);
        std::map<void*, int64_t>::iterator entry = s_MemoryFiles.find((void*)file);
        if (entry != s_MemoryFiles.end())
        {
            IL2CPP_FREE(entry->first);
            s_MemoryFiles.erase(entry);
        }
        return true;
    }

    void MemoryMappedFile::ConfigureHandleInheritability(FileHandle* file, bool inheritability)
    {
    }
}
}
#endif
