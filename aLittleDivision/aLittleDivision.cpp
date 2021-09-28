// aLittleDivision.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Maintenance Log:
Date: 9/28/21	Done:
				Created project
				Added Code to calculate and output math problems
				Fixed Errors
				Added comments
				Pushed to GitHub
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	int a = 7;
	int b = 12;
	float x = 8.9;
	float y = 5.6;

	printf("Addition Problems\n");
	int c = a + b;
	float m = x + y;
	printf("a + b = % d\n", c);
	printf("x + y = % f\n\n", m);
	_getch();
	
	printf("Subtraction Problems\n");
	int d = b - a;
	float n = y - x;
	printf("b - a = % d\n", d);
	printf("y - x = % f\n\n", n);
	_getch();

	printf("Multiplication Problems\n");
	int e = a * b;
	float o = x * y;
	printf("a * b = % d\n", e);
	printf("x * y = % f\n\n", o);
	_getch();

	printf("Division Problems\n");
	int f = b / a;
	float p = x / y;
	printf("b / a = % d\n", f);
	printf("x / y = % f\n", p);
	_getch();
	/*
	printf(“Division problems.\n\n”);	// output message to the screen
	int a = 3;
	int b = 4;
	int c;
	float x = 3.3;
	float y = 4.4;
	float z;

	c = a / b;
	printf(“a / b = % d\n”, c);	// int division
	z = x / y;
	printf(“x / y = % f\n”, z);	// float division
	c = x / y;
	printf(“x / y = % d\n”, c);	// float division into int variable
	z = a / b;
	printf(“a / b = % f\n”, z);	// int division into float variable
	c = a / y;
	printf(“a / y = % d\n”, c);	// mixed division into int variable
	z = x / b;
	printf(“x / b = % f\n”, z);	// mixed division into float variable
	c = a / (int)y;
	printf(“a / y = % d\n”, c);	// int division into int variable
	z = x / (float)b;
	printf(“x / b = % f\n”, z);	// float division into float variable

	c = a / b;
	printf(“a / b = % d\n”, c);	// int division
	int d = a % b;
	printf(“a % %b = % d\n”, d);	// modulus (remainder)

	printf(“Press the any key to continue.\n”);
	//_getch();	// Uncomment this line if your code runs but does not stay on the screen when finished.
	return 0;
	*/
}

