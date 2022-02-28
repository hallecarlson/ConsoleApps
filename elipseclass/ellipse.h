#pragma once
#define_USE_MATH_DEFINES
#include <math.h>
using namespace std;

class ellipse
{
public:
    ellipse();
    ellipse(float r);
    ellipse(ellipse& E);
    void setRadius(float input);
    float getRadius();
    float circumference();
    float area();

private:
    float r1;
    float r2;
};
