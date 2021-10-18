// Averages.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author: Halle Carlson
    Problem:
    Project name: GS02-06 (Averages)
    File name: Averages.cpp

    Pseudocode:

    Maintenance log:
    Date: 10/5/21   Done:
                    Created project
                    Pushed to GitHub

    Date: 10/12/21  Done:
                    Added code to allow user to input values
                    Added code to output instructions and user inputs
                    Fixed errors
                    Added comments
                    Pushed to GitHub

    Date: 10/13/21  Done:
                    Added code
                    Added comments
                    Fixed errors
                    Pushed to GitHub

    Date: 10/15/21  Done:
                    Added code to calculate and output values
                    Pushed to GitHub

    Date: 10/18/21  Done:
                    Fixed an error in division code
                    Added comments
                    Added code
                    Pushed to GitHub
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    //introduction here
    printf("What is your name?\n");
    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);

    printf("\nHow many miles did you travel, %s?\n", name.c_str());
    int miles;
    scanf_s("%d", &miles);
    fseek(stdin, 0, SEEK_END);

    printf("How many hours did you travel for, %s?\n", name.c_str());
    int hours;
    scanf_s("%d", &hours);
    fseek(stdin, 0, SEEK_END);

    printf("How many gallons of gas did you use, %s\n", name.c_str());
    int gallons;
    scanf_s("%d", &gallons);
    fseek(stdin, 0, SEEK_END);

    printf("\nHere's what I heard, %s...\n\n", name.c_str());
    printf("You...\n");
    _getch();
    printf("Traveled:     %d miles\n", miles);
    printf("Traveled for: %d hours\n", hours);
    printf("Used:         %d gallons\n\n", gallons);
    
    //avg speed to the nearest mile (mph)
    //avg fuel consumption to the nearest tenth of a mile (mpg)
    int avgspeed;
    float avgfuel;
    int remainder_avgspeed;

    //avgspeed = (float)miles / (float)hours;

    avgspeed = miles / hours;
    //remainder_avgspeed = miles % hours;


    avgfuel = (float)miles / (float)gallons;

    printf("%s, your:\n", name.c_str());
    printf("Average speed: %d mph\n", avgspeed);
    printf("Average fuel consumption: %.1f\n", avgfuel);
    //printf("%d", remainder_avgspeed);
    _getch();
    
    return 0; 
}

