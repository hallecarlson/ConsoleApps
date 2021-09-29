// aLittleDivision.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
	Author:
	Problem:
	Project Name:
	File Name:

	Pseudocode:

	Maintenance Log:	
	Date: 9/28/21	Done:
					Created project
					Added Code to calculate and output addition, subtraction, multiplication, and division problems
					Fixed Errors
					Added comments
					Pushed to GitHub
					Pulled from GitHub
					Added comments
					Added code to calculate and output division problems
					Changed code to redefine variables for answers instead of defining new ones
					Added code to calculate and output remainders for division problems
					Added code to format the output
					Fixed errors
					
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
	int c;
	int intRemainder;
	float x = 8.9;
	float y = 5.6;
	float z;

	printf("Addition Problems\n");
	printf("Int Variables:\t");
	printf("Float Variables:\n");
	c = a + b;
	printf("a + b = % d\t", c);
	z = x + y;
	printf("x + y = % f\n\n", z);
	_getch();
	
	printf("Subtraction Problems\n");
	printf("Int Variables:\t");
	printf("Float Variables:\n");
	c = b - a;
	printf("b - a = % d\t", c);
	z = y - x;
	printf("y - x = % f\n\n", z);
	_getch();

	printf("Multiplication Problems\n");
	printf("Int Variables:\t");
	printf("Float Variables:\n");
	c = a * b;
	printf("a * b = % d\t", c);
	z = x * y;
	printf("x * y = % f\n\n", z);
	_getch();

	printf("Division Problems\n");
	printf("Int Variables:\t");
	printf("Float Variables:\n");
	c = b / a;
	intRemainder = b % a;
	printf("b / a = % d\n", c);
	printf("b % %a = % d\t", intRemainder);
	z = x / y;
	printf("x / y = % f\n", z);
	c = y / x;
	intRemainder = (int)y % (int)x;
	printf("y / x = % d\n", c);
	printf("y % %x = % d\t", intRemainder);
	z = a / b;
	printf("a / b = % f\n", z);
	c = a / y;
	intRemainder = a % (int)y;
	printf("a / y = % d\n", c);
	printf("a % %y = % d\t", intRemainder);
	z = x / b;
	printf("x / b = % f\n", z);
	c = a / (int)x;
	intRemainder = a % (int)x;
	printf("a / x = % d\n", c);
	printf("a % %x = % d\t", intRemainder);
	z = y / (float)b;
	printf("y / b = % f\n", z);
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

