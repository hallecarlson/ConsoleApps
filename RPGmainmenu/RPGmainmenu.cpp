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

    Pseudocode:     Variables
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

    Notes: Error with selections printing in menu

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

*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;

/*int movement(int room, int choice, int chara)
{
    room;
    choice;
    chara;
    

    do //starting room
    {
        if (chara == 1) //cobalt
        {
            //room = 
        }

        if (chara == 2) //magenta
        {
            //room = 
        }

        if (chara == 3) //sunflower
        {
            //room = 
        }
    } while (choice == 0);


    if (choice == 1)
    {
        room = 1;        
    }
    if (choice == 2)
    {
        room = 2;
    }
    if (choice == 3)
    {
        room = 3;
    }
    if (choice == 4)
    {
        room = 4;
    }
    if (choice == 5)
    {
        room = 5;
    }
    if (choice == 6)
    {
        room = 6;
    }
    if (choice == 7)
    {
        room = 7;
    }
    if (choice == 8)
    {
        room = 8;
    }
    if (choice == 9)
    {
        room = 9;
    }
    if (choice == 10)
    {
        room = 10;
    }
    if (choice == 11)
    {
        room = 11;
    }
    if (choice == 12)
    {
        room = 12;
    }
    if (choice == 13)
    {
        room = 13;
    }
    if (choice == 14)
    {
        room = 14;
    }
    if (choice == 15)
    {
        room = 15;
    }
    if (choice == 16)
    {
        room = 16;
    }
    if (choice == 17)
    {
        room = 17;
    }
    if (choice == 18)
    {
        room = 18;
    }
    if (choice == 19)
    {
        room = 19;
    }
    if (choice == 20)
    {
        room = 20;
    }
    if (choice == 21)
    {
        room = 21;
    }
    if (choice == 22)
    {
        room = 22;
    }
    if (choice == 23)
    {
        room = 23;
    }
    if (choice == 24)
    {
        room = 24;
    }
    if (choice == 25)
    {
        room = 25;
    }

    return room;
}*/



int ultramarine(int room, int chara)
{
    int choice;
    if (chara == 2)
    {
        printf("You are now in Ultramarine\n");
        printf("You reached home!");
    }
    else
    {
        printf("You are now in Ultramarine\n");
        printf("It's a shimmering sea town with limestone buildings protruding from the ocean.\n");
        printf("To the East is Canary Yellow Island, and it seems that is the only way to go.\n");

        printf("1. Go to Canary Yellow Island\n2. Return to West Goldenrod?\n");
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

    }

}
int canary(int room, int chara)
    {
        int choice;
        printf("You are now on Canary Yellow Island\n");
        printf("You travelled by boat to reach a warm beach, with banana trees and canaries in the center.\n");
        printf("To the West is Ultramarine and to the south is Sunset Observatory.\n");

        printf("1. Go to Ultramarine\n2. Return to West Goldenrod?\n");
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
    }

int main()
{
    int chara = 0;

    int menu_choice;
    int item_type;
    int item_weapon = 0;
    int item_misc = 0;
    int items = 0;

    int room;
    int choice;

    do //menu loop
    {
        system("cls");
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("Welcome to my RPG !\n");
        printf("Created by Halle Carlson\n");
        printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");

        printf("Character: ");        
        if (chara == 1)
        {
            printf("Cobalt\n");
        }
        else if (chara == 2)
        {
            printf("Magenta\n");
        }
        else if (chara == 3)
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
            if (chara == 1 || chara == 2 || chara == 3)
            {
                printf("A character has already been selected !\n");
            }
            else if (chara != 1 || chara != 2 || chara != 3)
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
                scanf_s("%i", &chara);
                fseek(stdin, 0, SEEK_END);

                if (chara == 1) //Cobalt
                {
                    chara = 1;
                    printf("\n\nSelected: Cobalt\n\n");

                    int player_hp_max = 30;
                    int player_hp_min = 20;
                    int player_hp;

                    player_hp = player_hp_min + rand() % (player_hp_max - player_hp_min + 1); //player hit points [20, 30] / 30 max
                    
                    printf("[hp] ---> %i / %i\n", player_hp, player_hp_max); //starting hp / 30 max
                }
                else if (chara == 2) //Magenta
                {
                    chara = 2;
                    printf("\n\nSelected: Magenta\n\n");

                    int player_hp_max = 30;
                    int player_hp_min = 20;
                    int player_hp;

                    player_hp = player_hp_min + rand() % (player_hp_max - player_hp_min + 1); //player hit points [20, 30] / 30 max

                    printf("[hp] ---> %i / %i\n", player_hp, player_hp_max); //starting hp / 30 max
                }
                else if (chara == 3) //Sunflower
                {
                    chara = 3;
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


    if (chara == 1) //cobalt
    {
        printf("Cobalt woke up in Rose Village\n");
        printf("she looked around in a panic, and saw fields of flowers\n");
        printf("Cobalt didn't know her way back to Ultramarine!");
    }
    else if (chara == 2) //magenta
    {
        printf("Magenta woke up in Goldenrod\n");
        printf("he looked around in a panic, and saw tall buildings, which towered over him\n");
        printf("Magenta didn't know his way back to Rose Village!");
    }
    else if (chara == 3) //sunflower
    {
        printf("Sunflower woke up in Ultramarine\n");
        printf("she looked around in a panic, and saw a system of buildings, almost completely submerged in water.\n");
        printf("Sunflower didn't know her way back to Goldenrod!");
    }

    return 0;
}


