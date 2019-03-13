
	
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
std::cout<<std::sin(3.14/4);
std::cout<<std::cos(3.14/4);
std::cout<<std::tan(3.14/4);
std::cout<<1/std::tan(3.14/4);
#endif
return 0;}