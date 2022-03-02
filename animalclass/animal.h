#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class animal
{
public:
    animal();
    animal(string n, string sn, int le); //name, scientific name, life expectancy
    animal(animal& A);
    void setCharacteristics(string name, string scientificname, int lifeexpectancy);
    float getN();
    float getSN();
    float getLE();

private:
    string n;
    string sn;
    int le;
};