// VariablesAndConstants.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Author: Halle Carlson
*  Problem: Declare, initialize, and output a series of variables and constants including 3 integer variables, 
            1 boolean variable, 3 string variables, 3 double variables, and 5 floating constants.
   Project Name: Variables and Constants
   File Name: VariablesAndConstants.cpp
   
   Pseudocode: The program declares, initializes, and outputs a series of variables and constants including 3 
               integer variables, 1 boolean variable, 3 string variables, 3 double variables, and 5 floating 
               constants. Before each type of data is listed in the output window, the program outputs a label 
               for that data type. Below each label, the corresponding values are outputted with a tab inserted 
               in front of each so that the information in the output window is easier for the user to read. 
               Each variable and constant is outputted and then variables are assigned new values and outputted 
               again. The values of the floating constants come from math and science and the names of most other 
               variables and constants come from the NATO Phonetic Alphabet.

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
    
    Date: 9/17/21   Done:
                    Edited code for boolean until it worked
                    Edited code for double variables until it worked
                    Formatted outputs
                    Pushed to GitHub
                    Pulled from GitHub
                    Updated pseudocode
                    Added code to assign new values to the string variables, boolean variable, and double variables
                    Fixed several errors caused by my attempt to assign new values to some of the variables
                    Pushed to GitHub
                    Updated Pseudocode
                    Pushed to GitHub
*/

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
    printf("lastName = %s\n\t", lastName.c_str());
                                                
    s = "arreis";
    printf("s = %s\n\t", s.c_str());
    printf("firstName = %s\n\t", firstName.c_str());

    t = "ognat";
    printf("t = %s\n\t", t.c_str());
    printf("middleName = %s\n\t", middleName.c_str());

    u = "mrofinu";
    printf("u = %s\n\t", u.c_str());
    printf("lastName = %s\n", lastName.c_str());
     
    printf("Boolean Variable\n\t");                 // outputs label "Boolean Variable" above boolean output
    bool quebec = true;
    printf("quebec = %i\n\t", quebec);
    
    quebec = false;
    printf("quebec = %i\n", quebec);

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
    printf("november = %lf\n\t", november);     
    double oscar = 32768;           
    printf("oscar = %lf\n\t", oscar);
    double papa = 16384;            
    printf("papa = %lf\n\t", papa);

    november = 32768;
    printf("november = %lf\n\t", november);
    oscar = 16384;
    printf("oscar = %lf\n\t", oscar);
    papa = 8192;
    printf("papa = %lf\n", papa);
    
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

