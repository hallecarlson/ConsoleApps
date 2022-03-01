#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std; 

class ellipse
{
public:
    ellipse();
    ellipse(float r1, float r2);
    ellipse(ellipse& E);
    void setRadii(float rad1, float rad2);
    float getR1();
    float getR2();
    float circumference();
    float area();

private:
    float r1;
    float r2;
};
