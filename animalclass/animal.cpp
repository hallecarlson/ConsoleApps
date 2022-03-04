#include "animal.h"

animal::animal()
{
	n = "a";
	sn = "a";
	le = 0;
}
animal::animal(string name, string scientificname, int lifeexpectancy)
{
	n = name;
	sn = scientificname;
	le = lifeexpectancy;
}
animal::animal(animal(&A))
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
void animal::setName(string name)
{
	n = name;
}
void animal::setScientificname(string scientificname)
{
	n = scientificname;
}
void animal::setLifeexpectancy(int lifeexpectancy)
{
	n = lifeexpectancy;
}
string animal::getN()
{
	return n;
}
string animal::getSN()
{
	return sn;
}
int animal::getLE()
{
	return le;
}