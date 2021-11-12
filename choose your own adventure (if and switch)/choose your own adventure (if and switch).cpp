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

    Date: 11/10/21  Done:
                    Added code for narration and branching the story path
                    Formatted code
                    Added comments for clarity
                    Pushed to GitHub

    Date: 11/12/21  Done: 
                    Added code for narration and branching
                    Added comments for clarity
                    Formatted code
                    Edited code
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

    int weapon;
    int door;

    printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("%s woke up in a strange room. The room was dim, constructed from cobblestone and only lit by wall sconces.\n", name.c_str());
    printf("%s carefully examined the room for clues as to where they were and how they could escape.\n", name.c_str());
    printf("The walls to the left, right, and in front of %s each had a door.\n", name.c_str());
    printf("All three doors looked completely identical.\n");
    printf("The the room was damp and riddled with cobwebs. It looked as if nobody had been there for a while.\n\n");
    printf("% turned around to look at the fourth wall.\n", name.c_str());
    printf("Behind %s was a wall lined from head to toe with weapons.\n", name.c_str());
    printf("There was everything from maces and greataxes to armor and poison viles; anything %s could ever imagine was onthe wall.\n", name.c_str());
    printf("%s figured they should probably take one before they exited the room.\n\n", name.c_str());

    printf("------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("Upon closer look, most of the weapons looked either too dull or fragile to be effective, or too large to wield.\n");
    printf("%s carefully scaned the wall for a suitable weapon.\n", name.c_str());
    printf("%s picked apart three possible choices.\n", name.c_str());
    printf("\ta. a light crossbow made of steel, with 3 sharp bolts\n");
    printf("\tb. a pair of polished shortswords with ornately-crafted hilts, suited for small hands to grip\n");
    printf("\tc. a round shield, crafted with tough wood, metal rims, and leather straps on the back\n");    

    printf("What will %s take ?\n", name.c_str());
    printf("\ta. the strong crossbow\n");
    printf("\tb. the shiny dual blades\n");
    printf("\tc. the tough shield\n");
    printf("> ");
    scanf_s("%i", &weapon);
    fseek(stdin, 0, SEEK_END);

    if (weapon == 'a' || weapon == 'A') //player chooses CROSSBOW
    {
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("[%s chose the strong crossbow]\n", name.c_str());

        printf("%s took the crossbow and the quiver with the bolts.\n", name.c_str());
        printf("%s slung the quiver over their shoulder. The crossbow didn't have a strap, so %s figured they would need to carry it.\n\n", name.c_str());
        _getch();
        printf("Suddenly, the weapons wall began to rumble!\n");
        printf("%s jumped backwards instinctively (perhaps moreso out of shock).\n", name.c_str());
        printf("%s landed in a puddle, drenching their pants and bare feet upon contact.\n", name.c_str());
        printf("A trap wall fell from the cieling, making a terribly loud noise and blocking off the weapons wall!\n");
        printf("%s took a moment to collect themself, but was startled back into reality when arrows flew out of small gaps on either wall.\n", name.c_str());
        printf("In a surge of adrenaline, %s jumped to their feet, turned around, and eyed each door.\n", name.c_str());
        printf("Each door was identical in appearence. %s shuddered at the thought of blindly flying into another trap.\n", name.c_str());
    }

    else if (weapon == 'b' || weapon== 'B') //player chooses BLADES
    {
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("[%s chose the shiny dual blades]\n", name.c_str());

        printf("%s took the blades, which were hung next to a double holster made of worn leather.\n", name.c_str());
        printf("%s took the holster, too.\n", name.c_str());
        printf("%s equipped the holster, which could hold two small swords on the wearer's back.\n", name.c_str());
        printf("%s reached behind their head and carefully slid one blade into each holster.\n", name.c_str());
        printf("A perfect fit.\n\n");
        _getch();
        printf("Suddenly, the weapons wall began to rumble!\n");
        printf("%s jumped backwards instinctively (perhaps moreso out of shock).\n", name.c_str());
        printf("%s landed in a puddle, drenching their pants and bare feet upon contact.\n", name.c_str());
        printf("A trap wall fell from the cieling, making a terribly loud noise and blocking off the weapons wall!\n");
        printf("%s took a moment to collect themself, but was startled back into reality when arrows flew out of small gaps on either wall.\n", name.c_str());
        printf("In a surge of adrenaline, %s jumped to their feet, turned around, and eyed each door.\n", name.c_str());
        printf("Each door was identical in appearence. %s shuddered at the thought of blindly flying into another trap.\n", name.c_str());
    }

    else if (weapon == 'c' || weapon == 'C') //player chooses SHIELD
    {
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("[%s chose the tough shield]\n", name.c_str());

        printf("%s grabbed the shield with two hands.\n", name.c_str());
        printf("It was much lighter than it looked.\n");
        printf("%s slid their arm into the leather straps on the back.\n", name.c_str());
        printf("%s tightened the straps enough so they could slip their arm in and out with ease but still have full control.\n\n", name.c_str());
        _getch();
        printf("Suddenly, the weapons wall began to rumble!\n");
        printf("%s jumped backwards instinctively (perhaps moreso out of shock).\n", name.c_str());
        printf("%s landed in a puddle, drenching their pants and bare feet upon contact.\n", name.c_str());
        printf("A trap wall fell from the cieling, making a terribly loud noise and blocking off the weapons wall!\n");
        printf("%s took a moment to collect themself, but was startled back into reality when arrows flew out of small gaps on either wall.\n", name.c_str());
        printf("In a surge of adrenaline, %s jumped to their feet, turned around, and eyed each door.\n", name.c_str());
        printf("Each door was identical in appearence. %s shuddered at the thought of blindly flying into another trap.\n", name.c_str());
    }


    
    int door;

    printf("What door will %s go through ?\n", name.c_str());
    printf("\ta. the left door\n");
    printf("\tb. the right door\n");
    printf("\tc. the middle door\n");
    printf("> ");
    scanf_s("%i", &door);
    fseek(stdin, 0, SEEK_END);

    if (door == 'a' || door == 'A') //player chooses LEFT door
    {
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("[%s chose the left door]\n\n", name.c_str());

        printf("%s pivoted and sprang towards the left door so quickly that they almost tripped and fell straight onto it.\n", name.c_str());

        printf("%s gripped the door handle and pulled with all their might. (WEAPON-BASED TEXT)\n", name.c_str()); //OPENING THE DOOR TEXT DIFFERS BASED ON WEAPON
        printf("The door was very heavy, but %s could open it far enough to slip through.\n", name.c_str());

        //ROOM BRANCH
        printf("[%s entered (ROOM)]\n", name.c_str()); //ROOM BASED ON DOOR, ENTERING DOOR TEXT BASED ON WEAPON (size & shape)

        printf("The door led to a long, dark corridor.\n");
        printf("Old-looking paintings lined the walls, framing menacing figures and scenes.\n");
        printf("Small chandeliers hung from the cieling, providing light throughout the long passageway.\n");
        printf("Most of the candles in the chandeliers were burnt out, but some still burned bright.\n");
        printf("A fancy carped lined the floor, masking the sound of %s's footsteps.\n", name.c_str());
    }

    else if (door == 'b' || door == 'B') //player chooses RIGHT door
    {
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("[%s chose the right door]\n\n", name.c_str());

        printf("%s pivoted and sprang towards the right door so quickly that they almost tripped and fell straight onto it.\n", name.c_str());

        printf("%s gripped the door handle and pulled with all their might. (WEAPON-BASED TEXT)\n", name.c_str()); //OPENING THE DOOR TEXT DIFFERS BASED ON WEAPON
        printf("The door was very heavy, but %s could open it far enough to slip through.\n", name.c_str());

        printf("[%s entered (ROOM)]\n", name.c_str()); //ROOM BASED ON DOOR, ENTERING DOOR TEXT BASED ON WEAPON (size & shape)

        //DIFFERENT ROOMS
    }

    else if (door == 'c' || door == 'C') //player chooses MIDDLE door
    {
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("[%s chose the middle door]\n\n", name.c_str());

        printf("%s pivoted and sprang towards the middle door so quickly that they almost tripped and fell straight onto it.\n", name.c_str());

        printf("%s gripped the door handle and pulled with all their might. (WEAPON-BASED TEXT)\n", name.c_str()); //OPENING THE DOOR TEXT DIFFERS BASED ON WEAPON
        printf("The door was very heavy, but %s could open it far enough to slip through.\n", name.c_str());

        printf("[%s entered (ROOM)]\n", name.c_str()); //ROOM BASED ON DOOR, ENTERING DOOR TEXT BASED ON WEAPON (size & shape)

        //DIFFERENT ROOMS
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
    printf("\n", name.c_str());


    printf("\n");


    return 0;
}


/*
    [after weapons, before door]
    printf("%s (equiped the weapon, change language based on choice).\n", name.c_str());
    printf("Suddenly, the weapons wall began to rumble!\n");
    printf("%s jumped backwards instinctively (perhaps moreso out of shock).\n", name.c_str());
    printf("%s landed in a puddle, drenching their pants and bare feet upon contact.\n", name.c_str());
    printf("A trap wall fell from the cieling, making a terribly loud noise and blocking off the weapons wall!\n");
    printf("%s took a moment to collect themself, but was startled back into reality when arrows flew out of small gaps on either wall.\n", name.c_str());
    printf("In a surge of adrenaline, %s jumped to their feet, turned around, and eyed each door.\n", name.c_str());
    printf("Each door was identical in appearence. %s shuddered at the thought of blindly flying into another trap.\n", name.c_str());


*/
