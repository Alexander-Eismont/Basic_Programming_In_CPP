#pragma once

#ifdef LEAVER_EXPORTS
#define LEAVER_LIB_API __declspec(dllexport)
#else
#define LEAVER_LIB_API __declspec(dllimport)
#endif

#include <string>

class LEAVER_LIB_API Leaver
{
public:
	Leaver();

	std::string leave(std::string name);
};