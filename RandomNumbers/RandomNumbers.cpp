// RandomNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Problem:        Generate random numbers by simulating a 6-sided die and a 12-sided die, as well as generating a 
                    random float between 00 and 5.0 (inclusive) and a random capital letter.
    Project name:   Problem GS02-03 (dice and other random numbers)
    File name:      RandomNumbers.cpp

    Pseudocode:     The program generates a series of random numbers. Using int variables, the program simulates a  
                    6-sided die and a 12-sided die. Using a float variable, the program generates a random number  
                    between 0.0 and 5.0, inclusive of 5.0. Using a char variable and ASCII codes, the program generates     
                    a random capital letter. Each output is labeled, with a number of spaces following the label in 
                    the code so that each random number output lines up.

    Maintenance Log:
    Date: 10/4/21   Done:
                    Created project
                    Added comments
                    Added code to simulate 6-sided die and 12-sided die
                    Fixed errors
                    Added code to generate random float between 0.0 and 5.0
                    Fixed Errors
                    Updated comments
                    Pushed to GitHub

    Date: 10/5/21   Done:
                    Updated code to generate random float between 0.0 and 5.0
                    Added code to generate random capital letter using ASCII codes
                    Fixed errors
                    Renamed variables for organization purposes
                    Organized code to be easier for programmer to read
                    Formatted output
                    Updated comments and pseudocode
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
    
    int min_die = 1;                                    
    int max_die = 6;
    int rn = min_die + rand() % (max_die - min_die + 1);    //[1, 6] 6-sided die
    printf("6-sided die roll      ");                       //space to format output
    printf("= %i\n", rn);
    max_die = 12;                                       
    rn = min_die + rand() % (max_die - min_die + 1);        //[1, 12] 12-sided die
    printf("12-sided die roll     ");                       //space to format output
    printf("= %i\n", rn);
    
    float rf = (float)rand() / (float)RAND_MAX * 5.0;       //[0.0, 5.0] random float within range
    printf("Random float          ");                       //space to format output
    printf("= %f\n", rf);

    char min_c = 65;                                        //65 == A (ASCII code)
    char max_c = 90;                                        //90 == Z (ASCII code)
    char rc;
    rc = min_c + rand() % (max_c - min_c + 1);              //[A, Z] random capital letter
    printf("Random capital letter = %c\n", rc);
}


