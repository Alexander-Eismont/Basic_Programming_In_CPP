#pragma once

#include <string>

#ifdef LIB_EXPORTS
#define DYNAMICLIB_API __declspec(dllexport)
#else
#define DYNAMICLIB_API __declspec(dllimport)
#endif

class Leaver
{
public:
	DYNAMICLIB_API Leaver();

	DYNAMICLIB_API std::string leave(std::string name);
};

