#pragma once
#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class rectangle
{
public:
    rectangle();
    rectangle(float l, float w); //previously r1 and r2
    rectangle(rectangle& R);
    void setDimiensions(float length, float width); //previously rad1 and rad2
    float getL();
    float getW();
    float perimeter();
    float area();

private:
    float l;
    float w;
};