#pragma once

// SDKDDKVer.h をインクルードすると、利用できる最も上位の Windows プラットフォームが定義されます。

// 以前の Windows プラットフォーム用にアプリケーションをビルドする場合は、WinSDKVer.h をインクルードし、
// SDKDDKVer.h をインクルードする前に、サポート対象とするプラットフォームを示すように _WIN32_WINNT マクロを設定します。

#ifndef __MINGW32__
#include <WinSDKVer.h>
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0502
#endif

#include <SDKDDKVer.h>
