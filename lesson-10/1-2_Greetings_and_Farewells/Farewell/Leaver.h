#pragma once

#ifdef FAREWELL_EXPORTS
#define FAREWELL_API __declspec(dllexport)
#else
#define FAREWELL_API __declspec(dllimport)
#endif

#include <string>

class Leaver
{
public:
	FAREWELL_API Leaver();

	std::string FAREWELL_API leave(std::string name);
};

