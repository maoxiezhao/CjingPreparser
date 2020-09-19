#pragma once

#include <memory>
#include <string>
#include <vector>
#include <map>

using U8 = unsigned __int8;
using U16 = unsigned __int16;
using U32 = unsigned __int32;
using U64 = unsigned __int64;

using I8 = __int8;
using I16 = __int16;
using I32 = __int32;
using I64 = __int64;

using F32 = float;
using F64 = double;

#define SAFE_DELETE(p) if(p!= nullptr) {delete (p); p=nullptr;}
#define SAFE_DELETE_ARRAY(p) if(p!= nullptr) {delete[](p); p=nullptr;}

namespace Version 
{
	long GetVersion();
	const char* GetVersionString();
}