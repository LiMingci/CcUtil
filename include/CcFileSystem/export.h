#ifndef CC_FILE_SYSTEM_EXPORT_H
#define CC_FILE_SYSTEM_EXPORT_H

#ifdef MAKE_CCFILESYSTEM_DLL
#define CCFS_API __declspec(dllexport)
#else
#define CCFS_API __declspec(dllimport)
#endif



#endif // !CC_FILE_SYSTEM_EXPORT_H
