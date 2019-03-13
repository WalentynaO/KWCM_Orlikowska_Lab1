
#define _USE_MATH_DEFINES	
#include "LaborkaConfig.h"
#include <iostream>
#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
using namespace degreemath;
#else
#include <cmath>
#endif

//
int main()
{
#ifdef USE_TRIGONOMETRY_DEGREE
std::cout<<degreemath::sin(45);
std::cout<<degreemath::cos(45);
std::cout<<degreemath::tg(45);
std::cout<<degreemath::ctg(45);
#else
std::cout<<std::sin(M_PI/4);
std::cout<<std::cos(M_PI/4);
std::cout<<std::tan(M_PI/4);
std::cout<<1/std::tan(M_PI/4);
#endif
return 0;}