// BusCharter.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Problem:        Create a program that allows the user to input their name and an amount of people going on a 
                    tour, and then calculates how many 60-passenger busses and 7-passenger vans are needed to
                    transport the people, with the busses being filled to capacity and the vans being filled with the
                    remainder of the people.
    Project name:   GS02-05 (Bus Charter)
    File name:      BusCharter.cpp

    Pseudocode:     The program calculates the amount of 60-passenger busses and 7-passenger vans are needed to 
                    transport an amount of people that the user inputs. First, a short introduction is printed, then,
                    the program asks the user for their name. After the user inputs their name, the program asks them
                    how many people they need to transport on a tour. After the user specifies the number of people, 
                    the program divides that by 60 to calculate the number of busses needed, then divides the remainder
                    of people by 7 to calculate the number of vans needed, then adds one van if there are any people 
                    left over. The number of busses and vans needed are printed in the output window.

    Maintenance log:
    Date: 10/5/21   Done: 
                    Created project

    Date: 10/6/21   Done:
                    Added code to explain program to user, define variables, allow inputs, make calculations, and output
                    Fixed errors
                    Updated comments
                    Pushed to GitHub
                    
                    Pulled from GitHub
                    Updated comments and pseudocode
                    Pushed to GitHub
                    Added code to output the number of people being transported in busses and vans
                    Added code to format output
                    Updated comments
                    Pushed to GitHub

    Date: 10/11/21  Done:
                    Pulled from GitHub
                    Ran program to check for problems
                    Fixed problems in code
                    Updated comments
                    Pushed to GitHub
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    printf("Hello, you've got Carslon Transportation Service on the phone. We charter busses and vans for tours.\n");
    printf("Our busses are filled to capacity and the remainder of passengers are transported in vans.\n\n");
    _getch();
    printf("Who's calling (no spaces)?:\n");

    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);
    printf("Hello, %s, how many people need transport (no spaces)?:\n", name.c_str());

    int number;
    scanf_s("%d", &number);
    fseek(stdin, 0, SEEK_END);
    
    const int bus_capacity = 60;
    const int van_capacity = 7;
    int busses;
    int remainder_busses;
    int people_busses;
    int vans;
    int remainder_vans;

    busses = number / bus_capacity;
    remainder_busses = number % bus_capacity;
    people_busses = number - remainder_busses;

    vans = remainder_busses / van_capacity;
    remainder_vans = remainder_busses % van_capacity;
    if (remainder_vans != 0)
    {
        vans = remainder_busses / van_capacity + 1;       
    }   

    printf("Okay, %s.\n", name.c_str());
    printf("We'll dispatch %d busses to transport %d people.\n", busses, people_busses);
    _getch();
    printf("There are %d people we'll need to transport in vans.\n", remainder_busses);
    _getch();
    printf("We'll dispatch %d to transport %d people.\n", vans, remainder_busses);
    _getch();
    printf("Thank you for using Carlson Transportation Service.");
    _getch();
}

