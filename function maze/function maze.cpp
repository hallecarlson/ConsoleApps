// function maze.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS06-04
    File Name:      function maze.cpp
    Purpose:        Write a program that uses functions for the rooms of a maze. The maze should have 
                    beginning and ending points. Between are rooms that can be traversed via your own 
                    system. The best way to do the maze is not to call rooms from other rooms but to 
                    have a loop in the main() function and call the rooms based on a room available. 
                    Your maze must have a minimum of 12 rooms and the user may travel to each one. You 
                    may have one path or multiple paths that get you to the exit.

    Pseudocode:


    Notes:  Error with input where game automatically ends
            The error is because it automatically plays the while loop in int main()
            without asking for input

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
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

int room1(int choice)
{
    printf("You are in room 1\n");
    printf("You must go to room 5\n");
    do
    {
        printf(">");
        choice;
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
    } while (choice != 5);

    return choice;
}

int room2(int choice)
{
    printf("You are in room 2\n");
    printf("You must go to room 6\n");  
    do
    {
        printf(">");
        choice;
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
    } while (choice != 6);

    return choice;
}

int room3(int choice)
{
    printf("You are in room 3\n");
    do
    {        
        printf("Will you go to room 4 or room 7?\n");
        printf(">");
        choice;
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
    } while (choice != 4 && choice != 7);

    return choice;
}

int room4(int choice)
{
    printf("You are in room 4\n");
    _getch();
    printf("You win!\n");

    return choice;
}

int room5(int choice)
{
    printf("You are in room 5\n");
    do
    {
        printf("Will you go to room 1 or room 6 or room 9?\n");
        printf(">");
        choice;
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
    } while (choice != 1 && choice != 6 && choice != 9);

    return choice;
}

int room6(int choice)
{
    printf("You are in room 6\n");
    do
    {
        printf("Will you go to room 2 or room 5 or room 10?\n");
        printf(">");
        choice;
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
    } while (choice != 2 && choice != 5 && choice != 10);

    return choice;
}

int room7(int choice)
{
    printf("You are in room 7\n");
    do
    {
        printf("Will you go to room 3 or room 8 or room 11?\n");
        printf(">");
        choice;
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
    } while (choice != 3 && choice != 8 && choice != 11);

    return choice;
}

int room8(int choice)
{
    printf("You are in room 8\n");
    do
    {
        printf("Will you go to room 7 or room 12?\n");
        printf(">");
        choice;
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
    } while (choice != 7 && choice != 12);

    return choice;
}

int room9(int choice)
{
    printf("You are in room 9\n");
    printf("You must go to room 5\n");
    do
    {
        printf(">");
        choice;
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
    } while (choice != 5);

    return choice;
}

int room10(int choice)
{
    printf("You are in room 10\n");
    do
    {
        printf("Will you go to room 6 or room 11?\n");
        printf(">");
        choice;
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
    } while (choice != 6 && choice != 11);

    return choice;
}

int room11(int choice)
{
    printf("You are in room 11\n");
    do
    {
        printf("Will you go to room 7 or room 10?\n");
        printf(">");
        choice;
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
    } while (choice != 7 && choice != 10);

    return choice;
}

int room12(int choice)
{
    printf("You are in room 12\n");
    printf("You must go to room 8\n");
    do
    {
        printf(">");
        choice;
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
    } while (choice != 8);

    return choice;
}


int main()
{
    int choice = 1;
    int room;
    char retake;
    bool exit = false;

    printf("Welcome to my maze game!\nBy: Halle Carlson\n\n");

    while (exit == false)
    {
        if (choice == 1)
        {
            room = room1(choice);
        }
        else if (choice == 2)
        {
            room = room2(choice);
        }
        else if (choice == 3)
        {
            room = room3(choice);
        }
        else if (choice == 4)
        {
            room = room4(choice);
        }
        else if (choice == 5)
        {
            room = room5(choice);
        }
        else if (choice == 6)
        {
            room = room6(choice);
        }
        else if (choice == 7)
        {
            room = room7(choice);
        }
        else if (choice == 8)
        {
            room = room8(choice);
        }
        else if (choice == 9)
        {
            room = room9(choice);
        }
        else if (choice == 10)
        {
            room = room10(choice);
        }
        else if (choice == 11)
        {
            room = room11(choice);
        }
        else if (choice == 12)
        {
            room = room12(choice);
        }

        if (room == 4)
        {
            printf("Play again?\nyes or no\n");
            printf(">");
            string retake;
            cin >> retake;
            fseek(stdin, 0, SEEK_END);

            if (retake == "yes")
            {
                exit = false;
                choice = 1;
            }
            else
            {
                exit = true;
            }
        }
    } 

    printf("Thanks for playing!\n");
    _getch();

    return 0;
}
