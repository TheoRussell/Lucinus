#pragma once

#ifdef LC_PLATFORM_WINDOWS
	#ifdef LC_BUILD_DLL
		#define LUCINUS_API __declspec(dllexport)
	#else
		#define LUCINUS_API __declspec(dllimport)
	#endif
#else
	#error Only windows!

#endif