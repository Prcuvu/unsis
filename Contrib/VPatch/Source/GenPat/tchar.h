// Added for Unicode support by Jim Park -- 08/29/2007
#pragma once
#include <string>
#include <sstream>

#ifdef _UNICODE
#  define tout        wcout
#  define terr        wcerr
#  define __T(x)      L ## x
#  define _T(x)       __T(x)
#  define _tmain      wmain
#  define _tunlink    _wunlink

   typedef std::wstring        tstring;
   typedef std::wistringstream tistringstream;

   typedef wchar_t      TCHAR;
#else
#  define tout        cout
#  define terr        cerr
#  define _T(x)       x
#  define _tmain      main
#  define _tunlink    _unlink

   typedef std::string         tstring;
   typedef std::istringstream  tistringstream;
   typedef char        TCHAR;
#endif
