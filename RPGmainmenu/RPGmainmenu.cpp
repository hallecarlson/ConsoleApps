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

    Pseudocode:     Placeholder combat function
                    Functions for rooms
                    Dialogue and input
                    Variables
                    Screen is cleared whevever player returns to main menu
                    Selections are printed to main menu along with the number of items selected
                    Choices to select character or items
                    Character selection screen with option to return to menu or begin game
                    after selection is made
                    Item selection screen with options to select a weapon or a miscellaneous
                    item and to return to menu or begin game after selection is made
                    Both selection screens have messages that display if a selection was
                    already made
                    Do-while loop around main menu that repeats until menu selection is '3',
                    the choice that begins the game
                    Code for setting the rooms including starting rooms
                    End message

    Notes: Error with moving between rooms. Characters get stuck between starting room and second room.

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

    Date: 12/7/21       Done:
                        Pulled from GitHub
                        Added code for character and item selection
                        Added code for looping
                        Added code for ending the loop
                        Added comments for clarity
                        Added a note about an error
                        Pushed to GitHub

    Date: 12/8/21       Done: 
                        Pulled from GitHub
                        Fixed an error with if statements and selection printout on main menu
                        Added a variable to count how many items are selected
                        Added pseudocode and comments
                        Pushed to GitHub

    Date: 12/17/21      Done:
                        Added introductions for each character's story
                        Pushed to GitHub

    Date: 12/24/21      Done:
                        Pulled from GitHub
                        Added a function for player movement
                        Added code for starting rooms
                        Added placeholder code for movement between rooms
                        Added code for starting hp / max hp
                        Added code for weapon damage
                        Slightly altered character descriptions to fit with new code and make
                        future coding simpler
                        Pushed to GitHub

    Date: 1/7/22        Done:
                        Added code
                        Pushed to GitHub

    Date: 1/9/22        Done:
                        Added code for functions for rooms 1-15/25
                        Added code for movement, narration, and input
                        Added comments for clarity
                        Pushed to GitHub

                        Added code for functions for rooms 16-25/25
                        Added code for movement, narration, and input
                        Added comments for clarity
                        Pushed to GitHub

    Date: 1/10/22       Done:  
                        Pulled from GitHub
                        Added code for rooms and movement in int main()
                        Added narrationin in room functions, some of which are character-specific
                        Tested code
                        Found an error with movement
                        Pushed to GitHub

    Date: 1/11/22       Done:
                        Asked for help
                        Fixed a few errors
                        Changed around rooms
                        Pushed to GitHub

                        Pulled from GitHub
                        Finished changing around rooms
                        Tested code
                        Fixed minor errors
                        Tested code again
                        Pushed to GitHub

    Date: 1/12/22       Done:
                        Added pseudocode
                        Pushed to GitHub

    Date: 1/18/22       Done:
                        Added code fora struct that holds player data for protagonist and enemy
                        Modified code to work with the struct
                        Fixed errors
                        Got help from Mr. Miyoshi
                        Pushed to GitHub

*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;
    
   
struct Player
{
    string name;            //player names
    int chara;

    int hp, hpmin, hpmax;   //player health stats
    int dp, dpmin, dpmax;   //player damage stats

};



Player combat(Player p, Player e)
{
/*needs stuff for hp, dp, weapon differences, enemy hp and dp variation, encounters, 
defeats, not too gruesome; something like "[name] has fallen in batle (exit game)*/   

    return p;
}


//room1
int ultramarine(int room, int chara, bool &win) //room 1
{
    int choice;

    if (chara == 1) //cobalt
    {
        printf("You are now in Ultramarine\n");
        win = true;
    }
    else if (chara == 3) //sunflower
    {
        printf("You, Sunflower, wake up in Ultramarine.\n");
        printf("You look around in a panic, and see a system of buildings, almost completely submerged in water.\n");
        printf("You don't know your way back to Goldenrod!");
        _getch;

        printf("You are now in Ultramarine.\n");
        printf("It's a shimmering sea town with limestone buildings protruding from the ocean.\n");
        printf("To the East is Canary Yellow Island.\nYou're at a dead end.\n");

        printf("1. Go to Canary Yellow Island\n");
        printf(">");
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
        if (choice == 1)
        {
            room = 2;
        }
    }
    else //magenta
    {
        printf("You are now in Ultramarine.\n");
        printf("It's a shimmering sea town with limestone buildings protruding from the ocean.\n");
        printf("To the East is Canary Yellow Island.\nYou've reached a dead end.\n");

        printf("1. Go to Canary Yellow Island\n");
        printf(">");
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
        if (choice == 1)
        {
            room = 2;
        }

    }

    return room;
}
//room2
int canary(int room) //room 2
    {
        int choice;
        printf("You are now on Canary Yellow Island\n");
        printf("You travelled by boat to reach a warm beach, with banana trees and canaries in the center.\n");
        printf("To the West is Ultramarine and to the south is Sunset Observatory.\n");

        printf("1. Go to Ultramarine\n2. Go to Sunset Observatory\n");
        printf(">");
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
        if (choice == 1)
        {
            room = 1;
        }
        else if (choice == 2)
        {
            room = 12;
        }

        return room;
    }
//room3
int violetblue(int room) //room 3
{
    int choice;
    printf("You are now in Violet Blue Town \n");
    printf("It's a sleepy town of stargazers and birdwatchers.\nThe sky is entirely lit up with stars.\n");
    printf("To the South is Violet District.\nYou've reached a dead end.\n");

    printf("1. Go to Violet District.\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 8;
    }

    return room;
}
//room4
int westgolden(int room) //room 4
{
    int choice;
    printf("You are now in West Goldenrod\n");
    printf("It's a small residential district of greater Goldenrod.\nThere isn't much to see here.\n");
    printf("To the East is Goldenrod and to the South is Silver Quarry.\n");

    printf("1. Go to Goldenrod\n2. Go to Silver quarry\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 5;
    }
    else if (choice == 2)
    {
        room = 9;
    }


    return room;
}
//room5
int goldenrod(int room, int chara, bool& win) //room 5
{
    int choice;
    if (chara == 2) //magenta
    {
        printf("You, Magenta, up in Goldenrod.\n");
        printf("You look around in a panic, and see tall buildings, which tower over you.\n");
        printf("You don't know your way back to Rose Village!");
        _getch;

        printf("You are now in Goldenrod\n");
        printf("It's a huge and glorious city.\nThere's so much to see that it's almost overwhelming.\n");
        printf("To the West is West Goldenrod and to the South is Viridian Forest.\n");

        printf("1. Go to West Goldenrod\n2. Go to Viridian Forest\n");
        printf(">");
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
        if (choice == 1)
        {
            room = 4;
        }
        else if (choice == 2)
        {
            room = 10;
        }
    }
    else if (chara == 3) //sunflower
    {
        printf("You are now in Goldenrod\n");
        win = true;
    }
    else //cobalt
    {
        printf("You are now in Goldenrod\n");
        printf("It's a huge and glorious city.\nThere's so much to see that it's almost overwhelming.\n");
        printf("To the West is West Goldenrod and to the South is Viridian Forest.\n");

        printf("1. Go to West Goldenrod\n2. Go to Viridian Forest\n");
        printf(">");
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
        if (choice == 1)
        {
            room = 4;
        }
        else if (choice == 2)
        {
            room = 10;
        }

    }
    return room;
}
//room6
int maroon(int room) //room 6
{
    int choice;
    printf("You are now in Maroon Town\n");
    printf("It's a small, laid back town.\nThere are item kiosks here.\n");

    //choose 1 free item

    printf("To the South is Fluorescent Marsh.\nYou've reached a dead end.\n");

    printf("1. Go to Fluorescent Marsh\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 11;
    }

    return room;
}
//room7
int sunset(int room) //room 7
{
    int choice;
    printf("You are now in Sunset Observatory\n");
    printf("You ascend the spiral staircase to the top and look out of the glass walls.\n");
    printf("To the North is Canary Yellow Island and to the South is Rust Laboratory.\n");

    printf("1. Go to Canary Yellow Island\n2. Go to Rust Laboratory\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 2;
    }
    else if (choice == 2)
    {
        room = 12;
    }

    return room;
}
//room8
int violet(int room) //room 8
{
    int choice;
    printf("You are now in Violet District\n");
    printf("It's a crowded neighborhood on the outskirts of Goldenrod\nEverywhere around you are people travelling to places.\n");
    printf("To the North is Violet Blue Town and to the South is Midnight Blue Town.\n");

    printf("1. Go to Violet Blue Town\n2. Go to Mignight Blue Town\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 3;
    }
    else if (choice == 2)
    {
        room = 13;
    }

    return room;
}
//room9
int silver(int room) //room 9
{
    int choice;
    printf("You are now in Silver Quarry\n");
    printf("Shimmering, clear water flows throug small canyons and tunnels.\n");
    printf("To the North is West Goldenrod.\nYou've reached a dead end.\n");

    printf("1. Go to West Goldenrod\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 4;
    }
 
    return room;
}
//room10
int viridian(int room) //room 10
{
    int choice;
    printf("You are now in Viridian Forest\n");
    printf("The woods are thick and dim. Patches of sunlight shine through the canopy.\n");
    printf("To the North is Goldenrod and to the South is Carrot Meadow.\n");

    printf("1. Go to Goldenrod\n2. Go to Carrot Meadow\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 5;
    }
    else if (choice == 2)
    {
        room = 15;
    }

    return room;
}
//room11
int fluorescent(int room) //room 11
{
    int choice;
    printf("You are now in Fluorescent Marsh\n");
    printf("Colorful plants stick out of the bright blue mud.\nThere are a few paths of wet grass that look well-traversed.\n");
    printf("To the North is Maroon Town and to the South is Pumpkin Patch.\n");

    printf("1. Go to Maroon Town\n2. Go to Pumpkin Patch\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 6;
    }
    else if (choice == 2)
    {
        room = 16;
    }

    return room;
}
//room12
int rust(int room) //room 12
{
    int choice;
    printf("You are now in Rust Laboratory\n");
    printf("It's an old laboratory full of scary machinery and sinister-looking blueprints.\n");
    printf("To the North is Sunset Observatory and to the Eaat is Midnight Blue Town.\n");

    printf("1. Go to Sunset Observatory\n2. Go to Midnight Blue Town\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 7;
    }
    else if (choice == 2)
    {
        room = 13;
    }

    return room;
}
//room13
int midnightblue(int room) //room 13
{
    int choice;
    printf("You are now in Midnight Blue Town\n");
    printf("It's a dodgy, dark town without any stars in the sky.\nIt’s always night here.\n");
    printf("To the North is Violet Distrtict, to the East is Rainbow Bazaar, and to the West is Rust Laboratory.\n");

    printf("1. Go to Violet District\n2. Go to Rainbow Baazar\n3. Go to Rust Laboratory\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 8;
    }
    else if (choice == 2)
    {
        room = 14;
    }
    else if (choice == 3)
    {
        room = 12;
    }

    return room;
}
//room14
int rainbow(int room) //room 14
{
    int choice;
    printf("You are now in Rainbow Bazaar.\n");
    printf("Dozens of colorful tents surround you, stocked with many items.\nDirectly in front of you, there is a purple tent.\nYou walk over, and the seller, a woman in royal purple robes, offers you the choice of a free item.\n");
    
    //free item choice
    
    printf("To the East is Carrot Meadow, to the South is Sienna Village, and to the West is Midnight Blue Town.\n");

    printf("1. Go to Carrot Meadow\n2. Go to Sienna Village\n3. Go to Midnight Blue Town\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 15;
    }
    else if (choice == 2)
    {
        room = 19;
    }
    else if (choice == 3)
    {
        room = 13;
    }

    return room;
}
//room15
int carrot(int room) //room 15
{
    int choice;
    printf("You are now in Carrot Meadow.\n");
    printf("There are a few farmers around the dirt field who are harvesting the throusands of carrots.\nThere's not much to see otherwise.\n");
    printf("To the North is Viridian Forest and to the West is Rainbow Bazaar.\n");

    printf("1. Go to Viridian Forest\n2. Go to Rainbow Bazaar\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 10;
    }
    else if (choice == 2)
    {
        room = 14;
    }

    return room;
}
//room16
int pumpkin(int room) //room 16
{
    int choice;
    printf("You are now in Pumpkin Patch.\n");
    printf("It's a spooky field of seemingly normal-looking pumpkins.\nUpon closer look, some of them are carved jack o' lanterns with candles inside.\n");
    printf("To the North is Fluorescent Marsh, to the East is Olive Vineyard, and to the South is Royal Purple Castle.\n");

    printf("1. Go to Fluorescent Marsh\n2. Go to Olive Vineyard\n3. Royal Purple Castle\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 11;
    }
    else if (choice == 2)
    {
        room = 17;
    }
    else if (choice == 3)
    {
        room = 21;
    }

    return room;
}
//room17
int olive(int room) //room 17
{
    int choice;
    printf("You are now in Olive Vineyard.\n");
    printf("Olive trees line the perimiter of the vast grape vineyard.\n");
    printf("To the East is Rouge Pass and to the West is Pumpkin Patch.\n");

    printf("1. Go to Rouge Pass\n2. Go to Pumpkin Patch\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 18;
    }
    else if (choice == 2)
    {
        room = 16;
    }

    return room;
}
//room18
int rouge(int room) //room 18
{
    int choice;
    printf("You are now in Rouge Pass.\n");
    printf("It's a long, wide path lined with trees.\nThe leaves resemble the beautiful colors of autumn.\n");
    printf("To the East is Sienna Village, to the South is Purple Mountains Majesty, and to the West is Olive Vineyard.\n");

    printf("1. Go to Sienna Village\n2. Go to Purple Mountains Majesty\n3. Go to Olive Vineyard\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 19;
    }
    else if (choice == 2)
    {
        room = 23;
    }
    else if (choice == 3)
    {
        room = 17;
    }

    return room;
}
//room19
int sienna(int room) //room 19
{
    int choice;
    printf("You are now in Sienna Village.\n");
    printf("Log buildings surround a small village square.\nPeople sit around a bonfire playing folk songs.\n");
    printf("To the North is Rainbow Bazaar, to the East is Cream Factory, to the South is Fuschia Village, and to the West is Rouge Pass.\n");

    printf("1. Go to Rainbow Bazaar\n2. Go to Cream Factory\n3. Go to Fuschia Village\n4. Go to Rouge Pass\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 14;
    }
    else if (choice == 2)
    {
        room = 20;
    }
    else if (choice == 3)
    {
        room = 24;
    }
    else if (choice == 4)
    {
        room = 18;
    }

    return room;
}
//room20
int cream(int room) //room 20
{
    int choice;
    printf("You are now in Cream Factory.\n");
    printf("Steam clouds arise from the main facility.\nCows graze in a pasture as employees walk around gathering milk.\n");
    printf("To the West is Sienna Village.\nYou've reached a dead end.\n");

    printf("1. Go to Sienna Village\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 19;
    }

    return room;
}
//room21
int royalcastle(int room) //room 21
{
    int choice;
    printf("You are now in Royal Purple Castle.\n");
    printf("A narrow dirt path passes the castle, which is not open to visitors.\nThe queen lives here.\n");
    printf("To the North is Pumpkin Patch and to the East is Royal Purple Castletown.\n");

    printf("1. Go to Pumpkin Patch\n2. Go to Royal Purple Castletown\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 16;
    }
    else if (choice == 2)
    {
        room = 22;
    }

    return room;
}
//room22
int royalcastletown(int room) //room 22
{
    int choice;
    printf("You are now in Royal Purple Castletown.\n");
    printf("It's a small town built from stone bricks.\nFamily-owned item shops line the street,next to pubs and apartments.\n");
    printf("A man in a tunic and boots motions for you to come over.\nHe says he has heard of your good deeds and wants to offer you a free item from his shop.\n");

    //free item choice
    
    printf("To the East is Purple Mountains Majesty and to the West is Royal Purple Castle.\n");

    printf("1. Go to Purple Mountains Majesty\n2. Go to Royal Purple Castle\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 23;
    }
    else if (choice == 2)
    {
        room = 21;
    }

    return room;
}
//room23
int purplemountains(int room) //room 23
{
    int choice;
    printf("You are now in Purple Mountains Majesty.\n");
    printf("There is a snowy pass between two peeks, which looks like quite the climb.\nAt the top, you find a glorious view of the kingdom.\n");
    printf("To the North is Rouge Pass, to the East is Fuschia Village, and to the West is Royal Purple Castletown.\n");

    printf("1. Go to Rouge Pass\n2. Go to Fuschia Village\n3. Go to Royal Purple Castletown\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 18;
    }
    else if (choice == 2)
    {
        room = 24;
    }
    else if (choice == 3)
    {
        room = 22;
    }

    return room;
}
//room24
int fuschia(int room) //room 24
{
    int choice;
    printf("You are now in Fuschia Village.\n");
    printf("There are red tents spread throughout the pink grass.\nA rose-colored river flows through the center of the village.\n");
    printf("To the North is Sienna Village, to the East is Rose Village, and to the West is Purple Mountains Majesty.\n");

    printf("1. Go to Sienna Village\n2. Go to Rose Village\n3. Go to Purple Mountains Majesty\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);
    if (choice == 1)
    {
        room = 19;
    }
    else if (choice == 2)
    {
        room = 25;
    }
    else if (choice == 3)
    {
        room = 23;
    }

    return room;
}
//room25
int rose(int room, int chara, bool &win) //room 25
{
    int choice;
    if (chara == 1) //cobalt
    {
        printf("You, Cobalt, wake up in Rose Village.\n");
        printf("You looked around in a panic, and see fields of flowers.\n");
        printf("You don't know your way back to Ultramarine!\n");
        _getch;

        printf("You are now in Rose Village\n");
        printf("It's a rose-colored lake with a few cabins lining the white sand beach.\n");
        printf("To the West is Fuschia Village.\nYou're at a dead end.\n");

        printf("1. Go to Fuscia Village\n");
        printf(">");
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
        if (choice == 1)
        {
            room = 24;
        }
    }
    else if (chara == 2) //magenta
    {
        printf("You are now in Rose Village\n");
        win = true;
    }
    else //sunflower
    {
        printf("You are now in Rose Village\n");
        printf("It's a rose-colored lake with a few cabins lining the white sand beach.\n");
        printf("To the West is Fuschia Village.\nYou've reached a dead end.\n");

        printf("1. Go to Fuscia Village\n");
        printf(">");
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);
        if (choice == 1)
        {
            room = 24;
        }

    }

    return room;
}


int main()
{
    Player p;
    p.chara = 0;

    int menu_choice;
    int item_type;
    int item_weapon = 0;
    int item_misc = 0;
    int items = 0;

    int room = 0;
    int choice;
    bool win = false;

    do //menu loop
    {
        system("cls");
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("Welcome to my RPG !\n");
        printf("Created by Halle Carlson\n");
        printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");

        printf("Character: ");        
        if (p.chara == 1)
        {
            printf("Cobalt\n");
        }
        else if (p.chara == 2)
        {
            printf("Magenta\n");
        }
        else if (p.chara == 3)
        {
            printf("Sunflower\n");
        }
        else 
        {
            printf("not selected\n");
        }

        printf("Items: %i\n", items);

        printf("Weapon: ");        
        if (item_weapon == 1)
        {
            printf("Longsword\n");
        }
        else if (item_weapon == 2)
        {
            printf("Shortsword\n");
        }
        else if (item_weapon == 3)
        {
            printf("Spear\n");
        }
        else 
        {
            printf("not selected\n");
        }

        printf("Item: ");       
        if (item_misc == 1)
        {
            printf("Healing potions\n");
        }
        else if (item_misc == 2)
        {
            printf("Spellbook\n");
        }
        else if (item_misc == 3)
        {
            printf("Lunchbox\n");
        }
        else 
        {
            printf("not selected\n");
        }

        printf("\nMenu\n");
        printf("----\n");

        printf("1. Select Character\n");
        printf("2. Equip character\n");
        printf("3. Begin game\n");
        printf(">");
        scanf_s("%i", &menu_choice);
        fseek(stdin, 0, SEEK_END);

        if (menu_choice == 1) //select character
        {
            printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
            if (p.chara == 1 || p.chara == 2 || p.chara == 3)
            {
                printf("A character has already been selected !\n");
            }
            else if (p.chara != 1 || p.chara != 2 || p.chara != 3)
            {
                printf("Select Character:\n\n");
                printf("1. Cobalt\n");
                printf("\t\tbase\n");
                printf("\t\t----\n\n");
                printf("\t\tspell:  minor healing (self)\n");
                printf("\t\tattack: strike\n");
                printf("\t\tspell:  reduce damage taken (self)\n");
                printf("\t\tdefense specialty\n\n");
                printf("2. Magenta\n");
                printf("\t\tbase\n");
                printf("\t\t----\n\n");
                printf("\t\tattack: strike\n");
                printf("\t\tattack: thrash\n");
                printf("\t\tspell:  increase damage dealt (self)\n");
                printf("\t\tphysical attack specialty\n\n");
                printf("3. Sunflower\n");
                printf("\t\tbase\n");
                printf("\t\t----\n\n");
                printf("\t\tattack: strike\n");
                printf("\t\tspell:  slepp spell (enemy)\n");
                printf("\t\tspell:  decrease accuracy (enemy)\n");
                printf("\t\tspell:  increase accuracy (self)\n");
                printf("\t\tspellcasting specialty\n\n");

                printf(">");
                scanf_s("%i", &p.chara);
                fseek(stdin, 0, SEEK_END);

                if (p.chara == 1) //Cobalt
                {
                    p.chara = 1;
                    printf("\n\nSelected: Cobalt\n\n");

                    int player_hp_max = 30;
                    int player_hp_min = 20;
                    int player_hp;

                    player_hp = player_hp_min + rand() % (player_hp_max - player_hp_min + 1); //player hit points [20, 30] / 30 max
                    
                    printf("[hp] ---> %i / %i\n", player_hp, player_hp_max); //starting hp / 30 max
                }
                else if (p.chara == 2) //Magenta
                {
                    p.chara = 2;
                    printf("\n\nSelected: Magenta\n\n");

                    int player_hp_max = 30;
                    int player_hp_min = 20;
                    int player_hp;

                    player_hp = player_hp_min + rand() % (player_hp_max - player_hp_min + 1); //player hit points [20, 30] / 30 max

                    printf("[hp] ---> %i / %i\n", player_hp, player_hp_max); //starting hp / 30 max
                }
                else if (p.chara == 3) //Sunflower
                {
                    p.chara = 3;
                    printf("\n\nSelected: Sunflower\n\n");

                    int player_hp_max = 30;
                    int player_hp_min = 20;
                    int player_hp;

                    player_hp = player_hp_min + rand() % (player_hp_max - player_hp_min + 1); //player hit points [20, 30] / 30 max

                    printf("[hp] ---> %i / %i\n", player_hp, player_hp_max); //starting hp / 30 max
                }
            }
                printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
                printf("Begin the game ? // 3 for yes, any other key to return to the menu\n");
                
                printf(">");
                scanf_s("%i", &menu_choice);
                fseek(stdin, 0, SEEK_END);            
        }

        if (menu_choice == 2) //equip character
        {
            printf("Equip item from which: // you may equip one of each\n");
            printf("1. Weapon\n");
            printf("2. Miscellaneous item\n");
            
            printf(">");
            scanf_s("%i", &item_type);
            fseek(stdin, 0, SEEK_END);
            
            if (item_type == 1)
            {
                printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
                if (item_weapon == 1 || item_weapon == 2 || item_weapon == 3)
                {
                    printf("A weapon has already been selected !\n");
                }
                else if (item_weapon != 1 || item_weapon != 2 || item_weapon != 3)
                {
                    printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
                    printf("Weapon select:\n");
                    printf("1. Longsword\n");
                    printf("\t\tDeals high damage, low accuracy\n");
                    printf("2. Shortsword\n");
                    printf("\t\tDeals low-medium damage, high accuracy\n");
                    printf("3. Spear\n");
                    printf("\t\tDeals medium damage, medium accuracy\n");

                    printf(">");
                    scanf_s("%i", &item_weapon);
                    fseek(stdin, 0, SEEK_END);

                    if (item_weapon == 1) //Longsword
                    {
                        item_weapon = 1;
                        items++;
                        printf("\n\nSelected: Longsword\n\n");

                        int player_dp_max = 20;
                        int player_dp_min = 10;
                        int player_dp;

                        printf("[dp] ------> %i - %i\n", player_dp_min, player_dp_max); //10-20 dp
                    }
                    else if (item_weapon == 2) //Shortsword
                    {
                        item_weapon = 2;
                        items++;
                        printf("\n\nSelected: Shortsword\n\n");

                        int player_dp_max = 10;
                        int player_dp_min = 8;
                        int player_dp;

                        printf("[dp] ---> %i - %i\n", player_dp_min, player_dp_max); //8-10 dp
                    }
                    else if (item_weapon == 3) //Spear
                    {
                        item_weapon = 3;
                        items++;
                        printf("\n\nSelected: Spear\n\n");

                        int player_dp_max = 15;
                        int player_dp_min = 10;
                        int player_dp;

                        printf("[dp] ------> %i - %i\n", player_dp_min, player_dp_max); //10-15 dp
                    }
                }
                printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
                printf("Begin the game ? // 3 for yes, any other key to return to the menu\n");

                printf(">");
                scanf_s("%i", &menu_choice);
                fseek(stdin, 0, SEEK_END);
            }
            if (item_type == 2)
            {
                printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
                if (item_misc == 1 || item_misc == 2 || item_misc == 3)
                {
                    printf("An item has already been selected !\n");
                }
                else if (item_misc != 1 || item_misc != 2 || item_misc != 3)
                {
                    printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
                    printf("Item select:\n");
                    printf("1. 3 potions of full healing\n");
                    printf("\t\tMay be used on self or ally (or enemy)\n");
                    printf("2. Spellbook\n");
                    printf("\t\tAllows your selected character to use other characters' spells with decreased effects and/or accuracy\n");
                    printf("3. Lunchbox\n");
                    printf("\t\tContains various food items that provide minor heaing and various effects to whoever eats them\n");

                    printf(">");
                    scanf_s("%i", &item_misc);
                    fseek(stdin, 0, SEEK_END);

                    if (item_misc == 1) //potions
                    {
                        item_misc = 1;
                        items++;
                        printf("\n\nSelected: healing potions\n\n");
                    }
                    else if (item_misc == 2) //spellbook
                    {
                        item_misc = 2;
                        items++;
                        printf("\n\nSelected: spellbook\n\n");
                    }
                    else if (item_misc == 3) //lunchbox
                    {
                        item_misc = 3;
                        items++;
                        printf("\n\nSelected: lunchbox\n\n");
                    }
                }
                printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
                printf("Begin the game ? // 3 for yes, any other key to return to the menu\n");

                printf(">");
                scanf_s("%i", &menu_choice);
                fseek(stdin, 0, SEEK_END);
            }            
        }

    } while (menu_choice != 3);


    bool start = true;
    do
    {
        if (p.chara == 1 && start)
        {
            room = rose(room, p.chara, win);
            start = false;
        }
        if (p.chara == 2 && start)
        {
            room = goldenrod(room, p.chara, win);
            start = false;
        }
        else if (p.chara == 3 && start)
        {
            room = ultramarine(room, p.chara, win);
            start = false;
        }



        if (room == 1)
        {
            room = ultramarine(room, p.chara, win);
        }
        else if (room == 2)
        {
            room = canary(room);
        }
        else if (room == 3)
        {
            room = violetblue(room);
        }
        else if (room == 4)
        {
            room = westgolden(room);
        }
        else if (room == 5)
        {
            room = goldenrod(room, p.chara, win);
        }
        else if (room == 6)
        {
            room = maroon(room);
        }
        else if (room == 7)
        {
            room = sunset(room);
        }
        else if (room == 8)
        {
            room = violet(room);
        }
        else if (room == 9)
        {
            room = silver(room);
        }
        else if (room == 10)
        {
            room = viridian(room);
        }
        else if (room == 11)
        {
            room = fluorescent(room);
        }
        else if (room == 12)
        {
            room = rust(room);
        }
        if (room == 13)
        {
            room = midnightblue(room);
        }
        else if (room == 14)
        {
            room = rainbow(room);
        }
        else if (room == 15)
        {
            room = carrot(room);
        }
        else if (room == 16)
        {
            room = pumpkin(room);
        }
        else if (room == 17)
        {
            room = olive(room);
        }
        else if (room == 18)
        {
            room = rouge(room);
        }
        else if (room == 19)
        {
            room = sienna(room);
        }
        else if (room == 20)
        {
            room = cream(room);
        }
        else if (room == 21)
        {
            room = royalcastle(room);
        }
        else if (room == 22)
        {
            room = royalcastletown(room);
        }
        else if (room == 23)
        {
            room = purplemountains(room);
        }
        else if (room == 24)
        {
            room = fuschia(room);
        }
        else if (room == 25)
        {
            room = rose(room, p.chara, win);
        }
    } while (!win);
    //while (win)
    {        
        printf("You reached home!\n");
        _getch();
    }

    return 0;
}


