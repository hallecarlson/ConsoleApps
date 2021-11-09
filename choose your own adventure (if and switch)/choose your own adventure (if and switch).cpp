// choose your own adventure (if and switch).cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS03-04 (Choose your own adventure using if and switch)
    File Name:      choose your own adventure (if and switch).cpp
    Purpose:        Write a short choose your own adventure story. Address the user by name and tell the story from their perspective.
                    Give the user at least 3 places where the story will branch. The story will branch based on the user giving string
                    input in at least 2 places and int input in at least 1 place. There must be at least 9 endings, each with an appropriate 
                    ending. Either 2 levels of nesting with 3 choices at each level, or 3 levels of nesting with 2 choices at each level 
                    (one choice would have 3 instead of 2).

    Pseudocode:     

    Maintenance Log:
    Date: 11/2/21   Done:
                    Created project
                    Added comments
                    Added code 

    Date: 11/6/21   Done: 
                    Added code
                    Formatted output
                    Pushed to GitHub

    Date: 11/9/21   Done:
                    Added code
                    Pushed to GitHub

*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    printf("------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                            Choose Your Own Adventure Game\nCreated By: Halle Carlson\n\n");

    printf("Please enter your name:\n> ");
    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);
    printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("You wake up in a strange room. The room is dim, constructed from cobblestone and only lit by wall sconces.\n");
    printf("You carefully examine the room for clues as to where you are and how to get out.\n");
    printf("The walls to your left, right, and in front of you each have a door.\n");
    printf("All three doors look completely identical.\n");
    printf("The the room is damp and riddled with cobwebs. It looks as is nobody has been here for a while.\n\n");
    printf("You turn around to look at the fourth wall.\n");
    printf("Behind you is a wall lined from head to toe with weapons.\n");
    printf("There are swords, maces, knifes, guns, anything you could ever imagine.\n");
    printf("You figure you should probably take one before you exit the room.\n\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("Upon closer look, most of the weapons look either too dull or fragile to be effective, or too large for you to wield.\n");
    printf("You carefully scan the wall for a suitable weapon.\n");
    printf("You pick apart three possible choices.\n");
    printf("\ta. a light crossbow made of steel, with 3 sharp bolts\n");
    printf("\tb. a pair of polished shortswords with ornately-crafted hilts, suited for small hands to grip\n");
    printf("\tc. a round shield, crafted with tough wood, metal rims, and leather straps on the back\n");
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


    return 0;
}


