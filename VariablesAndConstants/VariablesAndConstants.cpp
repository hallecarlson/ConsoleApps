// VariablesAndConstants.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Author: Halle Carlson
*  Problem:
   Project Name: Variables and Constants
   File Name: VariablesAndConstants.cpp
   Pseudocode:
   Maintenance Log:
   Date: 9/13/21    Done:
                    Began project

   Date: 9/14/21    Done:
                    Added code
                    Created an error on purpose
                    Ran the code to test for errors
                    Fixed several errors in the code
*/
// NOTE FOR ME: 13 variables and 5 constants. 1 bool, 3 int, 3 char, 3 string, and 3 double variables.

#include <iostream>
#include <conio.h>
#include <stdio.h>

int main()
{
    printf("Hello World!\n");    // first output to the screen
    int a = 0;
    const float b = 10.0;
    char d = 'q';               // CHANGE THIS CONSTANT to something from math or science
    const float c = 3.0e8;      // speed of light in m/s
    const float g = 9.8;        // acceleration due to gravity in m/s^2
    printf("a = %i\n", a); 
    printf("b = %f\n", b);
    printf("d = %c\n", d);
    printf("c = %f\n", c);
    printf("g = %f\n", g);

    a = 14;
    d = 'x';
    printf("a = %i\n", a);
    printf("b = %f\n", b);
    printf("d = %c\n", d);
    printf("c = %f\n", c);
    printf("g = %f\n", g);

    printf("Press any key to continue.\n");
    _getch();
    return 0;
}

