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
    Date: 2/4/22        Done:
                        Created project
                        Added code for project
                        Got help from Mr. Miyoshi
                        Pushed to GitHub

*/

#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include <vector>
#include <windows.h>
using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    vector<vector<int>> table;


    printf("{ \n");
    Sleep(50);
    for (int scalar = 1; scalar <= 12; scalar++)
    {
        printf("{ ");
        Sleep(50);
        vector<int> row;
        for (int i = 1; i <= 12; i++)
        {
            row.push_back(i*scalar);
            printf("%i, ", row[i - 1]);
            Sleep(50);
            //printf("%i * %i = ", i, scalar);
            //printf("%i\n", table.at(i) * scalar);

        }
        table.push_back(row);
        printf(" }, \n");
        Sleep(50);
    }
    printf("} \n");
    Sleep(50);
    _getch();

    system("cls");
    printf("Quiz time!\n");
    _getch();

    int ans;
    char retake;

    do
    {
        int rn1 = 1 + rand() % (12 - 1 + 1);
        int rn2 = 1 + rand() % (12 - 1 + 1);

        printf("\nWhat is:");
        printf("%i * %i\n>", table[rn1][0], table[0][rn2]);
        scanf_s("%i", &ans);
        fseek(stdin, 0, SEEK_END);

        if (ans == table[rn1][0] * table[0][rn2])
        {
            printf("\nCorrect!\n");
        }
        else
        {
            printf("\nIncorrect!\n");
            printf("Answer: %i * %i\n", table[rn1][0] * table[0][rn2]);
        }
        printf("Try another ? (y for yes)\n>");
        scanf_s("%c", &retake);
        fseek(stdin, 0, SEEK_END);
    } while (retake == 'y');

    return 0;
}