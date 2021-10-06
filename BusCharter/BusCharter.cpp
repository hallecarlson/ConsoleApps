// BusCharter.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author: Halle Carlson
    Problem: 
    Project name: GS02-05 (Bus Charter)
    File name: BusCharter.cpp

    Pseudocode:

    Maintenance log:
    Date: 10/5/21   Done: 
                    Created project

    Date: 10/6/21   Done:
                    Added code to explain program to user, define variables, allow inputs, make calculations, and output
                    Fixed errors
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
    printf("Hello, you've got Carslon Transportation on the phone. We charter busses and vans for tours.\n");
    printf("Our busses are filled to capacity and the remainder of passengers are transported in vans.\n\n");
    printf("Who's calling (no spaces)?:\n");

    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);
    printf("Hello, %s, how many people need transport (no spaces)?:\n", name.c_str());
    printf("Okay, %s, ", name.c_str());

    int number;
    scanf_s("%d", &number);
    fseek(stdin, 0, SEEK_END);
    
    const int bus_capacity = 60;
    const int van_capacity = 7;
    int busses;
    int remainder_busses;
    int vans;
    int remainder_vans;

    busses = number / bus_capacity;
    remainder_busses = number % bus_capacity;
    vans = remainder_busses / van_capacity;
    remainder_vans = remainder_busses % van_capacity;
    if (remainder_vans != 0)
    {
        vans = remainder_busses / van_capacity + 1;       
    }
    printf("%d\n", busses);
    printf("%d\n", vans);

}

