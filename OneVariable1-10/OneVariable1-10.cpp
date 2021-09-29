// OneVariable1-10.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Problem:        Write a program that outputs 1-10 with one integer variable.
    Project Name:   Output 1-10 with one variable
    File Name:      OneVariable1-10.cpp
    
    Pseudocode:     The program outputs the numbers 1-10 with a single integer variable. Integer 'c' is assigned
                    the value of 1. The program outputs the value of c and then assigns it a new value of 2 using  
                    the c++ function. The program repeats this process until the numbers 1-10 are outputted, using  
                    format specifiers to print the numbers 1-9 so that they line up with the second digit of the 
                    number 10 instead of the first digit.

    Maintenance Log:
    Date: 9/22/21   Done:
                    Began project
                    Added code to print numbers 1-10 with one int variable
                    Pushed to GitHub

    Date: 9/24/21   Done:
                    Added code to print numbers 1-10 with one int variable
                    Added pseudocode and comments
                    Pushed to GitHub    

    Date: 9/27/21   Done: 
                    Edited code to change variable type to int from char
                    Added code to print numbers
                    Fixed errors
                    Added code to format the output
                    Pushed to GitHub
                    Pulled from GitHub
                    Updated pseudocode and comments
                    Pushed to GitHub
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    int c = 1;
    printf("%*i\n", 2,  c);
    c++;
    printf("%*i\n", 2, c);
    c++;
    printf("%*i\n", 2, c);
    c++;
    printf("%*i\n", 2, c);
    c++;
    printf("%*i\n", 2, c);
    c++;
    printf("%*i\n", 2, c);
    c++;
    printf("%*i\n", 2, c);
    c++;
    printf("%*i\n", 2, c);
    c++;
    printf("%*i\n", 2, c);
    c++;
    printf("%i\n", c);
}

