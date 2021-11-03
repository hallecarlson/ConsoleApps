// Non-looping Maze.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS03-06 (Non-looping Maze)
    File Name:      Non-looping Maze.cpp
    Purpose:        Create a maze based on the picture provided in goal sheet 3, but without a GUI. Give the user 
                    choices at each juncture. Once the player goes through a door, it shuts behind them and they cannot 
                    go back. Use nested branching. There are three+ levels of nesting. The user must be able to take each 
                    to the very end, even if it leads to a dead end.

    Pseudocode:

    Maintenance Log:
    Date: 11/2/21   Done:
                    Created project
                    Added comments
                    Added code for intro, narration, and branching
                    Pushed to GitHub

    Date: 11/3/21   DoneS
                    A
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    printf("Welcome to my maze game!\nCreated By: Halle Carlson\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    
    printf("Please enter your name:\n\tPlayer:");
    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);

    printf("\nHi, %s.\n", name.c_str());
    printf("You are trapped in a maze with only one way out.\n");
    printf("There are nine rooms connected by doors. Once you go through a door, it will lock and you may not go back through.\n");
    printf("You will be prompted to input the room you want to enter. Input only the room number or the letter (a , b, or c).\n\n");
    printf("Good luck!\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    int choice1;
    int choice2;
    int choice3;
    int choice4;
    int choice5;
    int choice6;
    int choice7;
    int choice8;
    int choice9;

    printf("[Room 1]\n"); //(1/2 == open, 1/4 == open)
    printf("The doors to 2 & 4 are open.\n");
    printf("Where will you go ?\n");
    printf("\ta. Room 2\n");
    printf("\tb. Room 4\n");
    printf("> ");
    scanf_s("%i", &choice1);
    fseek(stdin, 0, SEEK_END);

    if (choice1 == 2) //(1/2 == locked, 2/3 == open, 2/5 == open)
    {
        printf("\n%s went through the door between 1 & 2.\n");
        printf("The door connecting 1 & 2 is now locked.\n\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("[Room 2]");
        printf("The doors to 3 & 5 are open.");
        printf("Where will you go ?\n");
        printf("\ta. Room 3\n");
        printf("\tb. Room 5\n");
        printf("> ");
        scanf_s("%i", &choice2);
        fseek(stdin, 0, SEEK_END);

        if (choice2 == 3)
        {
            printf("[Room 3]\n");
            printf("The door connecting 2 & 3 is now locked.\n");
            printf("There are no other doors in Room 3.\n\n");
            _getch();
            printf("You have reached a dead end.\n\n");
            printf("GAME OVER\n");
            //dead end (2/3 == locked)
        }

        else if (choice2 == 5)
        {        

            if (choice5 = 4)
            {
                //must go to 7 (4/5 == locked, 4/7 == open)
                //must go to 8 (4/7 == locked, 7/8 == open)
                //must go to 9 (7/8 == locked, 8/9 == open)
                //win (9 == end)
            }

            else if (choice5 = 6)
            {
                //dead end (5/6 == locked)
            }
        }
    }

    else if (choice1 == 4) //(1/4 == closed, 4/5 == open, 4/7 == open)
    {      
        if (choice4 == 5) //(4/5 == locked, 2/5 == open, 5/6 == open)
        {
            if (choice5 == 2)
            {
                //must go to 3 (2/5 == closed, 2/3 == open, 1/2 == closed)
                //dead end (2/3 == closed)
            }

            else if (choice5 == 6)
            {
                //dead end (5/6 == closed)
            }
        }

        else if (choice4 == 7)
        {
            //must go to 8 (4/7 == locked, 7/8 == open)
            //must go to 9 (7/8 == locked, 8/9 == open)
            //win (9 == end)
        }
    }

    printf("\n");
    printf("\n");
}


