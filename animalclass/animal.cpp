#include "animal.h"

animal::animal()
{
	n = 0;
	sn = 0;
	le = 0;
}
animal::animal(string name, string scientificname, int lifeexpectancy)
{
	n = name;
	sn = scientificname;
	le = lifeexpectancy;
}
animal::animal(animal(&R))
{
	n = A.n;
	sn = A.sn;
	le = A.le;
}
void animal::setCharacteristics(string name, string scientificname, int lifeexpectancy)	//a method; must have same name as class
{
	n = name;
	sn = scientificname;
	le = lifeexpectancy;
}
float animal::getN()
{
	return n;
}
float animal::getSN()
{
	return sn;
}
float animal::getLE()
{
	return le;
}