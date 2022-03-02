// animalclass.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS12-04 (animal class)
    File Name:      animalclass.cpp
    Purpose:        Write an animal class. This class must contain the animal’s name and two character traits 
                    (one character/string data and one numerical). Make methods to change and get data. Then 
                    create a program that uses the class. As an extension, use a text file to store the data.

    Pseudocode:         animal.h
                        Headers
                        Rectangle and its elements declared
                        Method to set dimensions of rectangle
                        Variables
                        Dimensions

                        animal.cpp
                        Header
                        l and w set to 0
                        l and w set to length and width
                        l and w set to R's dimensions
                        Set again
                        Length and width returned
                        Perimeter and area returned

                        animalclass.cpp
                        Headers
                        Rectangle R declared
                        Dimensions set to float values
                        Perimeter and area included
                        Values printed

    Maintenance Log:
    Date: 3/2/22        Done:
                        Created project
                        

*/
#include <iostream> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include "animal.h"
using namespace std;

int main()
{
    animal A;
    A.setCharacteristics("Bear", "Ursidae", 25);
    printf("name = %s\nscientific name = %s\nlife expectancy = ~%i\n", A.getN(), A.getSN(), A.getLE());
    
    string input_name;
    printf("Change the animal\n>");
    getline(cin, input_name);
    fseek(stdin, 0, SEEK_END);
    string input_scientificname;
    printf("\nChange the scientific name of the animal\n>");
    getline(cin, input_scientificname);
    fseek(stdin, 0, SEEK_END);
    int input_lifeexpectancy;
    printf("\nChange the life expectancy of the animal\n>");
    scanf_s("%i", &input_lifeexpectancy);
    fseek(stdin, 0, SEEK_END);

    return 0;
}