// VariablesAndConstants.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Author: Halle Carlson
   Project Name: Variables and Constants
   File Name: VariablesAndConstants.cpp
   Purpose: Output variables and constants
   Pseudocode:
   Maintenance Log:
   9/13/21
   Began project
   9/14/21
   Added code
*/
// NOTE FOR ME: 13 variables and 5 constants. 1 bool, 3 int, 3 char, 3 string, and 3 double variables.

#include <iostream>
#include <conio.h>
#include <stdio.h>

int main()
{
    printf("Hello World\n");    // first output to the screen
    int a = 0;
    const float b = 10.0;
    char c = 'q';
    printf("a = %i\n", a); 
    printf("b = %f\n", b);
    printf("c = %c\n", c);

    // some additional code
    a = 14;
    c = 'x';
    printf("a = %i\n", a);
    printf("b = %f\n", b);
    printf("c = %c\n", c);
    // additional code end

    printf("Press any key to continue.\n");
    _getch();
    return 0;
    /*
    const float c = 3.0e8;      // speed of light in m/s
    const float c = 9.8;        // acceleration due to gravity in m/s^2
    */
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
