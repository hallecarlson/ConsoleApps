// fraction reducer.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS06-01
    File Name:      fraction reducer.cpp
    Purpose:        Write a program that reduces fractions using a function. The function will return
                    an int and have two int arguments. The returned int will be the greatest common factor
                    (GCF). 

    Pseudocode:


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

*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;

//int GCF();

int num;
int denom;
int gcf;
int i;

int GCF(int num, int denom)
{
    gcf = 1;

    if (num >= denom)
    {
        i = num;
    }
    else if (denom > num)
    {
        i = denom;
    }

    for (i >= 2; i--;) //check this later
    {
        if (num % i == 0 && denom % i == 0) //change
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

    printf("Please enter a numerator\n");
    printf(">\n");
    scanf_s("%i", &num);
    fseek(stdin, 0, SEEK_END);

    printf("Please enter a denominator\n");
    printf(">\n");
    scanf_s("%i", &denom);
    fseek(stdin, 0, SEEK_END);

    printf("Your GCF (greatest common factor):\n");
    printf("%i\n", gcf);

    printf("Your reduced fraction:\n");
    num = num / gcf; //error int division by 0
    denom = denom / gcf;
    printf("%i/%i\n", num, denom);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    return 0;
}




