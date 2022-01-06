// Function Maze v2.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS06-04
    File Name:      Function Maze v2.cpp
    Purpose:        Write a program that uses functions for the rooms of a maze. The maze should have
                    beginning and ending points. Between are rooms that can be traversed via your own
                    system. The best way to do the maze is not to call rooms from other rooms but to
                    have a loop in the main() function and call the rooms based on a room available.
                    Your maze must have a minimum of 12 rooms and the user may travel to each one. You
                    may have one path or multiple paths that get you to the exit.

    Pseudocode:


    Notes:  

    Maintenance Log:
    Date: 12/7/21       Done:
                        Created project
                        Added comments
                        Added basic starting code
                        Pushed to GitHub

    Date: 12/26/21      Done:
                        Added code for each room function
                        Added text for rooms
                        Added movement
                        Added variables and player input
                        Fixed errors
                        Added note about an error
                        Pushed to GitHub

                        Troubleshooted
                        Found the source of the error
                        Pushed to GitHub

    Date: 1/6/22        Done:
                        Transfered code to new project
                        Swapped things around
                        Got help from Mr. Miyoshi
                        Added code
                        Fixed errors
                        Tested code
                        Pushed to GitHub

                        Pulled from GitHub
                        Swapped and added code
                        Tried to fix errors with function arguments and variables
                        Fixed errors
                        Encountered another error with changing rooms
                        Failed to fix
                        Pushed to GitHub

*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

int room1(int room)
{
    int choice;
    printf("You are in room 1\n");
    printf("You must go to room 5\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 5)
    {
        room = 5;
    }
        
    return room;
}

int room2(int room)
{
    int choice;
    printf("You are in room 2\n");
    printf("You must go to room 6\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 6)
    {
        room = 6;
    }

    return room;
}

int room3(int room)
{
    int choice;
    printf("You are in room 3\n");
    printf("Will you go to room 4 or room 7?\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 4)
    {
        room = 4;
    }
    else if (room == 7)
    {
        room = 7;
    }

    return room;
}

int room4(int room)
{
    printf("You are in room 4\n");
    _getch();
    printf("You found the exit!\n");
    printf("You win!\n");

    return room;
}

int room5(int room)
{
    int choice;
    printf("You are in room 5\n");
    printf("Will you go to room 1 or room 6 or room 9?\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 1;
    }
    else if (room == 6)
    {
        room = 6;
    }
    else if (room == 9)
    {
        room = 9;
    }

    return room;
}

int room6(int room)
{
    int choice;
    printf("You are in room 6\n");
    printf("Will you go to room 2 or room 5 or room 10?\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 2)
    {
        room = 2;
    }
    else if (room == 5)
    {
        room = 5;
    }
    else if (room == 10)
    {
        room = 10;
    }

    return room;
}

int room7(int room)
{
    int choice;
    printf("You are in room 7\n");
    printf("Will you go to room 3 or room 8 or room 11?\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 3)
    {
        room = 3;
    }
    else if (room == 8)
    {
        room = 8;
    }
    else if (room == 11)
    {
        room = 11;
    }

    return room;
}

int room8(int room)
{
    int choice;
    printf("You are in room 8\n");
    printf("Will you go to room 7 or room 12?\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 7)
    {
        room = 7;
    }
    else if (room == 12)
    {
        room = 12;
    }

    return room;
}

int room9(int room)
{
    int choice;
    printf("You are in room 9");
    printf("You must go to room 5\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 5)
    {
        room = 5;
    }

    return room;
}

int room10(int room)
{
    int choice;
    printf("You are in room 10");
    printf("Will you go to room 6 or room 11?\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 6)
    {
        room = 6;
    }
    else if (choice == 11)
    {
        room = 11;
    }

    return room;
}

int room11(int room)
{
    int choice;
    printf("You are in room 11");
    printf("Will you go to room 7 or room 10?\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 7)
    {
        room = 7;
    }
    else if (choice == 10)
    {
        room = 10;
    }

    return room;
}

int room12(int room)
{
    int choice;
    printf("You are in room 12");
    printf("You must go to room 8\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 8)
    {
        room = 8;
    }

    return room;
}


int main()
{
    int choice = 1;
    int room = 1;
    char retake;
    bool exit = false;

    printf("Welcome to my maze game!\nBy: Halle Carlson\n\n");

    while (room != 4)
    {
        if (room == 1)
        {
            room = room1(room);
        }
        else if (room == 2)
        {
            room = room2(room);
        }
        else if (room == 3)
        {
            room = room3(room);
        }        
        else if (room == 5)
        {
            room = room5(room);
        }
        else if (room == 6)
        {
            room = room6(room);
        }
        else if (room == 7)
        {
            room = room7(room);
        }
        else if (room == 8)
        {
            room = room8(room);
        }
        else if (room == 9)
        {
            room = room9(room);
        }
        else if (room == 10)
        {
            room = room10(room);
        }
        else if (room == 11)
        {
            room = room11(room);
        }
        else if (room == 12)
        {
            room = room12(room);
        }
    }
    if (room == 4)
    {
        room = room4(room);
    }

    return 0;
}
