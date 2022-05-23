#pragma once
#include <string>
using namespace std;

class person
{
public:
	person();
	person(string n, int a);
	person(person& P);
	void setCharacteristics(string name, int age);
	void setN(string name);
	void setA(int age);
	string getN();
	int getA();
private:
	string n;
	int a;
};
