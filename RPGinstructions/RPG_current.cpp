// RPGcopy.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   RPG
    File Name:      RPGcopy.cpp
    Purpose:        

    Pseudocode:     
      
    Requirements:       Up-to-date  Comment section (Green text in beginning of file), Comments used throughout code
                        Done        Intro and clear instructions, easy to use interface
                        Done        Simple dungeon with 25 rooms minimum
                        In progress 4 NPCs minimum
                        In progress NPC interactions effective and consistent (I/O, branching, looping, classes)
                        Up-to-date  Option mechanics effective (branching), game loops and other loops effective (looping)
                        In progress Strings to hold appropriate data (addressing user by name, holding NPC responses, other 
                                        canned output that may be used multiple times (strings)
                        Up-to-date  Functions used appropriately (passing correct arguments and returning correct values 
                                        (for intro and interactions at least), rooms and interactions)
                        (Check)
                        Many errors Game works (beginning, middle, end), replayable with entertainment value, has error checking
                        In progress Uses structs or classes for player stats and other places as appropriate (struct/classes)
                        (Must be checked and tested)
                        In progress Uses vectors as appropriate (NPCs saved to vectors at least)
                        (Must be finished and tested)
                        In progress Uses object-oriented programming (NPCs should transition from being structs to classes, 
                                        classes should be used in some way if not for NPCs
                        (Must be tested)
                        Done        Use files for save states, use at checkpoints of at will, user may start new game or continue old game
                        (Must be tested)
                        Not done    Game thoroughly tested by at least 4 others who fill out 5-question questionnaire that I create


    Notes:              implement save states, 
                        fix death messages
                        edit vectors to what they need to be
                        change npc interactions to strings
                        get game to shut down and delete save data after death
                        ask Mr. Miyoshi if enemy needs to be in a vector and how to do that if so
                        test

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

    Date: 1/24/22       Done:
                        Made a minor formatting change to a comment
                        Merged changes
                        Pushed to GitHub


    Date: 1/25/22       Done:
                        Added comments for future fights
                        Pushed to GitHub

    Date: 1/26/22       Done:
                        Added comments for future item choices
                        Pushed to GitHub

    Date: 2/15/22       Done:
                        Copied code into new project
                        Added code for vectors for NPC enemies
                        Pushed to GitHub
                        Added more code for merchant NPC vectors 

    Date: 2/16/22       Done:
                        Added code for combat in a struct
                        Changed code in a vector
                        Got a bit of help from Mr. Miyoshi
                        Pushed to GitHub

    Date: 2/22/22       Done:
                        Pulled from GitHub
                        Added code to combat function
                        Added pseudocode for a sample battle and for hp and dp stats
                        Changed code in main() to address user by name in menu
                        Tested code
                        Found a undeclared variable error, decided to fix later
                        Pushed to GitHub

    Date: 3/7/22        Done:
                        Puled from GitHub
                        Added new .cpp and .h files for enemy class
                        Fixed some code
                        Pushed to GitHub

    Date: 3/8/22        Done:
                        Got help from Mr. Miyoshi
                        Edited code for combat
                        Pushed to GitHub

                        Pulled from GitHub
                        Added a lot of code for combat regarding player's options in battle
                        Made minor changes to item descriptions
                        Pushed to GitHub

    Date: 3/9/22        Done:
                        Pulled from GitHub
                        Added code for player battle actions
                        Pushed to GitHub

    Date: 3/13/22       Done:
                        Edited a few things
                        Pushed to GitHub

    Date: 3/14/22       Done:
                        Pulled from GtiHub
                        Added code to combat function
                        Fixed some errors
                        Pushed to GitHub

    Date: 3/15/22       Done:
                        Added a lot of code for combat
                        Finished some specific combat actions
                        Fixed some text
                        Pushed to GitHub

    Date: 3/16/22       Done:  
                        Added more code for combat
                        Finished some accuracy and spell actions
                        Fixed some text
                        Fine-tuned some things
                        Pushed to GitHub

    Date: 3/18/22       Done:
                        Added code for combat
                        Pushed to GitHub

    Date: 3/21/22       Done:
                        Added code and comments for instructions and save states and whatnot
                        Added comments for RPG requirements
                        Pushed to GitHub

                        Got help from Mr. Miyoshi  
                        Added code in classes for NPC interactions
                        Pushed to GitHub

                        Pulled from GitHub
                        Edited code for merchant class
                        Tweaked various code
                        Added more text
                        Added progress through RPG requirements
                        Pushed to GitHub

    Date: 3/22/22       Done:
                        Pulled from GitHub
                        Added code for classes
                        Added code and dialogue for merchant and enemy encounters in room functions
                        Got help from Mr. Miyoshi
                        Setup code for beginning new game or continuing from a save state
                        Pushed to GitHub

                        This is a test...
                        GitHub problems.  MTM

    Data: 3/23/22       Done:
                        Got help from Mr. Miyoshi
                        Added code for reading save data from files and writing save data to files
                        Added code for enemy encounters and tweaked amount of enemies pushed to vectors
                        Added a few comments
                        Pushed to GitHub

                        Pulled from GitHub
                        Finished a line of code for save writing during advisory
                        Pushed to GitHub

                        Added code for saving the game after enemy encounters
                        Added variables included in function calls

                        Fixed room function calls in main to include info for encounters
                        Refined some things
                        Pushed to GitHub

    Date: 3/24/22       Done:
                        Tried to fix an error and failed
                        Pushed to GitHub
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <vector>
#include <fstream>
#include "merchant.h"
#include "player.h"
using namespace std;


Player combat(Player p, Player e, int chara, int item_weapon, int item_misc, int potions, int lunchbox, int food) //a fight sequence used in several rooms on the map
{
    e.roll = 0;
    p.roll = 0;

    int player_turn = 0;
    int player_spell = 0;

    int enemy_type = 0;
    string enemy = "";

    int foodmin = 1;
    int foodmax = 5; 
    bool player_accuracy = false;
    bool enemy_accuracy = false;
    bool sleep = false;

    e.hpmin = 15;
    e.hpmax = 20;
    e.hp = e.hpmin + rand() % (e.hpmax - e.hpmin + 1); //roll enemy hp
    
    enemy_type = 1 + rand() % (3 - 1 + 1);
    if (enemy_type == 1)
    {
        enemy = "Grey Painter";
    }
    if (enemy_type == 2)
    {
        enemy = "Grey Knight";
    }
    if (enemy_type == 3)
    {
        enemy = "Grey Barbarian";
    }

    if (chara == 1)
    {
        printf("Cobalt encountered a %s!", enemy.c_str());
    }
    if (chara == 2)
    {
        printf("Magenta encountered a %s!", enemy.c_str());
    }
    if (chara == 3)
    {
        printf("Sunflower encountered a %s!", enemy.c_str());
    }

    while (p.hp > 0 && e.hp > 0)
    {
        if (p.hp > 0)
        {
            p.roll = 0 + rand() % (10 - 0 + 1);
            if (p.roll >= 2)
            {
                do
                {
                    printf("\nChoose a move\n1. weapon attack\t2. strike\t3. spell\t4. item\n>");
                    scanf_s("%i", &player_turn);
                    fseek(stdin, 0, SEEK_END);
                } while (player_turn != 1 && player_turn != 2 && player_turn != 3 && player_turn != 4);

                if (player_turn == 1)
                {
                    if (chara == 1)
                    {
                        printf("\nCobalt tried to use her weapon\n");
                        if (item_weapon == 1) //longsword
                        {
                            p.dpmin = 8;
                            p.dpmax = 10;
                            p.roll = 0 + rand() % (10 - 0 + 1);
                            if (player_accuracy == false)
                            {
                                if (p.roll >= 5)
                                {
                                    p.dp = p.dpmin + rand() % (p.dpmax - p.dpmin + 1);
                                    e.hp = e.hp - p.dp;
                                    printf("Cobalt hit the %s with her longsword!\nThe %s lost %i hp!\n", enemy.c_str(), enemy.c_str(), p.dp);
                                    if (e.hp <= 0)
                                    {
                                        printf("Cobalt defeated the %s!", enemy.c_str());
                                    }
                                }
                                else if (p.roll < 5)
                                {
                                    printf("Cobalt missed!\n");
                                }
                            }
                            else if (player_accuracy == true)
                            {
                                if (p.roll >= 3)
                                {
                                    p.dp = p.dpmin + rand() % (p.dpmax - p.dpmin + 1);
                                    e.hp = e.hp - p.dp;
                                    printf("Cobalt hit the %s with her longsword!\nThe %s lost %i hp!\n", enemy.c_str(), enemy.c_str(), p.dp);
                                    if (e.hp <= 0)
                                    {
                                        printf("Cobalt defeated the %s!", enemy.c_str());
                                    }
                                }
                                else if (p.roll < 3)
                                {
                                    printf("Cobalt missed!\n");
                                }
                            }
                        }
                        if (item_weapon == 2) //shortsword
                        {
                            p.dpmin = 5;
                            p.dpmax = 8;
                            p.dp = p.dpmin + rand() % (p.dpmax - p.dpmin + 1);
                            e.hp = e.hp - p.dp;
                            printf("Cobalt hit the %s with her shortsword!\nThe %s lost %i hp!\n", enemy.c_str(), enemy.c_str(), p.dp);
                            if (e.hp <= 0)
                            {
                                printf("Cobalt defeated the %s!", enemy.c_str());
                            }
                        }
                        if (item_weapon == 3) //spear
                        {
                            p.dpmin = 7;
                            p.dpmax = 9;
                            p.roll = 0 + rand() % (10 - 0 + 1);
                            if (player_accuracy == false)
                            {
                                if (p.roll >= 3)
                                {
                                    p.dp = p.dpmin + rand() % (p.dpmax - p.dpmin + 1);
                                    e.hp = e.hp - p.dp;
                                    printf("Cobalt hit the %s with her spear!\nThe %s lost %i hp!\n", enemy.c_str(), enemy.c_str(), p.dp);
                                    if (e.hp <= 0)
                                    {
                                        printf("Cobalt defeated the %s!", enemy.c_str());
                                    }
                                }
                                else if (p.roll < 3)
                                {
                                    printf("Cobalt missed!\n");
                                }
                            }
                            else if (player_accuracy == true)
                            {
                                if (p.roll >= 1)
                                {
                                    p.dp = p.dpmin + rand() % (p.dpmax - p.dpmin + 1);
                                    e.hp = e.hp - p.dp;
                                    printf("Cobalt hit the %s with her spear!\nThe %s lost %i hp!\n", enemy.c_str(), enemy.c_str(), p.dp);
                                    if (e.hp <= 0)
                                    {
                                        printf("Cobalt defeated the %s!", enemy.c_str());
                                    }
                                }
                                else if (p.roll < 1)
                                {
                                    printf("Cobalt missed!\n");
                                }
                            }
                        }
                    }
                    if (chara == 2)
                    {
                        printf("\nMagenta tried to use his weapon\n");
                        if (item_weapon == 1) //longsword
                        {
                            p.dpmin = 10;
                            p.dpmax = 15;
                            p.roll = 0 + rand() % (10 - 0 + 1);
                            if (player_accuracy == false)
                            {
                                if (p.roll >= 5)
                                {
                                    p.dp = p.dpmin + rand() % (p.dpmax - p.dpmin + 1);
                                    e.hp = e.hp - p.dp;
                                    printf("Magenta hit the %s with his longsword!\nThe %s lost %i hp!\n", enemy.c_str(), enemy.c_str(), p.dp);
                                    if (e.hp <= 0)
                                    {
                                        printf("Magenta defeated the %s!", enemy.c_str());
                                    }
                                }
                                else if (p.roll < 5)
                                {
                                    printf("Magenta missed!\n");
                                }
                            }
                            else if (player_accuracy == true)
                            {
                                if (p.roll >= 3)
                                {
                                    p.dp = p.dpmin + rand() % (p.dpmax - p.dpmin + 1);
                                    e.hp = e.hp - p.dp;
                                    printf("Magenta hit the %s with his longsword!\nThe %s lost %i hp!\n", enemy.c_str(), enemy.c_str(), p.dp);
                                    if (e.hp <= 0)
                                    {
                                        printf("Magenta defeated the %s!", enemy.c_str());
                                    }
                                }
                                else if (p.roll < 3)
                                {
                                    printf("Magenta missed!\n");
                                }
                            }
                        }
                        if (item_weapon == 2) //shortsword
                        {
                            p.dpmin = 6;
                            p.dpmax = 9;
                            p.dp = p.dpmin + rand() % (p.dpmax - p.dpmin + 1);
                            e.hp = e.hp - p.dp;
                            printf("Magenta hit the %s with his shortsword!\nThe %s lost %i hp!\n", enemy.c_str(), enemy.c_str(), p.dp);
                            if (e.hp <= 0)
                            {
                                printf("Magenta defeated the %s!", enemy.c_str());
                            }
                        }
                        if (item_weapon == 3) //spear
                        {
                            p.dpmin = 8;
                            p.dpmax = 13;
                            p.roll = 0 + rand() % (10 - 0 + 1);
                            if (player_accuracy == false)
                            {
                                if (p.roll >= 3)
                                {
                                    p.dp = p.dpmin + rand() % (p.dpmax - p.dpmin + 1);
                                    e.hp = e.hp - p.dp;
                                    printf("Magenta hit the %s with his spear!\nThe %s lost %i hp!\n", enemy.c_str(), enemy.c_str(), p.dp);
                                    if (e.hp <= 0)
                                    {
                                        printf("Magenta defeated the %s!", enemy.c_str());
                                    }
                                }
                                else if (p.roll < 3)
                                {
                                    printf("Magenta missed!");
                                }
                            }
                            else if (player_accuracy == true)
                            {
                                if (p.roll >= 1)
                                {
                                    p.dp = p.dpmin + rand() % (p.dpmax - p.dpmin + 1);
                                    e.hp = e.hp - p.dp;
                                    printf("Magenta hit the %s with his spear!\nThe %s lost %i hp!\n", enemy.c_str(), enemy.c_str(), p.dp);
                                    if (e.hp <= 0)
                                    {
                                        printf("Magenta defeated the %s!", enemy.c_str());
                                    }
                                }
                                else if (p.roll < 1)
                                {
                                    printf("Magenta missed!");
                                }
                            }
                        }
                    }
                    if (chara == 3)
                    {
                        printf("\nSunflower tried to use her weapon\n");
                        if (item_weapon == 1) //longsword
                        {
                            p.dpmin = 8;
                            p.dpmax = 10;
                            p.roll = 0 + rand() % (10 - 0 + 1);
                            if (player_accuracy == false)
                            {
                                if (p.roll >= 5)
                                {
                                    p.dp = p.dpmin + rand() % (p.dpmax - p.dpmin + 1);
                                    e.hp = e.hp - p.dp;
                                    printf("Sunflower hit the %s with her longsword!\nThe %s lost %i hp!\n", enemy.c_str(), enemy.c_str(), p.dp);
                                    if (e.hp <= 0)
                                    {
                                        printf("Sunflower defeated the %s!", enemy.c_str());
                                    }
                                }
                                else if (p.roll < 5)
                                {
                                    printf("Sunflower missed!\n");
                                }
                            }
                            else if (player_accuracy == true)
                            {
                                if (p.roll >= 3)
                                {
                                    p.dp = p.dpmin + rand() % (p.dpmax - p.dpmin + 1);
                                    e.hp = e.hp - p.dp;
                                    printf("Sunflower hit the %s with her longsword!\nThe %s lost %i hp!\n", enemy.c_str(), enemy.c_str(), p.dp);
                                    if (e.hp <= 0)
                                    {
                                        printf("Sunflower defeated the %s!", enemy.c_str());
                                    }
                                }
                                else if (p.roll < 3)
                                {
                                    printf("Sunflower missed!\n");
                                }
                            }
                        }
                        if (item_weapon == 2) //shortsword
                        {
                            p.dpmin = 5;
                            p.dpmax = 8;
                            p.dp = p.dpmin + rand() % (p.dpmax - p.dpmin + 1);
                            e.hp = e.hp - p.dp;
                            printf("Sunflower hit the %s with her shortsword!\nThe %s lost %i hp!\n", enemy.c_str(), enemy.c_str(), p.dp);
                            if (e.hp <= 0)
                            {
                                printf("Sunflower defeated the %s!", enemy.c_str());
                            }

                        }
                        if (item_weapon == 3) //spear
                        {
                            p.dpmin = 7;
                            p.dpmax = 9;
                            p.roll = 0 + rand() % (10 - 0 + 1);
                            if (player_accuracy == false)
                            {
                                if (p.roll >= 3)
                                {
                                    p.dp = p.dpmin + rand() % (p.dpmax - p.dpmin + 1);
                                    e.hp = e.hp - p.dp;
                                    printf("Sunflower hit the %s with her spear!\nThe %s lost %i hp!\n", enemy.c_str(), enemy.c_str(), p.dp);
                                    if (e.hp <= 0)
                                    {
                                        printf("Sunflower defeated the %s!", enemy.c_str());
                                    }
                                }
                                else if (p.roll < 3)
                                {
                                    printf("Sunflower missed!\n");
                                }
                            }
                            else if (player_accuracy == true)
                            {
                                if (p.roll >= 1)
                                {
                                    p.dp = p.dpmin + rand() % (p.dpmax - p.dpmin + 1);
                                    e.hp = e.hp - p.dp;
                                    printf("Sunflower hit the %s with her spear!\nThe %s lost %i hp!\n", enemy.c_str(), enemy.c_str(), p.dp);
                                    if (e.hp <= 0)
                                    {
                                        printf("Sunflower defeated the %s!", enemy.c_str());
                                    }
                                }
                                else if (p.roll < 1)
                                {
                                    printf("Sunflower missed!\n");
                                }
                            }
                        }
                    }
                }
                else if (player_turn == 2)
                {
                    if (chara == 1)
                    {
                        printf("\nCobalt struck the enemy with her fists!\n");
                        p.dp = 5;
                        e.hp = e.hp - p.dp;
                        printf("The enemy lost %i hp!\n", p.dp);
                        if (e.hp <= 0)
                        {
                            printf("Cobalt defeated the %s!", enemy.c_str());
                        }
                    }
                    if (chara == 2)
                    {
                        printf("\nMagenta struck the enemy with his fists!\n");
                        p.dp = 7;
                        e.hp = e.hp - p.dp;
                        printf("The enemy lost %i hp!\n", p.dp);
                        if (e.hp <= 0)
                        {
                            printf("Magenta defeated the %s!", enemy.c_str());
                        }
                    }
                    if (chara == 3)
                    {
                        printf("\nSunflower struck the enemy with her fists!\n");
                        p.dp = 5;
                        e.hp = e.hp - p.dp;
                        printf("The enemy lost %i hp!\n", p.dp);
                        if (e.hp <= 0)
                        {
                            printf("Sunflower defeated the %s!", enemy.c_str());
                        }
                    }
                }
                else if (player_turn == 3)
                {
                    if (item_misc == 2)
                    {
                        if (chara == 1 || chara == 2)
                        {
                            do
                            {
                                printf("\nChoose a spell: 1. moderate healing\t2. increase accuracy\n>");
                                scanf_s("%i", &player_spell);
                                fseek(stdin, 0, SEEK_END);
                            } while (player_spell != 1 && player_spell != 2);
                            if (player_spell == 1)
                            {

                                p.hphealed = 0;
                                p.hpmin = 8;
                                p.hpmax = 15;
                                p.hphealed = p.hpmin + rand() % (p.hpmax - p.hpmin + 1);
                                p.hp = p.hp + p.hphealed;
                                if (p.hp > 30)
                                {
                                    p.hp = 30;
                                }
                                if (chara == 1)
                                {
                                    printf("Cobalt gained %i hp! Cobalt now has %i hp\n", p.hphealed, p.hp);
                                }
                                if (chara == 2)
                                {
                                    printf("Magenta gained %i hp! Magenta now has %i hp\n", p.hphealed, p.hp);
                                }
                            }   
                            else if (player_spell == 2)
                            {
                                if (player_accuracy == false)
                                {
                                    player_accuracy = true;
                                    if (chara == 1)
                                    {
                                        printf("Cobalt's accuracy was raised by 2 stages\nAccuracy checks will now be more forgiving\n");
                                    }
                                    if (chara == 2)
                                    {
                                        printf("Magenta's accuracy was raised by 2 stages\nAccuracy checks will now be more forgiving\n");
                                    }
                                }
                                else if (player_accuracy == true)
                                {
                                    if (chara == 1)
                                    {
                                        printf("Cobalt's accuracy is already raised\nCobalt's turn was skipped\n");
                                    }
                                    if (chara == 2)
                                    {
                                        printf("Magenta's accuracy is already raised\nMagenta's turn was skipped\n");
                                    }
                                }
                            }
                        }
                        if (chara == 3)
                        {
                            do
                            {
                                printf("\nChoose a spell: 1. moderate healing\t2. increase accuracy\t3. decrease enemy accuracy\t4. sleep spell\n>");
                                scanf_s("%i", &player_spell);
                                fseek(stdin, 0, SEEK_END);
                            } while (player_spell != 1 && player_spell != 2 && player_spell != 3 && player_spell != 4);
                            if (player_spell == 1)
                            {
                                p.hphealed = 0;
                                p.hpmin = 8;
                                p.hpmax = 15;
                                p.hphealed = p.hpmin + rand() % (p.hpmax - p.hpmin + 1);
                                p.hp = p.hp + p.hphealed;
                                if (p.hp > 30)
                                {
                                    p.hp = 30;
                                }
                                printf("Sunflower gained %i hp! Sunflower now has %i hp\n", p.hphealed, p.hp);
                            }
                            else if (player_spell == 2)
                            {
                                if (player_accuracy == false)
                                {
                                    player_accuracy = true;
                                    if (chara == 3)
                                    {
                                        printf("Sunflower's accuracy was raised by 2 stages\nAccuracy checks will now be more forgiving\n");
                                    }                                   
                                }
                                else if (player_accuracy == true)
                                {
                                    if (chara == 3)
                                    {
                                        printf("Sunflower's accuracy is already raised\nSunflower's turn was skipped\n");
                                    }
                                }
                            }
                            else if (player_spell == 3)
                            {
                                if (enemy_accuracy == false)
                                {
                                    enemy_accuracy = true;
                                    printf("The %s's accuracy was lowered by 2 stages\nAccuracy checks will now be more challenging\n", enemy.c_str());                                  
                                }
                                else if (enemy_accuracy == true)
                                {
                                    printf("The %s's accuracy is already lowered\nSunflower's turn was skipped\n", enemy.c_str());
                                }
                            }
                            else if (player_spell == 4)
                            {
                                p.roll = 0 + rand() % (10 - 0 + 1);
                                if (player_accuracy == false)
                                {
                                    if (p.roll >= 6)
                                    {
                                        sleep = true;
                                        printf("Sunflower put the %s to sleep!\n", enemy.c_str());
                                    }
                                    else if (p.roll < 6)
                                    {
                                        sleep = false;
                                        printf("Sunflower tried to put the %s to sleep, but nothing happened!\n", enemy.c_str());
                                    }
                                }
                                if (player_accuracy == true)
                                {
                                    if (p.roll >= 4)
                                    {
                                        sleep = true;
                                        printf("Sunflower put the %s to sleep!\n", enemy.c_str());
                                    }
                                    else if (p.roll < 4)
                                    {
                                        sleep = false;
                                        printf("Sunflower tried to put the %s to sleep, but nothing happened!\n", enemy.c_str());
                                    }
                                }
                            }
                        }
                    }
                    if (item_misc != 2)
                    {
                        if (chara == 3)
                        {
                            do
                            {
                                printf("\nChoose a spell: 1. moderate healing\t2. increase accuracy\t3. decrease enemy accuracy\t4. sleep spell\n>");
                                scanf_s("%i", &player_spell);
                                fseek(stdin, 0, SEEK_END);
                            } while (player_spell != 1 && player_spell != 2 && player_spell != 3 && player_spell != 4);
                            if (player_spell == 1)
                            {

                                p.hphealed = 0;
                                p.hpmin = 8;
                                p.hpmax = 15;
                                p.hphealed = p.hpmin + rand() % (p.hpmax - p.hpmin + 1);
                                p.hp = p.hp + p.hphealed;
                                if (p.hp > 30)
                                {
                                    p.hp = 30;
                                }
                                printf("Sunflower gained %i hp! Sunflower now has %i hp\n", p.hphealed, p.hp);
                            }
                            else if (player_spell == 2)
                            {
                                if (player_accuracy == false)
                                {
                                    player_accuracy = true;
                                    if (chara == 3)
                                    {
                                        printf("Sunflower's accuracy was raised by 2 stages\nAccuracy checks will now be more forgiving\n");
                                    }
                                }
                                else if (player_accuracy == true)
                                {
                                    if (chara == 3)
                                    {
                                        printf("Sunflower's accuracy is already raised\nSunflower's turn was skipped\n");
                                    }
                                }
                            }
                            else if (player_spell == 3)
                            {
                                if (enemy_accuracy == false)
                                {
                                    enemy_accuracy = true;
                                    printf("The %s's accuracy was lowered by 2 stages\nAccuracy checks will now be more challenging\n", enemy.c_str());
                                }
                                else if (enemy_accuracy == true)
                                {
                                    printf("The %s's accuracy is already lowered\nSunflower's turn was skipped\n", enemy.c_str());
                                }
                            }
                            else if (player_spell == 4)
                            {
                                p.roll = 0 + rand() % (10 - 0 + 1);
                                if (player_accuracy == false)
                                {
                                    if (p.roll >= 6)
                                    {
                                        sleep = true;
                                        printf("Sunflower put the %s to sleep!\n", enemy.c_str());
                                    }
                                    else if (p.roll < 6)
                                    {
                                        sleep = false;
                                        printf("Sunflower tried to put the %s to sleep, but nothing happened!\n", enemy.c_str());
                                    }
                                }
                                if (player_accuracy == true)
                                {
                                    if (p.roll >= 4)
                                    {
                                        sleep = true;
                                        printf("Sunflower put the %s to sleep!\n", enemy.c_str());
                                    }
                                    else if (p.roll < 4)
                                    {
                                        sleep = false;
                                        printf("Sunflower tried to put the %s to sleep, but nothing happened!\n", enemy.c_str());
                                    }
                                }
                            }
                        }
                        if (chara == 1)
                        {
                            printf("Cobalt does not have any spells!\nCobalt's turn was skipped\n");
                        }
                        if (chara == 2)
                        {
                            printf("Magenta does not have any spells!\nMagenta's turn was skipped!\n");
                        }
                    }
                }
                else if (player_turn == 4)
                {
                    if (item_misc == 1)
                    {
                        if (potions > 0)
                        {
                            p.hp = 30;
                            if (chara == 1)
                            {
                                printf("\nCobalt used a potion!\nCobalt now has %i hp\n", p.hp);
                            }
                            if (chara == 2)
                            {
                                printf("\nMagenta used a potion!\nMagenta now has %i hp\n", p.hp);
                            }
                            if (chara == 1)
                            {
                                printf("\nSunflower used a potion!\nSunflower now has %i hp\n", p.hp);
                            }
                        }
                        if (potions <= 0)
                        {
                            if (chara == 1)
                            {
                                printf("\nCobalt has no potions left!\nCobalt's turn was skipped\n");
                            }
                            if (chara == 2)
                            {
                                printf("\nMagenta has no potions left!\nMagenta's turn was sipped\n");
                            }
                            if (chara == 3)
                            {
                                printf("\nSunflower has no items remaining!\nSunflower's turn was skipped!\n");
                            }
                        }
                    }
                    if (item_misc == 3)
                    {
                        if (lunchbox > 0)
                        {
                            food = foodmin + rand() % (foodmax - foodmin + 1);
                            if (food == 1) //sandwich
                            {
                                p.hp = 30;
                                if (chara == 1)
                                {
                                    printf("\nCobalt healed fully!\nCobalt now has %i hp\n", p.hp);
                                }
                                if (chara == 2)
                                {
                                    printf("\nMagenta healed fully!\nMagenta now has %i hp\n", p.hp);
                                }
                                if (chara == 3)
                                {
                                    printf("\nSunflower healed fully!\nSunflower now has %i hp\n", p.hp);
                                }
                                food--;
                            }
                            if (food == 2) //fruitcup
                            {
                                p.hphealed = 0;
                                p.hpmin = 5;
                                p.hpmax = 15;
                                p.hphealed = p.hpmin + rand() % (p.hpmax - p.hpmin + 1);
                                p.hp = p.hp + p.hphealed;
                                if (p.hp > 30)
                                {
                                    p.hp = 30;
                                }
                                if (chara == 1)
                                {
                                    printf("\nCobalt gained %i!\nCobalt now has %i hp\n", p.hphealed, p.hp);
                                }
                                if (chara == 2)
                                {
                                    printf("\nMagenta gained %i!\nMagenta now has %i hp\n", p.hphealed, p.hp);
                                }
                                if (chara == 3)
                                {
                                    printf("\nSunflower gained %i!\nSunflower now has %i hp\n", p.hphealed, p.hp);
                                }
                                food--;
                            }
                            if (food == 3) //soda
                            {
                                p.hphealed = 6;
                                p.hp = p.hp + p.hphealed;
                                if (p.hp > 30)
                                {
                                    p.hp = 30;
                                }
                                if (chara == 1)
                                {
                                    printf("\nCobalt gained %i!\nCobalt now has %i hp\n", p.hphealed, p.hp);
                                }
                                if (chara == 2)
                                {
                                    printf("\nMagenta gained %i!\nMagenta now has %i hp\n", p.hphealed, p.hp);
                                }
                                if (chara == 3)
                                {
                                    printf("\nSunflower gained %i!\nSunflower now has %i hp\n", p.hphealed, p.hp);
                                }
                                food--;
                            }
                            if (food == 4) //beef jerkey
                            {
                                p.hphealed = 0;
                                p.hpmin = 10;
                                p.hpmax = 13;
                                p.hphealed = p.hpmin + rand() % (p.hpmax - p.hpmin + 1);
                                p.hp = p.hp + p.hphealed;
                                if (p.hp > 30)
                                {
                                    p.hp = 30;
                                }
                                if (chara == 1)
                                {
                                    printf("\nCobalt gained %i!\nCobalt now has %i hp\n", p.hphealed, p.hp);
                                }
                                if (chara == 2)
                                {
                                    printf("\nMagenta gained %i!\nMagenta now has %i hp\n", p.hphealed, p.hp);
                                }
                                if (chara == 3)
                                {
                                    printf("\nSunflower gained %i!\nSunflower now has %i hp\n", p.hphealed, p.hp);
                                }
                                food--;
                            }
                            if (food == 5) //cake slice
                            {
                                p.hphealed = 0;
                                p.hpmin = 1;
                                p.hpmax = 29;
                                p.hphealed = p.hpmin + rand() % (p.hpmax - p.hpmin + 1);
                                p.hp = p.hp + p.hphealed;
                                if (p.hp > 30)
                                {
                                    p.hp = 30;
                                }
                                if (chara == 1)
                                {
                                    printf("\nCobalt gained %i!\nCobalt now has %i hp\n", p.hphealed, p.hp);
                                }
                                if (chara == 2)
                                {
                                    printf("\nMagenta gained %i!\nMagenta now has %i hp\n", p.hphealed, p.hp);
                                }
                                if (chara == 3)
                                {
                                    printf("\nSunflower gained %i!\nSunflower now has %i hp\n", p.hphealed, p.hp);
                                }
                                food--;
                            }
                        }
                        else if (food <= 0)
                        {
                            if (chara == 1)
                            {
                                printf("Cobalt's lunchbox is empty!\nCobalt's turn was skipped\n");
                            }
                            if (chara == 2)
                            {
                                printf("Magenta's lunchbox is empty!\nMagenta's turn was skipped\n");
                            }
                            if (chara == 3)
                            {
                                printf("Sunflower's lunchbox is empty!\nSunflower's turn was skipped\n");
                            }
                        }
                    }
                }
            }
            else //turn skipped
            {
                if (p.chara == 1) //cobalt
                {
                    printf("\nCobalt's turn was skipped!");
                }
                if (p.chara == 2) //magenta
                {
                    printf("\nMagenta's turn was skipped!");
                }
                if (p.chara == 3) //sunflower
                {
                    printf("\nSunflower's turn was skipped!");
                }
            }
        }

        if (e.hp > 0)
        {
            e.roll = 0 + rand() % (10 - 0 + 1);
            if (e.roll >= 2)
            {
                if (sleep == false)
                {
                    if (enemy_type == 1)
                    {
                        if (chara == 1)
                        {
                            printf("The %s tried to strike Cobalt with their fists!\n", enemy.c_str());
                            e.dpmin = 1;
                            e.dpmax = 3;
                            e.roll = 0 + rand() % (10 - 0 + 1);
                            if (enemy_accuracy == false)
                            {
                                if (e.roll >= 2)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Cobalt lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Cobalt!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }                                    
                                }
                                else if (e.roll < 2)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                            else if (enemy_accuracy == true)
                            {
                                if (e.roll >= 4)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Cobalt lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Cobalt!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 4)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                        }
                        if (chara == 2)
                        {
                            printf("The %s tried to strike Magenta with their fists!\n", enemy.c_str());
                            e.dpmin = 1;
                            e.dpmax = 5;
                            e.roll = 0 + rand() % (10 - 0 + 1);
                            if (enemy_accuracy == false)
                            {
                                if (e.roll >= 2)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Magenta lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Magenta!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 2)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                            else if (enemy_accuracy == true)
                            {
                                if (e.roll >= 4)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Magenta lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Magenta!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 4)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                        }
                        if (chara == 3)
                        {
                            printf("The %s tried to strike Sunflower with their fists!\n", enemy.c_str());
                            e.dpmin = 1;
                            e.dpmax = 5;
                            e.roll = 0 + rand() % (10 - 0 + 1);
                            if (enemy_accuracy == false)
                            {
                                if (e.roll >= 2)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Sunflower lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Sunflower!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 2)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                            else if (enemy_accuracy == true)
                            {
                                if (e.roll >= 4)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Sunflower lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Sunflower!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 4)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                        }
                    }
                    if (enemy_type == 2)
                    {
                        if (chara == 1)
                        {
                            printf("The %s tried to strike Cobalt with their sword!\n", enemy.c_str());
                            e.dpmin = 3;
                            e.dpmax = 6;
                            e.roll = 0 + rand() % (10 - 0 + 1);
                            if (enemy_accuracy == false)
                            {
                                if (e.roll >= 4)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Cobalt lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Cobalt!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 4)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                            else if (enemy_accuracy == true)
                            {
                                if (e.roll >= 6)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Cobalt lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Cobalt!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 6)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                        }
                        if (chara == 2)
                        {
                            printf("The %s tried to strike Magenta with their sword!\n", enemy.c_str());
                            e.dpmin = 4;
                            e.dpmax = 7;
                            e.roll = 0 + rand() % (10 - 0 + 1);
                            if (enemy_accuracy == false)
                            {
                                if (e.roll >= 4)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Magenta lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Magenta!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 4)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                            else if (enemy_accuracy == true)
                            {
                                if (e.roll >= 6)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Magenta lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Magenta!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 6)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                        }
                        if (chara == 3)
                        {
                            printf("The %s tried to strike Sunflower with their sword!\n", enemy.c_str());
                            e.dpmin = 4;
                            e.dpmax = 7;
                            e.roll = 0 + rand() % (10 - 0 + 1);
                            if (enemy_accuracy == false)
                            {
                                if (e.roll >= 4)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Sunflower lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Sunflower!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 4)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                            else if (enemy_accuracy == true)
                            {
                                if (e.roll >= 6)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Sunflower lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Sunflower!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 6)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                        }
                    }
                    if (enemy_type == 3)
                    {
                        if (chara == 1)
                        {
                            printf("The %s tried to strike Cobalt with their club!\n", enemy.c_str());
                            e.dpmin = 5;
                            e.dpmax = 9;
                            e.roll = 0 + rand() % (10 - 0 + 1);
                            if (enemy_accuracy == false)
                            {
                                if (e.roll >= 6)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Cobalt lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Cobalt!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 6)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                            else if (enemy_accuracy == true)
                            {
                                if (e.roll >= 8)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Cobalt lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Cobalt!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 8)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                        }
                        if (chara == 2)
                        {
                            printf("The %s tried to strike Magenta with their club!\n", enemy.c_str());
                            e.dpmin = 6;
                            e.dpmax = 10;
                            e.roll = 0 + rand() % (10 - 0 + 1);
                            if (enemy_accuracy == false)
                            {
                                if (e.roll >= 6)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Magenta lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Magenta!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 6)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                            else if (enemy_accuracy == true)
                            {
                                if (e.roll >= 8)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Magenta lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Magenta!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 8)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                        }
                        if (chara == 3)
                        {
                            printf("The %s tried to strike Sunflower with their club!\n", enemy.c_str());
                            e.dpmin = 6;
                            e.dpmax = 10;
                            e.roll = 0 + rand() % (10 - 0 + 1);
                            if (enemy_accuracy == false)
                            {
                                if (e.roll >= 6)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Sunflower lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Sunflower!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 6)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                            else if (enemy_accuracy == true)
                            {
                                if (e.roll >= 8)
                                {
                                    e.dp = e.dpmin + rand() % (e.dpmax - e.dpmin + 1);
                                    p.hp = p.hp - e.dp;
                                    printf("Sunflower lost %i hp!\n", e.dp);
                                    if (p.hp <= 0)
                                    {
                                        printf("The %s defeated Sunflower!\n\n", enemy.c_str());
                                        _getch();
                                        printf("GGGGGGGG    AAAA    M      M  EEEEEEEE\n");
                                        printf("G          A    A   MM    MM  E\n");
                                        printf("G         A      A  M M  M M  EEEEEEEE\n");
                                        printf("G   GGGG  AAAAAAAA  M  MM  M  E\n");
                                        printf("G      G  A      A  M      M  E\n");
                                        printf("GGGGGGGG  A      A  M      M  EEEEEEEE\n\n");
                                        printf("OOOOOOOO  V      V  EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O  V      V  E         R      R\n");
                                        printf("O      O   V    V   EEEEEEEE  RRRRRRRR\n");
                                        printf("O      O   V    V   E         R     R\n");
                                        printf("O      O    V  V    E         R      R\n");
                                        printf("OOOOOOOO     V      EEEEEEEE  R      R\n");
                                        _getch();
                                    }
                                }
                                else if (e.roll < 8)
                                {
                                    printf("The %s missed!\n", enemy.c_str());
                                }
                            }
                        }
                    }
                }
                else if (sleep == true)
                {
                    e.roll = 0 + rand() % (10 - 0 + 1);
                    if (enemy_accuracy == false)
                    {
                        if (e.roll >= 6)
                        {
                            printf("The %s woke up!\n", enemy.c_str());
                            sleep = false;
                        }
                        else if (e.roll < 6)
                        {
                            printf("The %s tried to wake up, but failed!\n", enemy.c_str());
                        }
                    }
                    else if (enemy_accuracy == true)
                    {
                        if (e.roll >= 8)
                        {
                            printf("The %s woke up!\n", enemy.c_str());
                            sleep = false;
                        }
                        else if (e.roll < 8)
                        {
                            printf("The %s tried to wake up, but failed!\n", enemy.c_str());
                        }
                    }
                }
            }
            else //turn skipped
            {
                printf("\nThe %s's turn was skipped!\n", enemy.c_str());

            }
        }
    } 

    printf("The battle ended\n");

    return p;
}

void savedata(Player p, string user, int chara, int item_weapon, int item_misc, int potions, int lunchbox, int room) //allows the user to save the game after enemy encounters
{
    ofstream out("savestate.txt");
    out << p.chara << ',' << user << ',' << item_weapon << ',' << item_misc << ',' << potions << ',' << lunchbox << ',' << room << '\n';
    out.close();
}

//room1
int ultramarine(int room, int chara, bool& win) //room 1
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
//room2         enemy encounter
int canary(int room, string user, char savechoice, Player e) //room 2
{
    int choice;
    printf("You are now on Canary Yellow Island\n");
    printf("You travelled by boat to reach a warm beach, with banana trees and canaries in the center.\n");
    printf("To the West is Ultramarine and to the south is Sunset Observatory.\n");

    printf("You hear rustling in the foliage\n");
    _getch();
    printf("An enemy jumps out!\n");
    e[0].interaction(p);
    //add variable for if enemy has been encountered yet and include that in saved data

    printf("Save %s's data? y for yes, else for no\n>", user.c_str());
    scanf_s("%c", &savechoice);
    fseek(stdin, 0, SEEK_END);
    if (savechoice == 'y')
    {
        void savedata(Player p, string user, int chara, int item_weapon, int item_misc, int potions, int lunchbox, int room);
        printf("\n%s's data has been saved\n", user.c_str());
    }

    printf("\n1. Go to Ultramarine\n2. Go to Sunset Observatory\n");
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
//room3         enemy encounter
int violetblue(int room, string user, char savechoice, Player e) //room 3 ENEMY ENCOUNTER IN PROGRESS; add bool for if encountered
{
    int choice;
    printf("You are now in Violet Blue Town \n");
    printf("It's a sleepy town of stargazers and birdwatchers.\nThe sky is entirely lit up with stars.\n");
    printf("To the South is Violet District.\nYou've reached a dead end.\n");

    printf("You hear something approach you from behind\n");
    _getch();
    printf("You spin around and see an enemy!\n");
    e[1].interaction(p);

    printf("Save %s's data? y for yes, else for no\n>", user.c_str());
    scanf_s("%c", &savechoice);
    fseek(stdin, 0, SEEK_END);
    if (savechoice == 'y')
    {
        void savedata(Player p, string user, int chara, int item_weapon, int item_misc, int potions, int lunchbox, int room);
        printf("\n%s's data has been saved\n", user.c_str());
    }

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
//room4         item
int westgolden(int room, vector<Merchant> npc_m, Player p, int chara) //room 4
{
    int choice;
    printf("You are now in West Goldenrod\n");
    printf("It's a small residential district of greater Goldenrod.\nThere isn't much to see here.\n");
    printf("To the East is Goldenrod and to the South is Silver Quarry.\n");

    if (chara == 1)
    {
        printf("Cobalt sees someone off in the distance, standing next to a food display\n");
    }
    else if (chara == 2)
    {
        printf("Magenta sees someone off in the distance, standing next to a food display\n");
    }
    else if (chara == 3)
    {
        printf("Sunflower sees someone off in the distance, standing next to a food display\n");
    }
    npc_m[0].interaction(p);

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
//room6         item
int maroon(int room, vector<Merchant> npc_m, Player p, int chara) //room 6
{
    int choice;
    printf("You are now in Maroon Town\n");
    printf("It's a small, laid back town.\nThere are item kiosks here.\n");

    if (chara == 1)
    {
        printf("Cobalt sees someone off in the distance, standing next to one of the kiosks\n");
    }
    else if (chara == 2)
    {
        printf("Magenta sees someone off in the distance, standing next to one of the kiosks\n");
    }
    else if (chara == 3)
    {
        printf("Sunflower sees someone off in the distance, standing next to one of the kiosks\n");
    }
    npc_m[1].interaction(p);

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
//room8         item
int violet(int room, vector<Merchant> npc_m, Player p, int chara) //room 8
{
    int choice;
    printf("You are now in Violet District\n");
    printf("It's a crowded neighborhood on the outskirts of Goldenrod\nEverywhere around you are people travelling to places.\n");
    printf("To the North is Violet Blue Town and to the South is Midnight Blue Town.\n");

    if (chara == 1)
    {
        printf("Cobalt sees someone among the crowd, standing in under a hooded wall of a building\n");
    }
    else if (chara == 2)
    {
        printf("Magenta sees someone among the crowd, standing in under a hooded wall of a building\n");
    }
    else if (chara == 3)
    {
        printf("Sunflower sees someone among the crowd, standing in under a hooded wall of a building\n");
    }
    npc_m[2].interaction(p);

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
//room9         enemy encounter
int silver(int room, string user, char savechoice, Player e) //room 9
{
    int choice;
    printf("You are now in Silver Quarry\n");
    printf("Shimmering, clear water flows throug small canyons and tunnels.\n");
    printf("To the North is West Goldenrod.\nYou've reached a dead end.\n");

    printf("You hear something struggling to swim to you\n");
    _getch();
    printf("An enemy jumps out of the water! You pity their poor swimming skills and decide to fight them\n");
    e[2].interaction(p);

    printf("Save %s's data? y for yes, else for no\n>", user.c_str());
    scanf_s("%c", &savechoice);
    fseek(stdin, 0, SEEK_END);
    if (savechoice == 'y')
    {
        void savedata(Player p, string user, int chara, int item_weapon, int item_misc, int potions, int lunchbox, int room);
        printf("\n%s's data has been saved\n", user.c_str());
    }

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
//room10        enemy encounter
int viridian(int room, string user, char savechoice, Player e) //room 10
{
    int choice;
    printf("You are now in Viridian Forest\n");
    printf("The woods are thick and dim. Patches of sunlight shine through the canopy.\n");
    printf("To the North is Goldenrod and to the South is Carrot Meadow.\n");

    printf("You hear something jump out of a tree\n");
    _getch();
    printf("An enemy lands in front of you!\n");
    e[3].interaction(p);

    printf("Save %s's data? y for yes, else for no\n>", user.c_str());
    scanf_s("%c", &savechoice);
    fseek(stdin, 0, SEEK_END);
    if (savechoice == 'y')
    {
        void savedata(Player p, string user, int chara, int item_weapon, int item_misc, int potions, int lunchbox, int room);
        printf("\n%s's data has been saved\n", user.c_str());
    }

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
//room11        enemy encounter
int fluorescent(int room, string user, char savechoice, Player e) //room 11
{
    int choice;
    printf("You are now in Fluorescent Marsh\n");
    printf("Colorful plants stick out of the bright blue mud.\nThere are a few paths of wet grass that look well-traversed.\n");
    printf("To the North is Maroon Town and to the South is Pumpkin Patch.\n");

    printf("You hear something sloshing through the deep mud\n");
    _getch();
    printf("An enemy slowly approaches!\n");
    e[4].interaction(p);

    printf("Save %s's data? y for yes, else for no\n>", user.c_str());
    scanf_s("%c", &savechoice);
    fseek(stdin, 0, SEEK_END);
    if (savechoice == 'y')
    {
        void savedata(Player p, string user, int chara, int item_weapon, int item_misc, int potions, int lunchbox, int room);
        printf("\n%s's data has been saved\n", user.c_str());
    }

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
//room12        enemy encounter
int rust(int room, string user, char savechoice, Player e) //room 12
{
    int choice;
    printf("You are now in Rust Laboratory\n");
    printf("It's an old laboratory full of scary machinery and sinister-looking blueprints.\n");
    printf("To the North is Sunset Observatory and to the East is Midnight Blue Town.\n");

    printf("You hear shoes against the old, metal floor\n");
    _getch();
    printf("An enemy loudly jumps in front of you!\n");
    e[5].interaction(p);

    printf("Save %s's data? y for yes, else for no\n>", user.c_str());
    scanf_s("%c", &savechoice);
    fseek(stdin, 0, SEEK_END);
    if (savechoice == 'y')
    {
        void savedata(Player p, string user, int chara, int item_weapon, int item_misc, int potions, int lunchbox, int room);
        printf("\n%s's data has been saved\n", user.c_str());
    }

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
//room13        enemy encounter
int midnightblue(int room, string user, char savechoice, Player e) //room 13
{
    int choice;
    printf("You are now in Midnight Blue Town\n");
    printf("It's a dodgy, dark town without any stars in the sky.\nIt’s always night here.\n");
    printf("To the North is Violet Distrtict, to the East is Rainbow Bazaar, and to the West is Rust Laboratory.\n");

    printf("Out of the corner of your eye, you notice something in the shadows\n");
    _getch();
    printf("A lurking enemy tries to sneak up on you!\n");
    e[6].interaction(p);

    printf("Save %s's data? y for yes, else for no\n>", user.c_str());
    scanf_s("%c", &savechoice);
    fseek(stdin, 0, SEEK_END);
    if (savechoice == 'y')
    {
        void savedata(Player p, string user, int chara, int item_weapon, int item_misc, int potions, int lunchbox, int room);
        printf("\n%s's data has been saved\n", user.c_str());
    }

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
//room14        item
int rainbow(int room, vector<Merchant> npc_m, Player p, int chara) //room 14
{
    int choice;
    printf("You are now in Rainbow Bazaar.\n");
    printf("Dozens of colorful tents surround you, stocked with many items.\n");

    if (chara == 1)
    {
        printf("Cobalt sees someone in a purple tent, directly in front of her. They're waering the purple robes of a royal castletown guard.\n");
    }
    else if (chara == 2)
    {
        printf("Magenta sees someone in a purple tent, directly in front of him. They're waering the purple robes of a royal castletown guard.\n");
    }
    else if (chara == 3)
    {
        printf("Sunflower sees someone in a purple tent, directly in front of her. They're waering the purple robes of a royal castletown guard.\n");
    }
    npc_m[3].interaction(p);

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
//room15        item
int carrot(int room, vector<Merchant> npc_m, Player p, int chara) //room 15
{
    int choice;
    printf("You are now in Carrot Meadow.\n");
    printf("There are a few farmers around the dirt field who are harvesting the thousands of carrots.\nThere's not much to see otherwise.\n");
    printf("To the North is Viridian Forest and to the West is Rainbow Bazaar.\n");

    if (chara == 1)
    {
        printf("Cobalt sees someone in a farm stand, with crates filled to the brim with farm-to-table treats\n");
    }
    else if (chara == 2)
    {
        printf("Magenta sees someone in a farm stand, with crates filled to the brim with farm-to-table treats\n");
    }
    else if (chara == 3)
    {
        printf("Sunflower sees someone in a farm stand, with crates filled to the brim with farm-to-table treats\n");
    }
    npc_m[4].interaction(p);

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

    //choose 1 free item

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
//room18        enemy encounter
int rouge(int room, string user, char savechoice, Player e) //room 18
{
    int choice;
    printf("You are now in Rouge Pass.\n");
    printf("It's a long, wide path lined with trees.\nThe leaves resemble the beautiful colors of autumn.\n");
    printf("To the East is Sienna Village, to the South is Purple Mountains Majesty, and to the West is Olive Vineyard.\n");

    printf("You hear rustling in the leaves\n");
    _getch();
    printf("An enemy jumps out of a red leaf pile!\n");
    e[7].interaction(p);

    printf("Save %s's data? y for yes, else for no\n>", user.c_str());
    scanf_s("%c", &savechoice);
    fseek(stdin, 0, SEEK_END);
    if (savechoice == 'y')
    {
        void savedata(Player p, string user, int chara, int item_weapon, int item_misc, int potions, int lunchbox, int room);
        printf("\n%s's data has been saved\n", user.c_str());
    }

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
//room19        enemy encounter
int sienna(int room, string user, char savechoice, Player e) //room 19
{
    int choice;
    printf("You are now in Sienna Village.\n");
    printf("Log buildings surround a small village square.\nPeople sit around a bonfire playing folk songs.\n");
    printf("To the North is Rainbow Bazaar, to the East is Cream Factory, to the South is Fuschia Village, and to the West is Rouge Pass.\n");

    printf("Someone by the fire turns and walks toward you\n");
    _getch();
    printf("An enemy stands in your way!\n");
    e[8].interaction(p);

    printf("Save %s's data? y for yes, else for no\n>", user.c_str());
    scanf_s("%c", &savechoice);
    fseek(stdin, 0, SEEK_END);
    if (savechoice == 'y')
    {
        void savedata(Player p, string user, int chara, int item_weapon, int item_misc, int potions, int lunchbox, int room);
        printf("\n%s's data has been saved\n", user.c_str());
    }

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
//room22        item
int royalcastletown(int room, vector<Merchant> npc_m, Player p, int chara) //room 22
{
    int choice;
    printf("You are now in Royal Purple Castletown.\n");
    printf("It's a small town built from stone bricks.\nFamily-owned item shops line the street,next to pubs and apartments.\n");
    printf("Someone in a tunic and boots motions for you to come over.\nHe says he has heard of your good deeds and wants to offer you a free item from his shop.\n");

    if (chara == 1)
    {
        printf("Cobalt sees someone outside a pub, with a small shop settled into a small alcove\n");
    }
    else if (chara == 2)
    {
        printf("Magenta sees someone outside a pub, with a small shop settled into a small alcove\n");
    }
    else if (chara == 3)
    {
        printf("Sunflower sees someone outside a pub, with a small shop settled into a small alcove\n");
    }
    npc_m[5].interaction(p);

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
//room24        enemy encounter
int fuschia(int room, string user, char savechoice, Player e) //room 24
{
    int choice;
    printf("You are now in Fuschia Village.\n");
    printf("There are red tents spread throughout the pink grass.\nA rose-colored river flows through the center of the village.\n");
    printf("To the North is Sienna Village, to the East is Rose Village, and to the West is Purple Mountains Majesty.\n");

    printf("You hear a tent flap opening\n");
    _getch();
    printf("You turn around and see an emeny!\n");
    e[9].interaction(p);

    printf("Save %s's data? y for yes, else for no\n>", user.c_str());
    scanf_s("%c", &savechoice);
    fseek(stdin, 0, SEEK_END);
    if (savechoice == 'y')
    {
        void savedata(Player p, string user, int chara, int item_weapon, int item_misc, int potions, int lunchbox, int room);
        printf("\n%s's data has been saved\n", user.c_str());
    }

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
int rose(int room, int chara, bool& win) //room 25
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
    Player e;
    
    vector<Player> npc_e; //something with this needs to be fixed
    for (int e = 0; e < 9; e++) //currently 7 enemies, check this later
    {
        Player temp_e;
        npc_e.push_back(temp_e);
    }    
    vector<Merchant> npc_m;
    for (int m = 0; m < 5; m++) //merchants heal the player; currently 6 merchants, check this later (probably 4 around the path, 2 outside the path)
    {
        Merchant temp_m;
        npc_m.push_back(temp_m);
    }

    npc_m[0].interaction(p);

    string user;
    int menu_choice;
    int item_type;
    int item_weapon = 0;
    int item_misc = 0;
    int items = 0;
    int potions = 0;
    int lunchbox = 0;
    int food;

    char savechoice;
    int room = 0;
    int score = 0;
    int choice;
    bool win = false;

    //p = combat(p, npc_e[0], p.chara, item_weapon, item_misc, potions, p.lunchbox, food);

    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("Welcome to Crayonland!\n");
    printf("Created by Halle Carlson\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    _getch();

    bool newgame;
    int savestateinput;
    do
    {
        printf("Would you like to 1. begin a new game, or 2. continue from a previous save state?\n>");
        scanf_s("%i", &savestateinput);
        fseek(stdin, 0, SEEK_END);
    } while(savestateinput != 1 && savestateinput != 2);
    if (savestateinput = 1) //will begin a new game
    {
        newgame = true;
    }
    else if (savestateinput = 2) //will begin game from previous save data
    {
        newgame = false;
    }

    string temp;
    while (newgame == false) //file retrieval 
    {
        ifstream in;
        in.open("savestate.txt");

        if (!in.is_open())
        {
            printf("Save data not found...\n");
            _getch();
            newgame = true;
            return newgame; //check if this works
        }
        else
        {
            getline(in, temp, ',');
            p.chara = stoi(temp);
            getline(in, temp, ',');
            user = temp;
            getline(in, temp, ',');
            item_weapon = stoi(temp);
            getline(in, temp, ',');
            item_misc = stoi(temp);
            getline(in, temp, ',');
            potions = stoi(temp);
            getline(in, temp, ',');
            lunchbox = stoi(temp);
            getline(in, temp, ',');
            room = stoi(temp);
        }
    }

    while (newgame == true)
    {
        printf("Please enter your name\n>");        
        cin >> user;
        fseek(stdin, 0, SEEK_END);

        printf("%s, it is recommended that you create a map as you play.\n", user.c_str());
        printf("The world in the game looks like the following:\n");
        printf(" _______ _______ _______ _______ _______\n");
        printf("|  start|      2|      3|      4|  start|\n");
        printf("|  point|       |       |       |  point|\n");
        printf("|_______|_______|_______|_______|_______|\n");
        printf("|      6|      7|      8|      9|     10|\n");
        printf("|       |       |       |       |       |\n");
        printf("|_______|_______|_______|_______|_______|\n");
        printf("|     11|     12|     13|     14|     15|\n");
        printf("|       |       |       |       |       |\n");
        printf("|_______|_______|_______|_______|_______|\n");
        printf("|     16|     17|     18|     19|     20|\n");
        printf("|       |       |       |       |       |\n");
        printf("|_______|_______|_______|_______|_______|\n");
        printf("|     21|     22|     23|     24|  start|\n");
        printf("|       |       |       |       |  point|\n");
        printf("|_______|_______|_______|_______|_______|\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        _getch();

        printf("The game follows three different paths depending on which of three characters you choose: Cobalt, Magenta, or Sunflower\n");
        printf("You must traverse the kingdom and help your selected character find their homeland\n");
        printf("On the way, you will encounter allies who will help you, and enemies who will block your path\n");
        printf("Good luck! (And remember to have fun\n");

        do //menu loop
        {
            system("cls");
            printf("------------------------------------------------------------------------------------------------------------------------\n");
            printf("Welcome to Crayonland!\n");
            printf("Created by Halle Carlson\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n");

            printf("User: %s\n", user.c_str());
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
                printf("%s has not selected a character\n", user.c_str());
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
                printf("%s has not selected a weapon\n", user.c_str());
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
                printf("%s has not selected an item\n", user.c_str());
            }
            printf("Score: %i\n", score);

            printf("\nMenu\n");
            printf("----\n");

            printf("1. Select %s's Character\n", user.c_str());
            printf("2. Equip %s's character\n", user.c_str());
            printf("3. Begin %s's game\n", user.c_str());
            printf(">");
            scanf_s("%i", &menu_choice);
            fseek(stdin, 0, SEEK_END);

            if (menu_choice == 1) //select character
            {
                printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
                if (p.chara == 1 || p.chara == 2 || p.chara == 3)
                {
                    printf("A character has already been selected, %s!\n", user.c_str());
                }
                else if (p.chara != 1 || p.chara != 2 || p.chara != 3)
                {
                    printf("Characters may use a multitude of battle actions and each character specializes in one stat/action\n");

                    printf("Select Character:\n\n");
                    printf("1. Cobalt\n");
                    printf("\t\tbase\n");
                    printf("\t\t----\n\n");
                    printf("\t\tspell:  minor healing (self)\n");
                    printf("\t\tattack: strike\n");
                    printf("\t\tdefense specialty\n\n");
                    printf("2. Magenta\n");
                    printf("\t\tbase\n");
                    printf("\t\t----\n\n");
                    printf("\t\tattack: strike\n");
                    printf("\t\tattack: thrash\n");
                    printf("\t\tphysical attack specialty\n\n");
                    printf("3. Sunflower\n");
                    printf("\t\tbase\n");
                    printf("\t\t----\n\n");
                    printf("\t\tattack: strike\n");
                    printf("\t\tspell:  moderate healing\n");
                    printf("\t\tspell:  sleep spell (enemy)\n");
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

                        p.hpmax = 30;
                        p.hpmin = 20;
                        p.hp;

                        p.hp = p.hpmin + rand() % (p.hpmax - p.hpmin + 1); //player hit points [20, 30] / 30 max

                        printf("[hp] ---> %i / %i\n", p.hp, p.hpmax); //starting hp / 30 max
                    }
                    else if (p.chara == 2) //Magenta
                    {
                        p.chara = 2;
                        printf("\n\nSelected: Magenta\n\n");

                        int p.hpmax = 30;
                        int p.hpmin = 20;
                        int p.hp;

                        p.hp = p.hpmin + rand() % (p.hpmax - p.hpmin + 1); //player hit points [20, 30] / 30 max

                        printf("[hp] ---> %i / %i\n", p.hp, p.hpmax); //starting hp / 30 max
                    }
                    else if (p.chara == 3) //Sunflower
                    {
                        p.chara = 3;
                        printf("\n\nSelected: Sunflower\n\n");

                        int p.hpmax = 30;
                        int p.hpmin = 20;
                        int p.hp;

                        p.hp = p.hpmin + rand() % (p.hpmax - p.hpmin + 1); //player hit points [20, 30] / 30 max

                        printf("[hp] ---> %i / %i\n", p.hp, p.hpmax); //starting hp / 30 max
                    }
                }
                printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
                printf("Begin %s's game? // 3 for yes, any other key to return to the menu\n", user.c_str());

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
                        printf("A weapon has already been selected, %s!\n", user.c_str());
                    }
                    else if (item_weapon != 1 || item_weapon != 2 || item_weapon != 3)
                    {
                        printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
                        printf("Characters may select from the following three weapons, each of which has a damage and accuracy range balanced differently\n");

                        printf("Weapon select:\n");
                        printf("1. Longsword\n");
                        printf("\t\tDeals high damage, low accuracy\n");
                        printf("2. Shortsword\n");
                        printf("\t\tDeals low-medium damage, never misses\n");
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
                    printf("Begin %s's game? // 3 for yes, any other key to return to the menu\n", user.c_str());

                    printf(">");
                    scanf_s("%i", &menu_choice);
                    fseek(stdin, 0, SEEK_END);
                }
                if (item_type == 2)
                {
                    printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
                    if (item_misc == 1 || item_misc == 2 || item_misc == 3)
                    {
                        printf("An item has already been selected, %s!\n", user.c_str());
                    }
                    else if (item_misc != 1 || item_misc != 2 || item_misc != 3)
                    {
                        printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
                        printf("Characters may choose from the following three miscellaneous items, each of which has a unique use in battle\n");

                        printf("Item select:\n");
                        printf("1. 3 potions of full healing\n");
                        printf("\t\tMay be used to heal self by a fixed amount\n");
                        printf("2. Spellbook\n");
                        printf("\t\tAllows your selected character to use spells they do not normally have access to (useless to Sunflower)\n");
                        printf("3. Full lunchbox\n");
                        printf("\t\tContains various food items that may be used to heal self by a random amount (Your character will have an empty lunchbox if you do not select this item)\n");

                        printf(">");
                        scanf_s("%i", &item_misc);
                        fseek(stdin, 0, SEEK_END);

                        if (item_misc == 1) //potions
                        {
                            item_misc = 1;
                            items++;
                            printf("\n\nSelected: healing potions\n\n");
                            potions = 3;
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
                            lunchbox = 5;
                        }
                    }
                    printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
                    printf("Begin %s's game? // 3 for yes, any other key to return to the menu\n", user.c_str());

                    printf(">");
                    scanf_s("%i", &menu_choice);
                    fseek(stdin, 0, SEEK_END);
                }
            }

        } while (menu_choice != 3);
        break;
    }

    bool start = true;
    do
    {
        if (newgame == true)
        {
            if (p.chara == 1 && start)
            {
                room = rose(room, p.chara, win);
                start = false;
            }
            else if (p.chara == 2 && start)
            {
                room = goldenrod(room, p.chara, win);
                start = false;
            }
            else if (p.chara == 3 && start)
            {
                room = ultramarine(room, p.chara, win);
                start = false;
            }
        }


        if (room == 1)
        {
            room = ultramarine(room, p.chara, win);
        }
        else if (room == 2)
        {
            room = canary(room, user, savechoice, e);
        }
        else if (room == 3)
        {
            room = violetblue(room, user, savechoice, e);
        }
        else if (room == 4)
        {
            room = westgolden(room, npc_m, p, p.chara);
        }
        else if (room == 5)
        {
            room = goldenrod(room, p.chara, win);
        }
        else if (room == 6)
        {
            room = maroon(room, npc_m, p, p.chara);
        }
        else if (room == 7)
        {
            room = sunset(room);
        }
        else if (room == 8)
        {
            room = violet(room, npc_m, p, p.chara);
        }
        else if (room == 9)
        {
            room = silver(room, user, savechoice, e);
        }
        else if (room == 10)
        {
            room = viridian(room, user, savechoice, e);
        }
        else if (room == 11)
        {
            room = fluorescent(room, user, savechoice, e);
        }
        else if (room == 12)
        {
            room = rust(room, user, savechoice, e);
        }
        if (room == 13)
        {
            room = midnightblue(room, user, savechoice, e);
        }
        else if (room == 14)
        {
            room = rainbow(room, npc_m, p, p.chara);
        }
        else if (room == 15)
        {
            room = carrot(room, npc_m, p, p.chara);
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
            room = rouge(room, user, savechoice, e);
        }
        else if (room == 19)
        {
            room = sienna(room, user, savechoice, e);
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
            room = royalcastletown(room, npc_m, p, p.chara);
        }
        else if (room == 23)
        {
            room = purplemountains(room);
        }
        else if (room == 24)
        {
            room = fuschia(room, user, savechoice, e);
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