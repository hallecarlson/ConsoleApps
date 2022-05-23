#include "person.h"

person::person()
{
	n = "";
	a = 0;
}
person::person(string name, int age)
{
	n = name;
	a = age;
}
person::person(person(&P))
{
	n = P.n;
	a = P.a;
}
void person::setCharacteristics(string name, int age)
{
	n = name;
	a = age;
}
void person::setN(string name)
{
	n = name;
}
void person::setA(int age)
{
	a = age;
}
string person::getN()
{
	return n;
}
int person::getA()
{
	return a;
}