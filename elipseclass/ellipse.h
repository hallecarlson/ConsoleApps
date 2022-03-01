#pragma once
#define_USE_MATH_DEFINES
#include <math.h>
using namespace std; 

class ellipse
{
public:
    ellipse();
    ellipse(float r1, float r2);
    ellipse(ellipse& E);
    void setRadius(float input1, float input2);
    float getRadius1();
    float getRadius2();
    float circumference();
    float area();

private:
    float r1;
    float r2;
};
