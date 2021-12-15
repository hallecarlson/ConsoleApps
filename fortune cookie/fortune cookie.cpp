// fortune cookie.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS06-03
    File Name:      fortune cookie.cpp
    Purpose:        Write a program that is passed a number and possibly a string and gives the user a     
                    fortune. You will decide which fortune, of ten possible, based on the number that is
                    passed to the function. Then, the function will pass the fortune back to the calling
                    function. Output the fortune in the calling function. You must loop the program (in 
                    main()) so that the user can keep getting fortunes until opting to quit. As an extension,
                    use a random number to determine the number you pass to the function instead of getting
                    the number from the user.

    Pseudocode:     Fortune Cookie function
                    Fortune string values
                    Main function
                    Variables
                    Player input
                    Fortune Output
                    Option to get another fortune


    Notes:

    Maintenance Log:
    Date: 12/7/21       Done:
                        Created project
                        Added comments
                        Added basic starting code
                        Pushed to GitHub

    Date: 12/14/21      Done:
                        Added code for fortunes
                        Pushed to GitHub

    Date: 12/15/21      Done:
                        Added code for functions, fortunes, and input and output
                        Tested for errors
                        Fixed errors
                        Tested code
                        Fixed formatting errors
                        Added pseudocode
                        Pushed to GitHub
                        

*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

string fortuneCookie(int num, string & fortune)
{
        if (num == 1)
        {
            fortune = "You will dream about rainbows and unicorns tonight";
        }
        else if (num == 2)
        {
            fortune = "You will be hired to the next job you apply to";
        }
        else if (num == 3)
        {
            fortune = "You will go see your favorite band in concert";
        }
        else if (num == 4)
        {
            fortune = "You will get good grades in all of your classes this semester";
        }
        else if (num == 5)
        {
            fortune = "You will have your favorite food for dinner tomorrow";
        }
        else if (num == 6)
        {
            fortune = "You will receive a present in the mail";
        }
        else if (num == 7)
        {
            fortune = "You will go on a lovely walk";
        }
        else if (num == 8)
        {
            fortune = "You will go to a very interesting magician show";
        }
        else if (num == 9)
        {
            fortune = "You will see a very funny commercial on TV tonight";
        }
        else if (num == 10)
        {
            fortune = "You will complete your favorite video game next week";
        }   
    return fortune;
}

int main()
{
    string fortune;
    int num;
    char retake;

    printf("Fortune Cookie\nBy: Halle Carlson\n");

    do
    {
        printf("\nPlease input a number from 1-10 (inclusive)\n");
        printf(">");
        scanf_s("%i", &num);
        fseek(stdin, 0, SEEK_END);

        fortune = fortuneCookie(num, fortune);
        printf("Your fortune: %s\n", fortune.c_str());
        _getch();

        printf("\nTry again? // n for no, any other letter for yes\n");
        printf(">");
        scanf_s("%c", &retake);
        fseek(stdin, 0, SEEK_END);



    } while (retake != 'n');

    return 0;
}
