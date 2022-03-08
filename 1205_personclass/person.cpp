#include "person.h"

person::person()
{
	fn = "";
	mn = "";
	ln = "";
	a = "";
	p = "";
}
person::person(string firstname, string middlename, string lastname, string age, string phonenumber)
{
	fn = firstname;
	mn = middlename;
	ln = lastname;
	a = age;
	p = phonenumber;
}
person::person(person(&P))
{
	fn = P.fn;
	mn = P.mn;
	ln = P.ln;
	a = P.a;
	p = P.p;
}
void person::setCharacteristics(string firstname, string middlename, string lastname, string age, string phonenumber)
{
	fn = firstname;
	mn = middlename;
	ln = lastname;
	a = age;
	p = phonenumber;
}
void person::setFN(string firstname)
{
	fn = firstname;
}
void person::setMN(string middlename)
{
	mn = middlename;
}
void person::setLN(string lastname)
{
	ln = lastname;
}
void person::setA(string age)
{
	a = age;
}
void person::setP(string phonenumber)
{
	p = phonenumber;
}
string person::getFN()
{
	return fn;
}
string person::getMN()
{
	return mn;
}
string person::getLN()
{
	return ln;
}
string person::getA()
{
	return a;
}
string person::getP()
{
	return p;
}