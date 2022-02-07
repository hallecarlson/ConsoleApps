// sinecosinetables.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Problem:        Vectors can be used as lookup tables for values that are often calculated in a program. 
                    By using lookup tables instead of always calculating the answer, you can often make programs 
                    run faster because the tables hold the data that takes up processor time to calculate. Create 
                    two lookup tables (vectors) – one for the sine and one for the cosine values. Each lookup table 
                    should hold the sine or cosine value for each degree from 0 to 359. When calculating the sine 
                    or cosine value, you must make sure that the argument of the function (sin(), cos()) is in 
                    radians. Remember that 180° equal  radians. Use M_PI as your constant for . (It is in math.h 
                    and can be accessed by using the code we have already seen but which is given again for your 
                    convenience.)
    Project name:   Problem GS10-03 (sine and cosine lookup tables)
    File name:      sinecosinetables.cpp

    Pseudocode:         

    Maintenance Log:
    Date: 2/2/22        Done:
                        Created project

    Date: 2/7/22        Done:
                        Added some code
                        Pushed to GitHub
                        
*/

#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include <vector>
#define _USE_MATH_DEFINES   //M_PI for pi
#include <math.h>
using namespace std;

int main()
{
    vector<float> sineTable;

    for (int n = 1; n <=  360; n++)
    {
        sinTable.push_back(sin(n(2(M_PI) / 360)));
    }

    return 0;
}