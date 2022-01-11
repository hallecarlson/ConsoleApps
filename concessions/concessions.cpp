/*
    Author:         Halle Carlson
    Project Name:   Problem GS07-01
    File Name:      concessions.cpp
    Purpose:        Write a program that acts as the cash register of a concession stand 
                    (of a movie theater for example). You need to have a minimum of popcorn, 
                    drinks that use an enum called sizes (like in the example code). You also 
                    need to have at least two more items that the user can buy. Decide the 
                    prices for things in such a way that the enumerated data is not the price. 
                    Calculate the total and the tax. The tax must be calculated in a separate 
                    function, where you return the tax only. Output the price, tax, and total cost 
                    (price + tax) on separate labeled lines. As an extension, you could make sure 
                    the user does not want more items or let the user choose how many items at 
                    what sizes.

    Pseudocode:         enum for sizes 
                        int main
                            variables for concession sizes, total, tax, and retake
                            game loop
                            screen is cleared when player restarts the game
                            introduction
                            sizes
                            player input for size
                            switch for cost added
                            total printed to screen
                            process repeats for all 4 concessions
                            total is printed
                            tax is printed
                            final total is printed
                            choice to retake or end the game


    Notes:

    Maintenance Log:
    Date: 1/10/22       Done:
                        Created Project
                        Added code for entire project
                        Added pseudocode
                        Tested code
                        Fixed errors
                        Fixed formatting
                        Tested code
                        Pushed to GitHub
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

enum sizes {None, Small, Medium, Large, Jumbo};

int main()
{
    sizes drink = None, popcorn = None, candy = None, nachoes = None;
    float total = 0.0;
    float tax;
    char retake = 'a';

    do
    {
        system("cls");
        printf("Welcome to the Carlson Concession Stand!\n");
        printf("We sell drinks, popcorn, candy, and nachoes.\n\n");
        _getch;

        printf("\tDrinks sizes: Small, Medium, Large, and Jumbo\n");
        printf("\tPopcorn sizes: Small, Medium, Large, and Jumbo\n");
        printf("\tCandy sizes: Small, Large\n");
        printf("\tNachoes sizes: Small, Large, Jumbo\n\n");
        _getch;

        printf("Choose your drink size.\n");
        printf("\t0. None\n\t1. Small $1.25\n\t2. Medium $2.25\n\t3. Large $3.25\n\t4. Jumbo $4.25\n");
        printf(">");
        scanf_s("%d", &drink);
        fseek(stdin, 0, SEEK_END);

        switch (drink)
        {
        case None:
            printf("You have chosen not to get a drink.\n");
            break;
        case Small:
            total += 1.25;
            break;
        case Medium:
            total += 2.25;
            break;
        case Large:
            total += 3.25;
            break;
        case Jumbo:
            total += 4.25;
            break;
        }

        printf("Total: %.2f\n", total);
        _getch();


        printf("Choose your popcorn size.\n");
        printf("\t0. None\n\t1. Small $3.25\n\t2. Medium $4.25\n\t3. Large $5.25\n\t4. Jumbo $6.25\n");
        printf(">");
        scanf_s("%d", &popcorn);
        fseek(stdin, 0, SEEK_END);

        switch (popcorn)
        {
        case None:
            printf("You have chosen not to get popcorn.\n");
            break;
        case Small:
            total += 3.25;
            break;
        case Medium:
            total += 4.25;
            break;
        case Large:
            total += 5.25;
            break;
        case Jumbo:
            total += 6.25;
            break;
        }

        printf("Total: %.2f\n", total);
        _getch();


        printf("Choose your candy size.\n");
        printf("\t0. None\n\t1. Small $1.50\n\t2. Medium $2.25\n\t3. Large $2.75\n\t4. Jumbo $3.25\n");
        printf(">");
        scanf_s("%d", &candy);
        fseek(stdin, 0, SEEK_END);

        switch (candy)
        {
        case None:
            printf("You have chosen not to get candy.\n");
            break;
        case Small:
            total += 1.50;
            break;
        case Medium:
            total += 2.25;
            break;
        case Large:
            total += 2.75;
            break;
        case Jumbo:
            total += 3.25;
            break;
        }

        printf("Total: %.2f\n", total);
        _getch();


        printf("Choose your nacho size.\n");
        printf("\t0. None\n\t1. Small $4.75\n\t2. Medium $5.25\n\t3. Large $6.75\n\t4. Jumbo $8.25\n");
        printf(">");
        scanf_s("%d", &nachoes);
        fseek(stdin, 0, SEEK_END);

        switch (nachoes)
        {
        case None:
            printf("You have chosen not to get a drink.\n");
            break;
        case Small:
            total += 4.75;
            break;
        case Medium:
            total += 5.25;
            break;
        case Large:
            total += 6.75;
            break;
        case Jumbo:
            total += 8.25;
            break;
        }

        printf("Total: %.2f\n", total);
        _getch();

        tax = total * 0.065;
        total = total + tax;
        printf("Tax: %.2f\n\n", tax);
        _getch();
        printf("Total: %.2f\n", total);

        printf("Play again ?\n");
        printf("press n to end || press another key to play again\n");
        printf(">");
        scanf_s("%c", &retake);
        fseek(stdin, 0, SEEK_END);
    } while (retake != 'n');

    return 0;
}