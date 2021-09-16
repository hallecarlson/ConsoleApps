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
                    Pulled from GitHub
                    Added 1 bool and 3 doubles
                    Renamed variables and constants to more interesting names
*/
// NOTE FOR ME: 13 variables and 5 constants. 1 bool, 3 int, 3 char, 3 string, and 3 double variables.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    printf("String Variables\n\t");                 // outputs label "String Variables" above string outputs
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
    
    printf("Boolean Variable\n\t");
    bool quebec = true;
    printf("%b\n", quebec);
    
    printf("Integer Variables\n\t");                // outputs label "Integer Variables" above integer outputs
    int xray = 0;
    int yankee = 5;
    int zulu = 10;
    printf("xray = %i\n\t", xray);
    printf("yankee = %i\n\t", yankee);
    printf("zulu = %i\n\t", zulu);
    xray = 8;
    yankee = 16;
    zulu = 32;
    printf("xray = %i\n\t", xray);
    printf("yankee = %i\n\t", yankee);
    printf("zulu = %i\n", zulu);
    
    printf("Character Variables\n\t");              // outputs label "Character Variables" above character outputs
    char delta = 'q';
    char foxtrot = 'r';
    char hotel = 's';
    printf("delta = %c\n\t", delta);
    printf("foxtrot = %c\n\t", foxtrot);
    printf("hotel = %c\n\t", hotel);
    delta = 'x';
    foxtrot = 'y';
    hotel = 'z';
    printf("delta = %c\n\t", delta);
    printf("foxtrot = %c\n\t", foxtrot);
    printf("hotel = %c\n", hotel);
    
    printf("Double Variables\n\t");
    double november = 65536;
    printf("%d\n\t", november);
    double oscar = 32768;
    printf("%d\n\t", oscar);
    double papa = 16384;
    printf("%d\n", papa);
    
    printf("Floating Constants\n\t");               // outputs label "Floating Constants" above floating constant outputs
    const float euler = 2.7182818;                  // Euler's number (e)        
    const float c = 3.0e8;                          // speed of light in m/s
    const float g = 9.8;                            // acceleration due to gravity in m/s^2
    const float avogadro = 6.0221515e23;            // Avogadro's Constant
    const float boltzmann = 1.380650e23;            // Boltzmann's Constant  
    printf("euler = %f\n\t", euler);
    printf("c = %f\n\t", c);
    printf("g = %f\n\t", g);
    printf("avogadro = %f\n\t", avogadro);
    printf("boltzmann = %f\n\n", boltzmann);

    printf("Press any key to continue.\n");
    _getch();
    return 0;
}

