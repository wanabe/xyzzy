#ifndef _appid_h_
# define _appid_h_

#ifdef __MINGW32__
#include <shobjidl.h>
#else
#include <ShObjIdl.h>
#endif

typedef HRESULT (*SETAPPID)(PCWSTR AppID);

class appid
{
public:
  static void set ();
};

#endif
