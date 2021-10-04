// RandomNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author: Halle Carlson
    Problem: Generate random numbers by simulating a 6-sided die and a 12-sided die, as well as generating a 
    random float between 00 and 5.0 (inclusive)
    Project name:
    File name:

    Pseudocode:

    Maintenance Log:
    Date: 10/4/21   Done:
                    Created project
                    Added comments
                    Added code to simulate 6-sided die and 12-sided die
                    Fixed errors
                    Added code to generate f=random float 
                    Fixed Errors
                    Updated comments
                    Pushed to GitHub
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    //srand(0);
    srand((unsigned)time(NULL));
    int die_min;
    int die_max;
    int die_rn;
    float float_min;
    float float_max;
    float float_rn;
    die_min = 1;                                  //6-sided die
    die_max = 6;
    die_rn = die_min + rand() % (die_max - die_min + 1);
    printf("6-sided die roll = % i\n", die_rn);
    die_max = 12;
    die_rn = die_min + rand() % (die_max - die_min + 1);
    printf("12-sided die roll = % i\n", die_rn);
}


