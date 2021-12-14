// fraction reducer.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS06-01
    File Name:      fraction reducer.cpp
    Purpose:        Write a program that reduces fractions using a function. The function will return
                    an int and have two int arguments. The returned int will be the greatest common factor
                    (GCF). 

    Pseudocode:     GCF function
                    Math for finding GCF
                    Main function
                    Inputs for numerator and denominator
                    GCF and reduced fraction printed to screen

    Notes: 

    Maintenance Log:
    Date: 12/7/21       Done:
                        Created project
                        Added comments
                        Added basic starting code
                        Pushed to GitHub

    Date: 12/10/21      Done:
                        Added code
                        Wrote a function for GCF
                        Pushed to GitHub

    Date: 12/11/21      Done:
                        Pulled from GitHub
                        Added code for GCF function
                        Changed code in GCF function to factor down instead of up
                        Tested for errors
                        Troubleshooted
                        Pushed to GitHub

                        Tried to find what was causing the error
                        Got help from Ryan
                        Tried different things to fix the error
                        Failed
                        Pushed to GitHub

    Date: 12/13/21      Done:
                        Pulled from GitHub
                        Edited and compiled code
                        Troubleshooted
                        Got Help from Mr. Miyoshi
                        Re-compiled and tested code
                        Added pseudocode
                        Pushed to gitHub

    Date: 12/14/21      Done:
                        Fixed minor formatting error
                        Pushed to GitHub
                        Delted old comment
                        Pushed to GitHub

*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;

//int GCF();

int GCF(int num, int denom)
{
    num;
    denom;
    int gcf = 1;
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0 && denom % i == 0)
        {
            gcf = i;
        }
    }

    return gcf;
}

int main()
{
    printf("Welcome to my Fraction Reducer program!\n");
    printf("By: Halle Carlson\n\n"); 

    int num;
    printf("Please enter a numerator\n");
    printf(">");
    scanf_s("%i", &num);
    fseek(stdin, 0, SEEK_END);

    int denom;
    printf("\nPlease enter a denominator\n");
    printf(">");
    scanf_s("%i", &denom);
    fseek(stdin, 0, SEEK_END);

    int gcf = GCF(num, denom); //function call
    printf("\nYour GCF (greatest common factor):\n");
    printf("%i\n", gcf);

    printf("Your reduced fraction:\n");
    num = num / gcf; 
    denom = denom / gcf;
    printf("%i/%i\n", num, denom);

    return 0;
}




