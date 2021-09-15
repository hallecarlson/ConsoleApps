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
    printf("Hello World!\n");       // first output to the screen
    int x = 0;
    int y = 0;
    int z = 0;
    char d = 'q';
    char f = 'r';
    char h = 's';
    const float e = 2.7182818;      // Euler's number (e)        
    const float c = 3.0e8;          // speed of light in m/s
    const float g = 9.8;            // acceleration due to gravity in m/s^2
    const float a = 6.0221515e23;   // Avogadro's Constant
    const float b = 1.380650e23;    // Boltzmann's Constant
    printf("x = %i\n", x);
    printf("d = %c\n", d);
    printf("e = %f\n", e);
    printf("c = %f\n", c);
    printf("g = %f\n", g);
    printf("a = %f\n", a);
    printf("b = %f\n", b);

    x = 8;
    y = 16;
    z = 32;
    d = 'x';
    f = 'y';
    h = 'z';
    printf("x = %i\n", x);
    printf("y = %i\n", y);
    printf("z = %i\n", z);
    printf("d = %c\n", d);
    printf("f = %c\n", f);
    printf("h = %c\n", h);
    printf("e = %f\n", e);
    printf("c = %f\n", c);
    printf("g = %f\n", g);
    printf("a = %f\n", a);
    printf("b = %f\n", b);

    printf("Press any key to continue.\n");
    _getch();
    return 0;
}

