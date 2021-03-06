// RPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*  
    Author:         Halle Carlson
    Projet Name:    RPG Instructions
    File Name:      RPG.cpp
    Purpose:        Output a series of insructions for my RPG. Generate random starting hp and assign damage range for the player.
    
    Pseudocode:     The code outputs a series of text including instructions and commands for my RPG, notes about 
                    what has and hasn't been added to the code, and narration that sets the scene for the beginning of the story.
                    Before the story begins, the user is asked to input their name. The program generated a random value for the player's 
                    hit points (20-30 / 30 max), and then outputs the player name, random starting hp, and damage point range (0-10).
    
    Maintenance Log:
    Date: 9/20/21   Done:
                    Began project
                    Added code to output text
                    Pushed to GitHub

    Date: 9/21/21   Done:
                    Added code to output text
                    Added code to format text so that it prints more neatly in the debug window and so that the 
                    player can press a key to print parts of dialogue one at a time
                    Tested the program as I added code to fix errors as they came
                    Pushed to GitHub

    Date: 9/22/21   Done:
                    Added pseudocode and comments
                    Pushed to GitHub

    Date: 9/24/21   Done:
                    Updated pseudodoce and comments
                    Pushed to GitHub

    Date: 10/19/21  Done:
                    Added code
                    Pushed to GitHub

    Date: 10/20/21  Done:
                    Added code to allow player to input their name
                    Added code to output random player hit points and damage points within a range
                    Fixed errors
                    Added comments
                    Formatted code
                    Pushed to GitHub

    Date: 10/22/21  Done:
                    Changed code addressing the player to output the player's name instead of "you"
                    Changed output message grammar
                    Formatted code and comments
                    Updated comments and pseudocode

    Date: 11/1/21   Done:
                    Fixed errors
                    Fixed output formatting
                    Updated comments
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
    //srand(0);
    srand((unsigned)time(NULL));
    
    std::cout << "Welcome to Nightmareland!\n";
    printf("an RPG (in progress) created by Halle Carlson\n\n");
    printf("the following commands are placeholders and have not been added to the code yet.\n\n");
    printf("[c] -------------> open your inventory\n");
    printf("[x] -------------> observe/interact with something in your sight / learn more about an item in your inventory\n");
    printf("[z] -------------> stop observing/interacting with something in your sight / unselect an item in your inventory\n");
    printf("[spacebar] ------> scroll through text\n");
    printf("[number keys] ---> select specified commands\n");
    printf("[hp] ------------> current hit points\n");
    printf("[dp] ------------> damage points dealt per hit\n\n");
    _getch();
    
    printf("the are a few instances in this code where the player is prompted to enter a command, including using the spacebar to scroll through text. ");
    printf("these are placeholders and you can press any key to move on. in instances where there are multiple options for commands, all options will print out ");
    printf("in the debug window in order.\n\n");
    _getch();

    printf("who are you? (input player name)");
    string player_name;
    cin >> player_name;
    fseek(stdin, 0, SEEK_END);
    
    printf("> %s... ", player_name.c_str());
    _getch();
    printf("that's right\n\n");
    _getch();

    int player_hp_max = 30;
    int player_hp_min = 20;
    int player_hp;

    int player_dp_max = 10;
    int player_dp_min = 0;
    int player_dp;

    player_hp = player_hp_min + rand() % (player_hp_max - player_hp_min + 1);   //player hit points [20, 30] / 30 max

    printf("[player] --> %s\n", player_name.c_str());
    printf("[hp] ------> %i / %i\n", player_hp, player_hp_max);                 //starting hp / 30 max
    printf("[dp] ------> %i - %i\n", player_dp_min, player_dp_max);             //0-10 dp
 
    printf("> %s found themself in a mysterious, greyscale landscape.\n", player_name.c_str());
    printf("> they were unsure whether they were dreaming or awake.\n");
    printf("> what will %s do now?\n\n", player_name.c_str());
    _getch();

    printf("[option 1]\n");
    printf("> %s took a look around.\n\n", player_name.c_str());
    _getch();
    printf("> there was no color in this world. the landscape was painted in every shade of grey imaginable.\n");
    printf("perhaps color once belonged here, %s thought... or will belong here.\n", player_name.c_str());
    _getch();
    printf("> it looked almost as if the scenery was imcomplete, like everything was in progess; stuck between existing and not existing.\n");
    _getch();
    printf("> %s didn't see any black or white...\n", player_name.c_str());
    _getch();
    printf("> they weren't sure what to think of that.");
    _getch();
    printf("> %s didn't recognize any of their surroundings, yet this all felt so familiar to them...\n\n", player_name.c_str());
    _getch();
    printf("[%s pressed x key]\n", player_name.c_str());
    printf("> %s took a closer look.\n\n", player_name.c_str());
    printf("> %s stood in a vast valley.\n", player_name.c_str());
    _getch();
    printf("> the ground was covered in wheat, which had grown to their waist. it appeared to cover most of the valley.\n");
    _getch();
    printf("> the valley rested at the bottom of a mountain range.\n");
    _getch();
    printf("> the mountains weren't particularly tall, but they were covered with a blanket of snow.\n");
    _getch();
    printf("> it wasn't just the peaks, either. the snow covered nearly all of the mountains themselves.\n");
    _getch();
    printf("> the mountains encircled %s from nearly every direction, except for behind them.\n", player_name.c_str());
    _getch();
    printf("> about 100 yards behind %s was a beach, littered with felled trees, pale and dry from the passage of time.\n", player_name.c_str());
    _getch();
    printf("> another 100 yards down was the ocean, which appeared to extend forever, ignoring the curvature of the earth.\n");
    _getch();
    printf("> it seemed %s had no choice but to find a way past the mountains.\n", player_name.c_str());
    _getch();    

    return 0;
}


