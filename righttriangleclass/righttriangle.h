#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class righttriangle
{
public:
    righttriangle();
    righttriangle(float b, float h, float hyp);
    righttriangle(righttriangle& T);
    void setDimensions(float base, float height, float hypotenuse);
    float getB();
    float getH();
    float getHYP();
    float perimeter();
    float area();

private:
    float b;
    float h;
    float hyp;
};
