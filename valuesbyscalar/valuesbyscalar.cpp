// valuesbyscalar.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Problem:        Write a program that declares an integer vector of 50 elements. (Use a loop to populate 
                    the vector with consecutive or random numbers.) Then use the fact that scalar multiplication 
                    of matrices (vectors) is simply the multiplication of each element in the matrix by the given 
                    scalar. Let the user input a number (scalar) that will be used to multiply the matrix (vector). 
                    Then multiply the matrix by that number. Output the new vector values to the screen.
    Project name:   Problem GS10-01 (multiply vector values by scalar)
    File name:      valuesbyscalar.cpp

    Pseudocode:         Function for the for loop
                            For loop for printing numbers multiplied by a scalar that is initially equal to 1, and is 
                            then redefined by the user
                        int main()
                            Vector
                            Function call
                            Int for scalar
                            User input for scalar
                            Function call

    Maintenance Log:
    Date: 1/31/22       Done:
                        Created project
                        Pushed to GitHub

                        Pulled from GitHub
                        Created a function for a for loop for printing numbers multiplied by a scalar
                        Added code for user input of scalar value
                        Got help from Ryan Carlson
                        Tested code
                        Added pseudocode
                        Made minor changes to output format
                        Pushed to GitHub
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <vector>
using namespace std;

void numbers(vector<int> nums, int scalar)
{
    for (int i = 0; i < 50; i++)
    {
        nums.push_back(i);
        printf("%6i", nums.at(i)*scalar);
    }

    return;
}

int main()
{
    vector<int> nums;
    numbers(nums, 1);

    int scalar;
    printf("\n\n\tPlease input a scalar to multiply these numbers by\n\t>");
    scanf_s("%i", &scalar);
    fseek(stdin, 0, SEEK_END);
    printf("\n");

    numbers(nums, scalar);
    

    return 0;
}