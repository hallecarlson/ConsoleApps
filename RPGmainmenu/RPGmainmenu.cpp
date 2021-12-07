// RPGmainmenu.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS04-06 (RPG game loop and main menu)
    File Name:      RPGmainmenu.cpp
    Purpose:        Create a main menu (inside a loop) where you can choose to equip your character (and other things later) or enter the game.
                    Equip the user with at least one item. You may choose to let the user have up to three items. There must be at least three 
                    choices for each item. There should be a varuable that represents howmany items and variables to tell which items are chosen.
                    There should be a loop that goes around the rooms/locations you will be making. These locations are part of a bigger 25-room    
                    dungeon you will be making. You need to have a loop around a movement system that allows you to move between rooms, but
                    you don't need the rooms yet. This will consist of some sort of branching.

    Pseudocode:     


    Notes:

    Maintenance Log:
    Date:   12/6/21     Done:
                        Created project
                        Added comments
                        Added code
                        Pushed to GitHub

                        Pulled from GitHub
                        Added comments
                        Added code for main menu
                        Added code for character select menu
                        Pushed to GitHub
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int chara;

    printf("------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("Welcome to my RPG !\n");
    printf("Created by Halle Carlson\n");
    printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("Menu\n");
    printf("----\n\n");
    printf("Select Character:\n\n");
    printf("1. Cobalt\n");
    printf("\t\tbase\n");
    printf("----\n\n");
    printf("\t\tspell:  minor healing (self)\n");
    printf("\t\tattack: strike\n");
    printf("\t\tspell:  reduce damage taken (self)\n");
    printf("\t\thigh HP stat, defense specialty\n\n");
    printf("2. Magenta\n");
    printf("\t\tbase\n");
    printf("----\n\n");
    printf("\t\tattack: strike\n");
    printf("\t\tattack: thrash\n");
    printf("\t\tspell:  increase damage dealt (self)\n");
    printf("\t\thigh damage stat, physical attack specialty\n\n");
    printf("3. Sunflower\n");
    printf("\t\tbase\n");
    printf("----\n\n");
    printf("\t\tattack: strike\n");
    printf("\t\tspell:  slepp spell (enemy)\n");
    printf("\t\tspell:  decrease accuracy (enemy)\n");
    printf("\t\tspell:  increase accuracy (self)\n");
    printf("\t\tbalanced stats, spellcasting specialty\n");
    printf("\t\thigh damage stat\n\n");
    printf("\n");
    printf("\n");

    printf(">");
    scanf_s("%i", &chara);
    fseek(stdin, 0, SEEK_END);

    if (chara == 1)
    {
        printf("\n");
        printf("\n");
    }
    if (chara == 2)
    {

    }
    if (chara == 3)
    {

    }

    return 0;
}


