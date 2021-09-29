// aLittleDivision.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
	Author:			Halle Carlson
	Problem:		Write a program that outputs 2 addition, 2 subtraction, 2 multiplication, and 6 division 
					problems using int and float variables.
	Project Name:	A Little Division
	File Name:		aLittleDivision.cpp

	Pseudocode:		The program outputs a series of math problems involving integer and floating variables. In all,
					there are 2 addition, 2 subtraction, 2 multiplication, and 8 (12 including remainders) division
					operations, for a total of 14 (18 including remainders) operations. The code uses 7 variables. 
					There are 2 int and 2 float with values declared in the beginning of the code. There is 1 int
					and 1 float with values redefined after each operation using that type of variable which 
					represent the answer of the operation. There is 1 int with a value redefined after each 
					operation using int variables which represents the remainder of the operation. Each operation
					is outputted under a label that describes the type of operation and variable.

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
					Added pseudocode and comments
					Pushed to GitHub

	Date: 9/29/21	Done:
					Pulled from GitHub
					Cleaned up code and comments
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
	printf("b / a = % d\n", c);				// int division
	printf("b % %a = % d\t", intRemainder);	// remainder
	z = x / y;
	printf("x / y = % f\n", z);				// float division
	c = y / x;
	intRemainder = (int)y % (int)x;
	printf("y / x = % d\n", c);				// float division into int variable
	printf("y % %x = % d\t", intRemainder);	// remainder
	z = a / b;
	printf("a / b = % f\n", z);				// int division into float variable
	c = a / y;
	intRemainder = a % (int)y;	
	printf("a / y = % d\n", c);				// mixed division into int variable
	printf("a % %y = % d\t", intRemainder);	// remainder
	z = x / b;
	printf("x / b = % f\n", z);				// mixed division into float variable
	c = a / (int)x;
	intRemainder = a % (int)x;
	printf("a / x = % d\n", c);				// int division into int variable
	printf("a % %x = % d\t", intRemainder);	// remainder
	z = y / (float)b;
	printf("y / b = % f\n", z);				// float division into float variable
	_getch();
}

