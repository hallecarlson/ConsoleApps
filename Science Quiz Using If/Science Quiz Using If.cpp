// Science Quiz Using If.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS03-02 (Science Quiz using if)
    File Name:      Science Quiz Using If.cpp
    Purpose:        

    Pseudocode:

    Maintenance Log:
    Date: 10/22/21  Done: 
                    Created project

    Date: 10/25/21  Done:
                    Added comments
                    Added code for int and string variables, player name input, and text output
                    Added comments for questions and answers
                    Formatted code and comments
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
    printf("Science Quiz\nCreated By: Halle Carlson\n\n");
    
    printf("Please enter your name:");
    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);

    printf("Hi, %s!\n", name.c_str());
    //instructions here
    printf("Good luck!\n\n");

    int q1;
    int q2;
    int q3;

    printf("Question 1:\n");
    printf("%s, what, in layman's terms, is the role of vacuoles in animal cells?\n", name.c_str());
    printf("\ta. adjust cell size\n");
    printf("\tb. maintain water balance\n");    //correct answer
    printf("\tc. waste management\n");
    printf("\td. protein production\n");

    //input and if statement

    //question 2

    //input and if statement

    //question 3

    //input and if statement

    /*
    Questions:
    1.  What, in layman's terms, is the role of vacuoles in animal cells?
        a. adjust cell size
        b. maintain water balance
        c. waste management                     //correct answer   
        d. protein production

    2. Which of the following is NOT a nitrogenous base present in RNA nucleotides?
        a. adenine (A)
        b. guanine (G)
        c. cytosine (C)
        d. thymine (T)                          //correct answer

    3. What signifies that certain elements on the periodic table have the same valence electron configuration?
        a. the elements are in the same period
        b. the elements are in the same group   //correct answer
        c. the elements are in the same subcategory
        d. elements cannot have the same valence electron configurations
    */
}


