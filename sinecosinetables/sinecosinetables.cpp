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

    Pseudocode:         Vector
                        Sine table
                        Cosine table
                        Variables
                        Loop for do-while loop that gives sine and cosine values to user after user input

    Maintenance Log:
    Date: 2/2/22        Done:
                        Created project

    Date: 2/7/22        Done:
                        Added some code
                        Pushed to GitHub

    Date: 2/8/22        Done:
                        Got help from Mr. Miyoshi
                        Added code for project
                        Tested code
                        Fixed errors
                        Added pseudocode
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
#include <windows.h>
using namespace std;

int main()
{
    vector<float> sineTable;
    printf("Sine Table\n");
    for (int s = 0; s < 360; s++)
    {
        sineTable.push_back(sin(s * (M_PI / 180.0)));
        printf("%.4f\t", sineTable[s]);
        //Sleep(50);
    }

    printf("\n\n");

    vector<float> cosineTable;
    printf("Cosine Table\n");
    for (int c = 0; c < 360; c++)
    {
        cosineTable.push_back(cos(c * (M_PI / 180.0)));
        printf("%.4f\t", cosineTable[c]);
        //Sleep(50);
    }

    int ans;
    char retake;
    do
    {     
        printf("\n\n\nWhat is the angle you want to see the sine and cosine values for?\n>");
        scanf_s("%i", &ans);
        fseek(stdin, 0, SEEK_END);
        if (ans < 0)
        {
            ans = -ans;
            ans = 360 - ans % 360;
        }
        else
        {
            ans = ans % 360;
        }
        printf("\nSine = %f\tCosine = %f", sineTable[ans], cosineTable[ans]);

        printf("\nEnter another ? (y for yes)\n>");
        scanf_s("%c", &retake);
        fseek(stdin, 0, SEEK_END);
    } while (retake == 'y');

    return 0;
}