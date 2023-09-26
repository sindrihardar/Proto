#pragma once

#ifdef PT_PLATFORM_WINDOWS
	#ifdef PT_BUILD_DLL
		#define PROTO_API __declspec(dllexport)
	#else
		#define PROTO_API __declspec(dllexport)
	#endif
#else
	#error Proto only support Windows!
#endif