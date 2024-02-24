#pragma once

#include "figure.h"

#ifdef TRIANGLELIB_EXPORTS
#define TRIANGLELIB_API __declspec(dllexport)
#else
#define TRIANGLELIB_API __declspec(dllimport)
#endif

class TRIANGLELIB_API Triangle : public Figure
{
public:
	Triangle();
};
