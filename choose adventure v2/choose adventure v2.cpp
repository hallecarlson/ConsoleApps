// choose adventure v2.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS03-04 (Choose your own adventure using if and switch)
    File Name:      choose adventure v2.cpp
    Purpose:        Write a short choose your own adventure story. Address the user by name and tell the story from their perspective.
                    Give the user at least 3 places where the story will branch. The story will branch based on the user giving string
                    input in at least 2 places and int input in at least 1 place. There must be at least 9 endings, each with an appropriate
                    ending. Either 2 levels of nesting with 3 choices at each level, or 3 levels of nesting with 2 choices at each level
                    (one choice would have 3 instead of 2).

    Pseudocode:

    Maintenance Log:
    Date: 11/29/21  Done:
                    Created project     
                    Copy/pasted some code and comments from original version
                    Added code for dialogue and branching
                    Added placeholders
                    Added comments for clarity
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
    printf("------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("Please enter your name:\n>");
    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);

    //variables
    int choice;

    printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("%s woke up in a dim room.\n", name.c_str());
    printf("They saw 2 doors in front of them.\n");
    printf("%s turned around to check the rest of the room, but there was nothing else there.\n%s heard the sound of water splashing when they turned back around, and looked down.\n", name.c_str());
    printf("Shallow water was covering the floor.\nIt wasn't clear like notmal water.\n");
    _getch();
    printf("It was opaque and darker than anything %s had ever seen.\n", name.c_str());
    _getch();
    printf("%s looked back at the doors.\nThey appeared to be completely identical, except for handles, which were on opposite sides.\n");
    
    printf("Which path did %s choose?\n", name.c_str());
    printf("\t1. the left door\n");
    printf("\t2. the right door\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);

    if (choice == 1) //left
    {
        printf("%s opened the left door, which took great strength.\n", name.c_str());
        printf("The sight on the other side of the door was stunning.\nBefore %s was a cave formed inside a massive quartz geode.\n", name.c_str());
        _getch();
        printf("%s saw two paths they could take through the geode.\nThere was a path to the left that %s could probably climb through, and a river in front of %s that they could swim through.\n", name.c_str());

        printf("Which path did %s choose?\n", name.c_str());
        printf("\t1. climb to the left\n");
        printf("\t2. swim forward\n");
        printf(">");
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);

        if (choice == 1) //climb
        {

        }
        if (choice == 2) //swim
        {

        }
    }
    if (choice == 2) //right UNFINISHED
    {
        printf("%s turned the handle and pushed on the right door, which then automatically swung open.\n", name.c_str());
        printf("The room on the other side looked very, very old.\nIt seemed to be part of a temple, constructed in turquoise stone.\n");
        _getch();
        printf("There was a shallow pool of water covering most of the floor.\nThis water rippled with no visible source, which made %s wonder if there were ghosts in the temple.\n", name.c_str());
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");

        printf("Which path did %s choose?\n", name.c_str());
        printf("\t1. The lower, bright archway\n");
        printf("\t2. The higher, dark archway\n");
        printf(">");
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);

        if (choice == 1) //low&bright UNFINISHED
        {
            //blah blah blah

            switch (choice)
            {
            case: 1
                printf("\n"); //blah blah blah
                break;
            case: '2'
            }

        }
        if (choice == 2) //high&dark UNFINISHED
        {

        }
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

    return 0;
}

