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

    
    Date: 11/5/21   Done:
                    Added code for different paths through the maze
                    Added comments to explain paths in the code
                    Added code for narration
                    Added code to format output
                    Formatted code and comments
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
    _getch();
    printf("The doors to 2 & 4 are open.\n");
    _getch();
    printf("Go where ?\n");
    printf("\ta. Room 2\n");
    printf("\tb. Room 4\n");
    printf("> ");
    scanf_s("%i", &choice1);
    fseek(stdin, 0, SEEK_END);

    if (choice1 == 2) //(1/2 == locked, 2/3 == open, 2/5 == open)
    {        
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("[Room 2]");
        _getch();
        printf("\n%s went through the door between 1 & 2.\n");
        printf("The door locked behind %s.\n\n", name.c_str());
        _getch();
        printf("The doors to 3 & 5 are open.");
        _getch();
        printf("Go where ?\n");
        printf("\ta. Room 3\n");
        printf("\tb. Room 5\n");
        printf("> ");
        scanf_s("%i", &choice2);
        fseek(stdin, 0, SEEK_END);

        if (choice2 == 3) //dead end (2/3 == locked)
        {
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("[Room 3]\n");
            printf("\n%s went through the door between 2 & 3.\n");
            printf("The door locked behind %s.\n\n", name.c_str());
            printf("There are no other doors in Room 3.\n\n");
            _getch();
            printf("You have reached a dead end.\n\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            _getch();            
            printf("\t\t\tGAME OVER\n");    //ASCII GAME OVER         
        }

        else if (choice2 == 5)
        {        
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("[Room 5]\n");
            _getch();
            printf("\n%s went through the door between 2 & 5.\n");
            printf("The door locked behind %s.\n\n", name.c_str());            
            _getch();
            printf("The doors to 4 & 6 are open.");
            _getch();
            printf("Go where ?\n");
            printf("\ta. Room 4\n");
            printf("\tb. Room 6\n");
            printf("> ");
            scanf_s("%i", &choice5);
            fseek(stdin, 0, SEEK_END);           

            if (choice5 = 4)
            {
                printf("------------------------------------------------------------------------------------------------------------------------\n\n");
                printf("[Room 4]\n");
                _getch();
                printf("\n%s went through the door between 5 & 4.\n");
                printf("The door locked behind %s.\n\n", name.c_str());
                _getch();
                //must go to 7 (4/5 == locked, 4/7 == open)
                //must go to 8 (4/7 == locked, 7/8 == open)
                //must go to 9 (7/8 == locked, 8/9 == open)
                //win (9 == end)
            }

            else if (choice5 = 6) //dead end (5/6 == locked)
            {
                printf("------------------------------------------------------------------------------------------------------------------------\n\n");
                printf("[Room 6]\n");
                _getch();
                printf("\n%s went through the door between 5 & 6.\n");
                printf("The door locked behind %s.\n\n", name.c_str());
                printf("There are no other doors in Room 6.\n\n");
                _getch();
                printf("You have reached a dead end.\n\n");
                printf("------------------------------------------------------------------------------------------------------------------------\n\n");
                _getch();
                printf("\t\t\tGAME OVER\n");    //ASCII GAME OVER               
            }
        }
    }

    else if (choice1 == 4) //(1/4 == closed, 4/5 == open, 4/7 == open)
    {      
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("[Room 4]\n");
        _getch();
        printf("\n%s went through the door between 1 & 4.\n");
        printf("The door locked behind %s.\n\n", name.c_str());
        _getch();
        printf("The doors to 5 & 7 are open.");
        _getch();
        printf("Go where ?\n");
        printf("\ta. Room 5\n");
        printf("\tb. Room 7\n");
        printf("> ");
        scanf_s("%i", &choice4);
        fseek(stdin, 0, SEEK_END);

        if (choice4 == 5) //(4/5 == locked, 2/5 == open, 5/6 == open)
        {
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("[Room 5]\n");
            _getch();
            printf("\n%s went through the door between 4 & 5.\n");
            printf("The door locked behind %s.\n\n", name.c_str());
            _getch();
            printf("The doors to 2 & 6 are open.");
            _getch();
            printf("Go where ?\n");
            printf("\ta. Room 2\n");
            printf("\tb. Room 6\n");
            printf("> ");
            scanf_s("%i", &choice5);
            fseek(stdin, 0, SEEK_END)

            if (choice5 == 2) //must go to 3 (2/5 == closed, 2/3 == open, 1/2 == closed)
            {
                printf("------------------------------------------------------------------------------------------------------------------------\n\n");
                printf("[Room 2]\n");
                _getch();
                printf("\n%s went through the door between 5 & 2.\n");
                printf("The door locked behind %s.\n\n", name.c_str());
                _getch();
                printf("The door to 3 is open.");
                _getch();
                printf("------------------------------------------------------------------------------------------------------------------------\n\n");
                printf("[Room 3]\n"); //dead end (2/3 == closed)
                _getch();
                printf("\n%s went through the door between 2 & 3.\n");
                printf("The door locked behind %s.\n\n", name.c_str());  
                printf("There are no other doors in Room 3.\n\n");
                _getch();
                printf("You have reached a dead end.\n\n");
                printf("------------------------------------------------------------------------------------------------------------------------\n\n");
                _getch();
                printf("\t\t\tGAME OVER\n");    //ASCII GAME OVER  
            }

            else if (choice5 == 6) //dead end (5/6 == closed)
            {                
                printf("------------------------------------------------------------------------------------------------------------------------\n\n");
                printf("[Room 6]\n");
                _getch();
                printf("\n%s went through the door between 5 & 6.\n");
                printf("The door locked behind %s.\n\n", name.c_str());
                printf("There are no other doors in Room 6.\n\n");
                _getch();
                printf("You have reached a dead end.\n\n");
                printf("------------------------------------------------------------------------------------------------------------------------\n\n");
                _getch();
                printf("\t\t\tGAME OVER\n");    //ASCII GAME OVER
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


