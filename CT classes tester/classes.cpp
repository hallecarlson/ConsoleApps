#include <iostream>
#include <stdio.h
#include <conio.h>
#include<fstream>
#include "square.h"
#include "person.h"
using namespace std;

int main()
{
	/*square S;
	S.setDimensions(7);
	R.perimiter();
	R.area();
	printf("side length = %f\n", S.getS());
	printf("perimiter = %f\narea = %f\n", S.perimiter(), S.area());

	return 0;*/

	person P;
	P.setCharacteristics("halle", 18);
	printf("name = %s\nage = %i\n", P.getN().c_str(), P.getA());
}