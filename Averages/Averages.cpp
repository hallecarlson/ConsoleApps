// Averages.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Problem:        Create a program that gets user input for their name and values for the amount of miles, hours and 
                    gallons of gas they used on a trip, and then calculates and outputs their average speed and fuel consumption.
    Project name:   GS02-06 (Averages)
    File name:      Averages.cpp

    Pseudocode:     The program gives a short introduction and asks the user to input their name. Next, the program asks the user
                    to input an amount of miles travelled, hours travelled for, and gallons used for a trip. After the program 
                    recieves the user's inputs, it outputs them back to the user. The inputs are printed as float variables with no 
                    decimal places. The program then calculates the user's average speed and fuel consumption. First, the program 
                    divides the miles by the hours, typecasted from float variables to int variables, to find the user's average 
                    speed. Then, the program divides the miles by the gallons to find the user's average fuel consumption. The program
                    outputs the calculations to the user. The average speed is rounded down to the nearest whole number. The average
                    fuel consumption is rounded to the nearest tenth of a percent.


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
                    Formatted code
                    Pushed to GitHub

    Date: 10/19/21  Done:
                    Added code
                    Formatted code
                    Changed variable types to fix a problem with calculation and output
                    Added and formatted pseudocode and comments
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
    printf("Hello! This application will calculate your average speed and fuel consumption over the course of a trip.\n");
    printf("What is your name?\n");
    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);
    printf("Nice to meet you, %s :)\n\n", name.c_str());
    _getch();

    printf("Let's get started.\n");
    _getch();
    printf("\nHow many miles did you travel, %s?\n", name.c_str());
    float miles;
    scanf_s("%f", &miles);
    fseek(stdin, 0, SEEK_END);

    printf("How many hours did you travel for, %s?\n", name.c_str());
    float hours;
    scanf_s("%f", &hours);
    fseek(stdin, 0, SEEK_END);

    printf("How many gallons of gas did you use, %s\n", name.c_str());
    float gallons;
    scanf_s("%f", &gallons);
    fseek(stdin, 0, SEEK_END);

    printf("\nHere's what I heard, %s...\n\n", name.c_str());
    printf("You...\n");
    _getch();
    printf("Traveled:     %.0f miles\n", miles);
    printf("Traveled for: %.0f hours\n", hours);
    printf("Used:         %.0f gallons\n\n", gallons);
    _getch();

    int avgspeed;
    float avgfuel;
    avgspeed = (int)miles / (int)hours;                                 //speed rounded down to a whole number
    avgfuel = miles / gallons;                                          //fuel consumption to the nearest tenth of a percent

    printf("%s, your:\n", name.c_str());
    printf("Average speed:            %d mph\n", avgspeed);
    printf("Average fuel consumption: %.1f\n", avgfuel);
    _getch();
    
    return 0; 
}

