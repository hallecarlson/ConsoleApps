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
                        Animal and its elements declared
                        Method to set characteristics of animal
                        Method to reset characteristics of animal via user input
                        Variables
                        Characteristics

                        animal.cpp
                        Header
                        Characteristics set to 0 and "a"
                        n, sn, and le set to name, scientific name, and life expectancy
                        characteristics set to A's characteristics
                        Set again
                        Reset via user input
                        Characteristics returned

                        animalclass.cpp
                        Headers
                        Animal A declared
                        Characteristics set to values of a bear
                        Values printed
                        Do-while loop to reset characteristics as many times as player wants

    Maintenance Log:
    Date: 3/2/22        Done:
                        Created project
                        
    Date: 3/4/22        Done:
                        Fixed some errors
                        Got help from Mr. Miyoshi with an exception and changing values via user input
                        Added pseudocode
                        Pushed to GitHub
*/
#include <iostream> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include "animal.h"
using namespace std;

int main()
{
    char retake;
    animal A;
    A.setCharacteristics("Bear", "Ursidae", 25);
    printf("name = %s\nscientific name = %s\nlife expectancy = ~%i\n", A.getN().c_str(), A.getSN().c_str(), A.getLE());
    
    do
    {
        string input_name;
        printf("\nChange the animal\n>");
        getline(cin, input_name);
        fseek(stdin, 0, SEEK_END);
        A.setName(input_name);
        string input_scientificname;
        printf("\nChange the scientific name of the animal\n>");
        getline(cin, input_scientificname);
        fseek(stdin, 0, SEEK_END);
        A.setScientificname(input_scientificname);
        int input_lifeexpectancy;
        printf("\nChange the life expectancy of the animal\n>");
        scanf_s("%i", &input_lifeexpectancy);
        fseek(stdin, 0, SEEK_END);
        A.setLifeexpectancy(input_lifeexpectancy);

        A.setCharacteristics(input_name, input_scientificname, input_lifeexpectancy);
        printf("\nname = %s\nscientific name = %s\nlife expectancy = ~%i\n", A.getN().c_str(), A.getSN().c_str(), A.getLE());
       
        printf("\nDo you want to change the values again? (y for yes, else for no)\n>");
        scanf_s("%c", &retake);
        fseek(stdin, 0, SEEK_END);
    } while (retake == 'y');

    return 0;
}