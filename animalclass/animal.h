#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class animal
{
public:
    animal();
    animal(float l, float w);
    rectangle(rectangle& R);
    void setDimensions(float length, float width);
    float getL();
    float getW();
    float perimeter();
    float area();

private:
    float l;
    float w;
};