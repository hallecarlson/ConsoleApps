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
   
   Date: 9/15/21    Done:
                    Added 3 const floats, 2 ints, 2 charas, 1 string
                    Added code to print the new constants and variables
                    Added placeholer pseudocode for 1 bool and 3 double variables
                    Updated pseudocode
                    Fixed several errors
                    Re-organized code to be neater and easier to read
                    Formatted output
                    Pushed to GitHub
*/
// NOTE FOR ME: 13 variables and 5 constants. 1 bool, 3 int, 3 char, 3 string, and 3 double variables.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    printf("String Variables\n\t");       // first output to the screen
    string s;
    s = "sierra";
    const string firstName = "Halle";
    printf("s = %s\n\t", s.c_str());
    printf("firstName = %s\n\t", firstName.c_str());
    
    string t;
    t = "tango";
    const string middleName = "Rose";
    printf("t = %s\n\t", t.c_str());
    printf("firstName = %s\n\t", middleName.c_str());
    
    string u;
    u = "uniform";
    const string lastName = "Carlson";
    printf("u = %s\n\t", u.c_str());
    printf("lastName = %s\n", lastName.c_str());
    
    //bool
    
    printf("Integer Variables\n\t");
    int x = 0;
    int y = 5;
    int z = 10;
    printf("x = %i\n\t", x);
    printf("y = %i\n\t", y);
    printf("z = %i\n\t", z);
    x = 8;
    y = 16;
    z = 32;
    printf("x = %i\n\t", x);
    printf("y = %i\n\t", y);
    printf("z = %i\n", z);
    
    printf("Character Variables\n\t");
    char d = 'q';
    char f = 'r';
    char h = 's';
    printf("d = %c\n\t", d);
    printf("f = %c\n\t", f);
    printf("h = %c\n\t", h);
    d = 'x';
    f = 'y';
    h = 'z';
    printf("d = %c\n\t", d);
    printf("f = %c\n\t", f);
    printf("h = %c\n", h);
    
    /* 
    double
    double
    double
    */
    
    printf("Floating Constants\n\t");
    const float e = 2.7182818;      // Euler's number (e)        
    const float c = 3.0e8;          // speed of light in m/s
    const float g = 9.8;            // acceleration due to gravity in m/s^2
    const float a = 6.0221515e23;   // Avogadro's Constant
    const float b = 1.380650e23;    // Boltzmann's Constant  
    printf("e = %f\n\t", e);
    printf("c = %f\n\t", c);
    printf("g = %f\n\t", g);
    printf("a = %f\n\t", a);
    printf("b = %f\n\t", b);
    
    printf("e = %f\n\t", e);
    printf("c = %f\n\t", c);
    printf("g = %f\n\t", g);
    printf("a = %f\n\t", a);
    printf("b = %f\n\n", b);

    printf("Press any key to continue.\n");
    _getch();
    return 0;
}

