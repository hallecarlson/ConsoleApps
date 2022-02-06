// multiplyflashcards.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Problem:        Write a program to hold the integers of the multiplication table. The table will hold the 
                    answers for the 12x12 table. That is to say that the numbers will be the answers for all the 
                    simple multiplications from 1 to 12 (do not include 0). (Remember 1x1=1, 1x2=2, 1x3=3, etc.) 
                    Note that when storing the numbers, the multiplications are not the same as the indices. They 
                    are the multiplications of the index + 1. So calculate accordingly. The 2D vector should only 
                    be 12 by 12. Also make an interface where you quiz the user with flash cards. Output the random 
                    multiplication (3 x 4, for instance), get user input, then check the user input against the 
                    answer in the table. Keep giving random multiplications until the user tells you to quit 
                    (use a loop). Alternately, you can output the multiplication, wait some amound of time, then 
                    flash the answer for a certain amount of time before moving on (or wait for the user to press 
                    a key). Make the multiplications random.
    File name:      multiplyflashcards.cpp

    Pseudocode:         

    Maintenance Log:
    Date: 2/2/22        Done:
                        Created project
                        Added code for project
                        Tested code
                        Fixed errors
                        Pushed to GitHub

    Date: 2/4/22        Done:
                        Added code for project
                        Played around with a function
                        Encountered errors with return type
                        
*/

#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

void tables(vector<vector<int>> table, int scalar, int i)
{
    for (scalar = 1; scalar <= 12; scalar++)
    {
        for (i = 0; i <= 12; i++)
        {            
            table.push_back(i);    
            //printf("%i * %i = ", i, scalar);
            //printf("%i\n", table.at(i) * scalar);
        }
    }

    return;
}

int main()
{
    srand((unsigned)time(NULL));
    vector<vector<int>> table;
    int scalar = 1;
    int i = 0;
    int min = 1;
    int max = 12;
    int ans;
    char retake;

    tables(table, scalar, i);

    do 
    {
        scalar = min + rand() % (max - min + 1);
        printf("Please answer the following question: ");
        printf("%i * %i = ", table.at(i), scalar);
        scanf_s("%i\n", &ans);
        fseek(stdin, 0, SEEK_END);       

        if (ans == table.at(i) * scalar)
        {
            printf("Correct!\n");
        }
        else
        {
            printf("Incorrect!\n");
        }

        printf("Try another question? (y for yes)");
        scanf_s("%c", &retake);
        fseek(stdin, 0, SEEK_END);

    } while (retake == 'y');

    return 0;
}