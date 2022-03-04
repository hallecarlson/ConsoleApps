#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
using namespace std;

class animal
{
public:
    animal();
    animal(string n, string sn, int le); //name, scientific name, life expectancy
    animal(animal& A);
    void setCharacteristics(string name, string scientificname, int lifeexpectancy);
    void setName(string name);
    void setScientificname(string scientificname);
    void setLifeexpectancy(int lifeexpectancy);
    string getN();
    string getSN();
    int getLE();

private:
    string n;
    string sn;
    int le;
};