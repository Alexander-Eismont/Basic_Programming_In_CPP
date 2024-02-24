#pragma once

#include "figure.h"

#ifdef QUADRANGLELIB_EXPORTS
#define QUADRANGLELIB_API __declspec(dllexport)
#else
#define QUADRANGLELIB_API __declspec(dllimport)
#endif

class QUADRANGLELIB_API Quadrangle : public Figure
{
public:
    Quadrangle();
};
