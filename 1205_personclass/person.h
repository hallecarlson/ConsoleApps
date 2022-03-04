#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
using namespace std;

class person
{
public:
    person();
    person(string fn, string mn, string ln, int a, string p); //first name, middle name, last name, age, phone number
    person(person& P);
    void setCharacteristics(string firstname, string middlename, string lastname, int age, string phonenumber);
    void setFN(string firstname);
    void setMN(string middlename);
    void setLN(string lastname);
    void setA(int age);
    void setP(string phonenumber);
    string getFN();
    string getMN();
    string getLN();
    int getA();
    string getP();

private:
    string fn;
    string mn;
    string ln;
    int a;
    string p;
};
