#ifndef CC_STRING_EXPORT_H
#define CC_STRING_EXPORT_H

#ifdef _MSC_VER 
#ifdef MAKE_CCSTRING_DLL
#define CCSTR_API __declspec(dllexport)
#else
#define CCSTR_API __declspec(dllimport)
#endif
#else
#define CCSTR_API
#endif

#endif // !CC_STRING_EXPORT_H
