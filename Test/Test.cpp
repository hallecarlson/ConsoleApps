// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));

	float rf = (float)rand() / (float)RAND_MAX;				//[0.0, 5.0] random float within range
	printf("Random float          ");                       //space to format output
	printf("= %f\n", rf);
}

