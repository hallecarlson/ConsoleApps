// Non-looping Maze.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS03-06 (Non-looping Maze)
    File Name:      Non-looping Maze.cpp
    Purpose:        Create a maze based on the picture provided in goal sheet 3, but without a GUI. Give the user 
                    choices at each juncture. Once the player goes through a door, it shuts behind them and they cannot 
                    go back. Use nested branching. There are three+ levels of nesting. The user must be able to take each 
                    to the very end, even if it leads to a dead end.

    Pseudocode:     The program asks the player to input their name. An explanation of the maze game is given. The program first asks the player
                    where they want to go from room 1 (room 2 or room 4), then, the paths can branch from there. The doors close behind the player
                    and they cannot go back, creating more dead ends on top of the dead ends that already exist. There are only 2 paths that lead
                    to success: 1->2->5->4->7->8->9 and 1->4->7->8->9. When the player reaches the end (room 9) or a dead end, an ASCII art end 
                    screen message is printed. There are 8 possible outcomes total.

    Maintenance Log:
    Date: 11/2/21   Done:
                    Created project
                    Added comments
                    Added code for intro, narration, and branching
                    Pushed to GitHub

    Date: 11/3/21   Done
                    Added comments to outline project
                    Added comments to map possible paths through the maze
                    Added code to outline project
                    Formatted code
                    Updated code
                    Pushed to GitHub

    
    Date: 11/5/21   Done:
                    Added code for different paths through the maze
                    Added comments to explain paths in the code
                    Added code for narration
                    Added code to format output
                    Formatted code and comments
                    Pushed to GitHub
                    
                    Pulled from GitHub
                    Fixed unfinished maintenance log for 11/3 due to keyboard issue
                    Added code
                    Updated code
                    Added ASCII art for end messages
                    Formatted code and comments
                    Fixed errors
                    Pushed to GitHub

    Date: 11/8/21   Done:
                    Added code and comments
                    Updated code and commens
                    Formatted everything
                    Completed ASCII art end messages
                    Pushed to GitHub
                    
    Date: 11/9/21   Done:
                    Formatted code and comments
                    Formatted output
                    Edited code and comments
                    Added code for consistency
                    Added code to complete all paths
                    Tested all paths
                    Pushed to GitHub
                    Added pseudocode
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
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("Welcome to my maze game!\nCreated By: Halle Carlson\n\n");
    
    printf("Please enter your name:\n> ");
    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);

    printf("\nHi, %s.\n", name.c_str());
    _getch();
    printf("You are trapped in a maze with only one exit.\n");
    _getch();
    printf("There are nine rooms connected by doors. Once you go through a door, it will lock and you may not go back through.\n");
    printf("You will be prompted to input the room you want to enter. Input only the room number (e.g. 1, 5, 6).\n\n");
    printf("Good luck!\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    _getch();

    int choice1;
    int choice2;
    int choice3;
    int choice4;
    int choice5;
    int choice6;
    int choice7;
    int choice8;
    int choice9;

    printf("[Room 1]\n");   //(1/2 == open, 1/4 == open)
    _getch();
    printf("\nThe doors to 2 & 4 are open.\n");
    _getch();
    printf("Go where ?\n");
    printf("\ta. Room 2\n");
    printf("\tb. Room 4\n");
    printf("> ");
    scanf_s("%i", &choice1);
    fseek(stdin, 0, SEEK_END);

    if (choice1 == 2)   
    {        
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        _getch();
        printf("[Room 2]\n"); //(1/2 == locked, 2/3 == open, 2/5 == open)
        _getch();
        printf("\n%s went through the door between 1 & 2.\n", name.c_str());    //door 1/2 LOCKED
        printf("The door locked behind %s.\n\n", name.c_str());
        _getch();
        printf("The doors to 3 & 5 are open.\n");
        _getch();
        printf("Go where ?\n");
        printf("\ta. Room 3\n");
        printf("\tb. Room 5\n");
        printf("> ");
        scanf_s("%i", &choice2);
        fseek(stdin, 0, SEEK_END);

        if (choice2 == 3)   
        {
            printf("------------------------------------------------------------------------------------------------------------------------\n");
            _getch();
            printf("[Room 3]\n");   //dead end (2/3 == locked)
            printf("\n%s went through the door between 2 & 3.\n", name.c_str());    //door 2/3 LOCKED
            printf("The door locked behind %s.\n\n", name.c_str());
            _getch();
            printf("There are no other doors in Room 3.\n\n");  //DEAD END
            _getch();
            printf("You have reached a dead end.\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            _getch();            
            printf("       GGGGGGGGGGG      AAA      M         M  EEEEEEEEEEE    OOOOOOOOOOO  V          V  EEEEEEEEEEE  RRRRRRRRRRR\n");
            printf("       G         G     A   A     MM       MM  E              O         O  V          V  E            R         R\n");
            printf("       G              A     A    M M     M M  E              O         O  V          V  E            R         R\n");
            printf("       G             A       A   M  M   M  M  EEEEEEEEEEE    O         O   V       V    EEEEEEEEEEE  R         R\n");
            printf("       G    GGGGGG  AAAAAAAAAAA  M   M M   M  E              O         O    V     V     E            RRRRRRRRRRR\n");
            printf("       G         G  A         A  M    M    M  E              O         O     V   V      E            R       R\n");
            printf("       G         G  A         A  M         M  E              O         O      V V       E            R        R\n");
            printf("       GGGGGGGGGGG  A         A  M         M  EEEEEEEEEEE    OOOOOOOOOOO       V        EEEEEEEEEEE  R         R\n");
        }

        else if (choice2 == 5)  
        {        
            printf("------------------------------------------------------------------------------------------------------------------------\n");
            _getch();
            printf("[Room 5]\n");   //door 2/5 == locked, 5/4 == open, 5/6 == open
            _getch();
            printf("\n%s went through the door between 2 & 5.\n", name.c_str());    //door 2/5 LOCKED
            printf("The door locked behind %s.\n\n", name.c_str());            
            _getch();
            printf("The doors to 4 & 6 are open.\n");
            _getch();
            printf("Go where ?\n");
            printf("\ta. Room 4\n");
            printf("\tb. Room 6\n");
            printf("> ");
            scanf_s("%i", &choice5);
            fseek(stdin, 0, SEEK_END);           

            if (choice5 == 4)      
            {
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                _getch();
                printf("[Room 4]\n");   //door 4/5 == locked, 4/7 == open, 4/1 == open     
                _getch();
                printf("\n%s went through the door between 5 & 4.\n", name.c_str());    //door 5/4 LOCKED
                printf("The door locked behind %s.\n\n", name.c_str());
                _getch();                
                printf("The doors to 1 & 7 are open.\n");
                _getch();
                printf("Go where ?\n");
                printf("\ta. Room 1\n");
                printf("\tb. Room 7\n");
                printf("> ");
                scanf_s("%i", &choice4);
                fseek(stdin, 0, SEEK_END);

                if (choice4 == 1)   
                {
                    printf("------------------------------------------------------------------------------------------------------------------------\n");
                    _getch();
                    printf("[Room 1]\n");   //dead end (4/1 == locked)
                    printf("\n%s went through the door between 4 & 1.\n", name.c_str());    //door 4/1 LOCKED
                    printf("The door locked behind %s.\n\n", name.c_str());
                    _getch();
                    printf("There are no other doors in Room 1.\n\n");  //DEAD END
                    _getch();
                    printf("You have reached a dead end.\n");
                    printf("------------------------------------------------------------------------------------------------------------------------\n\n");
                    _getch();
                    printf("       GGGGGGGGGGG      AAA      M         M  EEEEEEEEEEE    OOOOOOOOOOO  V          V  EEEEEEEEEEE  RRRRRRRRRRR\n");
                    printf("       G         G     A   A     MM       MM  E              O         O  V          V  E            R         R\n");
                    printf("       G              A     A    M M     M M  E              O         O  V          V  E            R         R\n");
                    printf("       G             A       A   M  M   M  M  EEEEEEEEEEE    O         O   V       V    EEEEEEEEEEE  R         R\n");
                    printf("       G    GGGGGG  AAAAAAAAAAA  M   M M   M  E              O         O    V     V     E            RRRRRRRRRRR\n");
                    printf("       G         G  A         A  M    M    M  E              O         O     V   V      E            R       R\n");
                    printf("       G         G  A         A  M         M  E              O         O      V V       E            R        R\n");
                    printf("       GGGGGGGGGGG  A         A  M         M  EEEEEEEEEEE    OOOOOOOOOOO       V        EEEEEEEEEEE  R         R\n");
                }

                else if (choice4 == 7)  
                {
                    printf("------------------------------------------------------------------------------------------------------------------------\n");
                    _getch();
                    printf("[Room 7]\n");   //must go to 8 (4/7 == locked, 7/8 == open)
                    _getch();
                    printf("\n%s went through the door between 4 & 7.\n", name.c_str());    //door 4/7 LOCKED
                    printf("The door locked behind %s.\n\n", name.c_str());
                    _getch();
                    printf("The door to 8 is open. It looks like this is the only way %s can go.\n", name.c_str());
                    printf("------------------------------------------------------------------------------------------------------------------------\n");
                    _getch();
                    printf("[Room 8]\n");   //must go to 9 (7/8 == locked, 8/9 == open)
                    _getch();
                    printf("\n%s went through the door between 7 & 8.\n", name.c_str());    //door 7/8 LOCKED
                    printf("The door locked behind %s.\n\n", name.c_str());
                    _getch();
                    printf("The door to 9 is open. It looks like this is the only way % s can go.\n", name.c_str());
                    printf("------------------------------------------------------------------------------------------------------------------------\n");
                    _getch();
                    printf("[Room 9]\n"); //win (9 == end)
                    _getch();
                    printf("\n%s went through the door between 8 & 9.\n", name.c_str());    //door 8/9 LOCKED
                    printf("The door locked behind %s.\n\n", name.c_str());
                    _getch();
                    printf("%s found the exit!\n", name.c_str()); //WIN
                    printf("------------------------------------------------------------------------------------------------------------------------\n\n");
                    _getch();
                    printf("                  Y         Y  OOOOOOOOOOO  U         U    W         W  I  N         N\n");
                    printf("                  Y         Y  O         O  U         U    W         W  I  N N       N\n");
                    printf("                   Y       Y   O         O  U         U    W    W    W  I  N  N      N\n");
                    printf("                    Y     Y    O         O  U         U    W   W W   W  I  N   N     N\n");
                    printf("                     Y Y Y     O         O  U         U    W  W   W  W  I  N    N    N\n");
                    printf("                       Y       O         O  U         U    W W     W W  I  N     N   N\n");
                    printf("                       Y       O         O  U         U    W         W  I  N      N  N\n");
                    printf("                       Y       OOOOOOOOOOO  UUUUUUUUUUU    W         W  I  N       N N\n");
                }
            }

            else if (choice5 == 6) 
            {
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                _getch();
                printf("[Room 6]\n");   //dead end (5/6 == locked)
                _getch();
                printf("\n%s went through the door between 5 & 6.\n", name.c_str());    //door 5/6 LOCKED
                printf("The door locked behind %s.\n\n", name.c_str());
                _getch();
                printf("There are no other doors in Room 6.\n\n");  //DEAD END
                _getch();
                printf("You have reached a dead end.\n"); 
                printf("------------------------------------------------------------------------------------------------------------------------\n\n");
                _getch();
                printf("       GGGGGGGGGGG      AAA      M         M  EEEEEEEEEEE    OOOOOOOOOOO  V          V  EEEEEEEEEEE  RRRRRRRRRRR\n");
                printf("       G         G     A   A     MM       MM  E              O         O  V          V  E            R         R\n");
                printf("       G              A     A    M M     M M  E              O         O  V          V  E            R         R\n");
                printf("       G             A       A   M  M   M  M  EEEEEEEEEEE    O         O   V       V    EEEEEEEEEEE  R         R\n");
                printf("       G    GGGGGG  AAAAAAAAAAA  M   M M   M  E              O         O    V     V     E            RRRRRRRRRRR\n");
                printf("       G         G  A         A  M    M    M  E              O         O     V   V      E            R       R\n");
                printf("       G         G  A         A  M         M  E              O         O      V V       E            R        R\n");
                printf("       GGGGGGGGGGG  A         A  M         M  EEEEEEEEEEE    OOOOOOOOOOO       V        EEEEEEEEEEE  R         R\n");
            }
        }
    }

    else if (choice1 == 4) 
    {      
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        _getch();
        printf("[Room 4]\n");   //(1/4 == closed, 4/5 == open, 4/7 == open)
        _getch();
        printf("\n%s went through the door between 1 & 4.\n", name.c_str());    //door 1/4 LOCKED
        printf("The door locked behind %s.\n\n", name.c_str());
        _getch();
        printf("The doors to 5 & 7 are open.\n");
        _getch();
        printf("Go where ?\n");
        printf("\ta. Room 5\n");
        printf("\tb. Room 7\n");
        printf("> ");
        scanf_s("%i", &choice4);
        fseek(stdin, 0, SEEK_END);

        if (choice4 == 5) 
        {
            printf("------------------------------------------------------------------------------------------------------------------------\n");
            _getch();
            printf("[Room 5]\n");   //(4/5 == locked, 5/2 == open, 5/6 == open)
            _getch();
            printf("\n%s went through the door between 4 & 5.\n", name.c_str());    //door 4/5 LOCKED
            printf("The door locked behind %s.\n\n", name.c_str());
            _getch();
            printf("The doors to 2 & 6 are open.\n");
            _getch();
            printf("Go where ?\n");
            printf("\ta. Room 2\n");
            printf("\tb. Room 6\n");
            printf("> ");
            scanf_s("%i", &choice5);
            fseek(stdin, 0, SEEK_END);

            if (choice5 == 2) 
            {
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                _getch();
                printf("[Room 2]\n");   //(2/5 == closed, 2/3 == open, 1/2 == open)
                _getch();
                printf("\n%s went through the door between 5 & 2.\n", name.c_str());    //door 5/2 LOCKED
                printf("The door locked behind %s.\n\n", name.c_str());
                _getch();
                printf("The doors to 1 & 3 are open.\n");
                _getch();
                printf("Go where ?\n");
                printf("\ta. Room 1\n");
                printf("\tb. Room 3\n");
                printf("> ");
                scanf_s("%i", &choice2);
                fseek(stdin, 0, SEEK_END);

                if (choice2 == 1)
                {
                    printf("------------------------------------------------------------------------------------------------------------------------\n");
                    _getch();
                    printf("[Room 1]\n"); //dead end (2/1 == closed, 1/4 == closed)
                    _getch();
                    printf("\n%s went through the door between 2 & 1.\n", name.c_str());    //door 2/3 LOCKED
                    printf("The door locked behind %s.\n\n", name.c_str());
                    _getch();
                    printf("There are no other doors in Room 1.\n\n");  //DEAD END
                    _getch();
                    printf("You have reached a dead end.\n");
                    printf("------------------------------------------------------------------------------------------------------------------------\n\n");
                    _getch();
                    printf("       GGGGGGGGGGG      AAA      M         M  EEEEEEEEEEE    OOOOOOOOOOO  V          V  EEEEEEEEEEE  RRRRRRRRRRR\n");
                    printf("       G         G     A   A     MM       MM  E              O         O  V          V  E            R         R\n");
                    printf("       G              A     A    M M     M M  E              O         O  V          V  E            R         R\n");
                    printf("       G             A       A   M  M   M  M  EEEEEEEEEEE    O         O   V       V    EEEEEEEEEEE  R         R\n");
                    printf("       G    GGGGGG  AAAAAAAAAAA  M   M M   M  E              O         O    V     V     E            RRRRRRRRRRR\n");
                    printf("       G         G  A         A  M    M    M  E              O         O     V   V      E            R       R\n");
                    printf("       G         G  A         A  M         M  E              O         O      V V       E            R        R\n");
                    printf("       GGGGGGGGGGG  A         A  M         M  EEEEEEEEEEE    OOOOOOOOOOO       V        EEEEEEEEEEE  R         R\n");
                }

                else if (choice2 == 3)
                {
                    printf("------------------------------------------------------------------------------------------------------------------------\n");
                    _getch();
                    printf("[Room 3]\n"); //dead end (2/3 == closed)
                    _getch();
                    printf("\n%s went through the door between 2 & 3.\n", name.c_str());    //door 2/3 LOCKED
                    printf("The door locked behind %s.\n\n", name.c_str());
                    _getch();
                    printf("There are no other doors in Room 3.\n\n");  //DEAD END
                    _getch();
                    printf("You have reached a dead end.\n");
                    printf("------------------------------------------------------------------------------------------------------------------------\n\n");
                    _getch();
                    printf("       GGGGGGGGGGG      AAA      M         M  EEEEEEEEEEE    OOOOOOOOOOO  V          V  EEEEEEEEEEE  RRRRRRRRRRR\n");
                    printf("       G         G     A   A     MM       MM  E              O         O  V          V  E            R         R\n");
                    printf("       G              A     A    M M     M M  E              O         O  V          V  E            R         R\n");
                    printf("       G             A       A   M  M   M  M  EEEEEEEEEEE    O         O   V       V    EEEEEEEEEEE  R         R\n");
                    printf("       G    GGGGGG  AAAAAAAAAAA  M   M M   M  E              O         O    V     V     E            RRRRRRRRRRR\n");
                    printf("       G         G  A         A  M    M    M  E              O         O     V   V      E            R       R\n");
                    printf("       G         G  A         A  M         M  E              O         O      V V       E            R        R\n");
                    printf("       GGGGGGGGGGG  A         A  M         M  EEEEEEEEEEE    OOOOOOOOOOO       V        EEEEEEEEEEE  R         R\n");
                }
            }

            else if (choice5 == 6) 
            {                
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                _getch();
                printf("[Room 6]\n");   //dead end (5/6 == closed)
                _getch();
                printf("\n%s went through the door between 5 & 6.\n", name.c_str());    //door 5/6 LOCKED
                printf("The door locked behind %s.\n\n", name.c_str());
                _getch();
                printf("There are no other doors in Room 6.\n\n");  //DEAD END
                _getch();
                printf("You have reached a dead end.\n");
                printf("------------------------------------------------------------------------------------------------------------------------\n\n");
                _getch();
                printf("       GGGGGGGGGGG      AAA      M         M  EEEEEEEEEEE    OOOOOOOOOOO  V          V  EEEEEEEEEEE  RRRRRRRRRRR\n");
                printf("       G         G     A   A     MM       MM  E              O         O  V          V  E            R         R\n");
                printf("       G              A     A    M M     M M  E              O         O  V          V  E            R         R\n");
                printf("       G             A       A   M  M   M  M  EEEEEEEEEEE    O         O   V       V    EEEEEEEEEEE  R         R\n");
                printf("       G    GGGGGG  AAAAAAAAAAA  M   M M   M  E              O         O    V     V     E            RRRRRRRRRRR\n");
                printf("       G         G  A         A  M    M    M  E              O         O     V   V      E            R       R\n");
                printf("       G         G  A         A  M         M  E              O         O      V V       E            R        R\n");
                printf("       GGGGGGGGGGG  A         A  M         M  EEEEEEEEEEE    OOOOOOOOOOO       V        EEEEEEEEEEE  R         R\n");
            }
        }

        else if (choice4 == 7) 
        {
            printf("------------------------------------------------------------------------------------------------------------------------\n");
            _getch();
            printf("[Room 7]\n"); //must go to 8 (4/7 == locked, 7/8 == open)
            _getch();
            printf("\n%s went through the door between 4 & 7.\n", name.c_str());    //door 4/7 LOCKED
            printf("The door locked behind %s.\n\n", name.c_str());
            _getch();
            printf("The door to 8 is open. It looks like this is the only way %s can go.\n", name.c_str());
            printf("------------------------------------------------------------------------------------------------------------------------\n");
            _getch();
            printf("[Room 8]\n"); //must go to 9 (7/8 == locked, 8/9 == open)
            _getch();
            printf("\n%s went through the door between 7 & 8.\n", name.c_str());    //door 7/8 LOCKED
            printf("The door locked behind %s.\n\n", name.c_str());
            _getch();
            printf("The door to 9 is open. It looks like this is the only way %s can go.\n", name.c_str());
            printf("------------------------------------------------------------------------------------------------------------------------\n");
            _getch();
            printf("[Room 9]\n"); //win (9 == end)
            _getch();
            printf("\n%s went through the door between 8 & 9.\n", name.c_str());    //door 8/9 LOCKED
            printf("The door locked behind %s.\n\n", name.c_str()); 
            _getch();
            printf("%s found the exit!\n", name.c_str()); //WIN
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            _getch();
            printf("                  Y         Y  OOOOOOOOOOO  U         U    W         W  I  N         N\n");
            printf("                  Y         Y  O         O  U         U    W         W  I  N N       N\n");
            printf("                   Y       Y   O         O  U         U    W    W    W  I  N  N      N\n");
            printf("                    Y     Y    O         O  U         U    W   W W   W  I  N   N     N\n");
            printf("                     Y Y Y     O         O  U         U    W  W   W  W  I  N    N    N\n");
            printf("                       Y       O         O  U         U    W W     W W  I  N     N   N\n");
            printf("                       Y       O         O  U         U    W         W  I  N      N  N\n");
            printf("                       Y       OOOOOOOOOOO  UUUUUUUUUUU    W         W  I  N       N N\n");
        }
    }    

    return 0;
}


