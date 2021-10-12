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
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    //introduction here
    printf("What is your name?\n");
    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);

    printf("How many miles did you travel, %s?\n", name.c_str());
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

    printf("Let me make sure I heard you corrctly, %s...\n", name.c_str());
    printf("You...\n");
    _getch();
    printf("Traveled:     %d miles\n", miles);
    printf("Traveled for: %d hours\n", hours);
    printf("Used:         %d gallons\n", gallons);
    printf("Is this information correct, %s?\n", name.c_str());

    //if/else statement for if user needs to change their inputs
}

