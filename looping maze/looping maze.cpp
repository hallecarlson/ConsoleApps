// looping maze.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS04-05 (looping maze)
    File Name:      looping maze.cpp
    Purpose:        Create a new version of the maze from GS03-05 that allows the player to go back and forth through doors
                    instead of not being able to go back through the same door. It's easier to start from scratch instead of 
                    adding the code from the old project. There should be an overarching loop and branching for each room.

    Pseudocode:     Title
                    Player inputs name
                    Instructions/introduction
                    Variables for program
                    Screen cleared 
                    Player starts in room 1 and is given the choice to go to either room 2 or room 4
                    Player input
                    Process repeats each time the player enters a room, unless it is a dead end (3 and 6), in which the player
                    automatically goes back to the previous room
                    Game ends when player reaches room 9
                    End screen
                    Player chooses to retake or end the maze game

    Maintenance Log:
    Date: 11/15/21  Done:
                    Created project
                    Pushed to GitHub

    Date: 11/17/21  Done:
                    Added code for variables, introduction, player input, and looping
                    Added comments for clarity and organization
                    Formatted code and comments
                    Edited code
                    Pushed to GitHub

    Date: 11/19/21  Done:
                    Tested code
                    Formatted code
                    Tried to implement looping for individual room inputs
                    Tested code again
                    Edited code back to what it was before because the new code didn't work and was taking too much time for
                    something I didn't need to do
                    Tested code one more time
                    Added comments
                    Added pseudocode
                    Pushed to GitHub


*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

int main()
{

    printf("------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                                                   Looping Maze\n");
    printf("                                             Created By: Halle Carlson\n\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    printf("Please enter your name:\n> ");
    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);

    printf("\nHi, %s.\n", name.c_str());
    _getch();
    printf("You are trapped in a maze with only one exit.\n");
    _getch();
    printf("There are nine rooms connected by doors. You can go back and forth through doors, so you won't be trapped.\n");
    printf("You will be prompted to input the room you want to enter. Input only the room number (e.g. 1, 5, 6).\n\n");
    printf("Have fun!\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    _getch();

    int room;    
    char retake;
    int choice;

    do
    {
        system("cls");
        room = 1;

        do
        {
            if (room == 1)
            {                
                    printf("------------------------------------------------------------------------------------------------------------------------\n");
                    printf("[Room 1]\n"); //connects to 2 & 4
                    _getch();
                    printf("Go where ?\n");
                    printf("\ta. Room 2\n");
                    printf("\tb. Room 4\n");
                    printf("> ");
                    scanf_s("%i", &choice);
                    fseek(stdin, 0, SEEK_END);
                    
                    if (choice == 2)
                    {
                        room = 2;
                    }

                    else if (choice == 4)
                    {
                        room = 4;
                    }
            }

            if (room == 2)
            {
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                printf("[Room 2]\n"); //connects to 1 & 3 & 5
                _getch();
                printf("Go where ?\n");
                printf("\ta. Room 1\n");
                printf("\tb. Room 3\n");
                printf("\tc. Room 5\n");
                printf("> ");
                scanf_s("%i", &choice);
                fseek(stdin, 0, SEEK_END);

                if (choice == 1)
                {
                    room = 1;
                }

                else if (choice == 3)
                {
                    room = 3;
                }

                else if (choice == 5)
                {
                    room = 5;
                }
            }           

            if (room == 3)
            {
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                printf("[Room 3]\n"); //connects to 2
                _getch();
                printf("It's a dead end !\n");
                printf("%s went back to room 2\n", name.c_str());

                room = 2;
            }

            if (room == 4)
            {
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                printf("[Room 4]\n"); //connects to 1 & 5 & 7
                _getch();
                printf("Go where ?\n");
                printf("\ta. Room 1\n");
                printf("\tb. Room 5\n");
                printf("\tc. Room 7\n");
                printf("> ");
                scanf_s("%i", &choice);
                fseek(stdin, 0, SEEK_END);

                if (choice == 1)
                {
                    room = 1;
                }

                else if (choice == 5)
                {
                    room = 5;
                }

                else if (choice == 7)
                {
                    room = 7;
                }
            }

            if (room == 5)
            {
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                printf("[Room 5]\n"); //connects to 2 & 4 & 6
                _getch();
                printf("Go where ?\n");
                printf("\ta. Room 2\n");
                printf("\tb. Room 4\n");
                printf("\tc. Room 6\n");
                printf("> ");
                scanf_s("%i", &choice);
                fseek(stdin, 0, SEEK_END);

                if (choice == 2)
                {
                    room = 2;
                }

                else if (choice == 4)
                {
                    room = 4;
                }

                else if (choice == 6)
                {
                    room = 6;
                }
            }

            if (room == 6)
            {
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                printf("[Room 6]\n"); //connects to 5
                _getch();
                printf("It's a dead end !\n");
                printf("%s went back to room 5\n", name.c_str());

                room = 5;
            }

            if (room == 7)
            {
                
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                printf("[Room 7]\n"); //connects to 4 & 8
                _getch();
                printf("Go where ?\n");
                printf("\ta. Room 4\n");
                printf("\tb. Room 8\n");
                printf("> ");
                scanf_s("%i", &choice);
                fseek(stdin, 0, SEEK_END);

                if (choice == 4)
                {
                    room = 4;
                }

                else if (choice == 8)
                {
                    room = 8;
                }
            }

            if (room == 8)
            {
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                printf("[Room 8]\n"); //connects to 7 & 9
                _getch();
                printf("Go where ?\n");
                printf("\ta. Room 7\n");
                printf("\tb. Room 9\n");
                printf("> ");
                scanf_s("%i", &choice);
                fseek(stdin, 0, SEEK_END);

                if (choice == 7)
                {
                    room = 7;
                }

                else if (choice == 9)
                {
                    room = 9;
                }
            }

            if (room == 9)
            {
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                printf("[Room 9]\n"); //win
                _getch();
                printf("%s found the exit !\n", name.c_str());
                _getch();
                printf("------------------------------------------------------------------------------------------------------------------------\n\n");
                _getch();
                printf("                  Y         Y  OOOOOOOOOOO  U         U    W         W  I  N         N\n");
                printf("                  Y         Y  O         O  U         U    W         W  I  N N       N\n");
                printf("                   Y       Y   O         O  U         U    W    W    W  I  N  N      N\n");
                printf("                    Y     Y    O         O  U         U    W   W W   W  I  N   N     N\n");
                printf("                     Y Y Y     O         O  U         U    W  W   W  W  I  N    N    N\n");
                printf("                       Y       O         O  U         U    W W     W W  I  N     N   N\n");
                printf("                       Y       O         O  U         U    W         W  I  N      N  N\n");
                printf("                       Y       OOOOOOOOOOO  UUUUUUUUUUU    W         W  I  N       N N\n");
                printf("\n------------------------------------------------------------------------------------------------------------------------");
                _getch();
            }

        } while (room != 9);

        system("cls");
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("                                                   Looping Maze\n");
        printf("                                             Created By: Halle Carlson\n\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        
        printf("Congradulations, %s, you finished the maze!\n\n", name.c_str());
        _getch();

        printf("Play again ?\n"); //player chooses to either retake or end the quiz
        printf("(enter 'y' to retake the maze || enter any other key to end the maze)\n");
        printf(">");
        scanf_s("%c", &retake);
        fseek(stdin, 0, SEEK_END);

    } while (retake == 'y');

    return 0;
}


