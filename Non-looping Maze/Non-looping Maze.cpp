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

    printf("[Room 1]\n");
    printf("The doors to 2 & 4 are open.\n");
    printf("Where will you go?\n");
    printf("\ta. Room 2\n");
    printf("\tb. Room 4\n");
    printf("> ");
    int choice1;
    scanf_s("%i", &choice1);
    fseek(stdin, 0, SEEK_END);

    if (choice1 == 2)
    {
        printf("\n%s went through the door between 1 & 2.\n");
        printf("The door connecting 1 & 2 is now locked.\n\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n[Room 2]");
        printf("The doors to 3 & 5 are open.");
    }


    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
}


