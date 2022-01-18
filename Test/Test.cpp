// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// 10/29/21:	coded ASCII art bat
// 1/13/22:		practice code for a looping competency test
// 1/17/22		practice code for string competency test
using namespace std;
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>


int main()
{
	string sLName = "Carlson";
	for (int i = sLName.length() - 1; i >= 0; i--)
	{
		printf("%c", sLName[i]);
	}

	_getch();
	return 0;
}

