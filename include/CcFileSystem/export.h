#ifndef CC_FILE_SYSTEM_EXPORT_H
#define CC_FILE_SYSTEM_EXPORT_H

#ifdef _MSC_VER 
    #ifdef MAKE_CCFILESYSTEM_DLL
    #define CCFS_API __declspec(dllexport)
    #else
    #define CCFS_API __declspec(dllimport)
    #endif
#else
    #define CCFS_API
#endif



#endif // !CC_FILE_SYSTEM_EXPORT_H
