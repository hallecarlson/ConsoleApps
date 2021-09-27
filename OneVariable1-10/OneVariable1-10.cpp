// OneVariable1-10.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author: Halle Carlson
    Problem:
    Project Name: 
    File Name:
    Pseudocode:
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

*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;
using std::right;

int main()
{
    //std::cout << "Hello World!\n";
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

