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

    Date: 10/26/21  Done:
                    Added code to print multiple-choice questions 
                    Added to output whether answer was correct or incorrect
                    Added code to calculate score
                    Added comments
                    Formatted
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

    int score;
    score = 0;

    printf("Question 1:\n");
    printf("%s, what, in layman's terms, is the role of vacuoles in animal cells ?\n", name.c_str());
    printf("\ta. adjust cell size\n");
    printf("\tb. maintain water balance\n");    //correct answer
    printf("\tc. waste management\n");
    printf("\td. protein production\n\n");

    char q1;
    scanf_s("%c", &q1);
    fseek(stdin, 0, SEEK_END);

    if (q1 == 'b')
    {
        printf("correct\n\n");
        score + 4;
    }
    else if (q1 == 'a' || q1 == 'c' || q1 == 'd')
    {
        printf("incorrect\n\n");
        score--;
        //print correct answer
    }
    else if (q1 != 'a' || q1 != 'b' || q1 != 'c' || q1 != 'd')
    {
        printf("invalid input\n\n");
        score--;
        //print correct answer
    }

    printf("Question 2:\n");
    printf("%s, which of the following is NOT a nitrogenous base present in RNA nucleotides ?\n", name.c_str());
    printf("\ta.adenine(A)");
    printf("\tb.guanine(G)");
    printf("\tc.cytosine(C)");
    printf("\td.thymine(T)");   //correct answer

    char q2;
    scanf_s("%c", &q2);
    fseek(stdin, 0, SEEK_END);

    if (q2 == 'd')
    {
        printf("correct\n\n");
        score + 4;
    }
    else if (q2 == 'a' || q2 == 'b' || q2 == 'c')
    {
        printf("incorrect\n\n");
        score--;
        //print correct answer
    }
    else if (q2 != 'a' || q2 != 'b' || q2 != 'c' || q2 != 'd')
    {
        printf("invalid input\n\n");
        score--;
        //print correct answer
    }
    
    printf("Question 3:\n");
    printf("%s, what signifies that certain elements on the periodic table have the same valence electron configuration ?\n", name.c_str());
    printf("\ta.the elements are in the same period\n");
    printf("\tb.the elements are in the same group\n");     //correct answer
    printf("\tc.the elements are in the same subcategory\n");
    printf("\td.elements cannot have the same valence electron configurations\n");
    
    char q3;
    scanf_s("%c", &q3);
    fseek(stdin, 0, SEEK_END);

    if (q3 == 'b')
    {
        printf("correct\n\n");
        score + 4;
    }
    else if (q3 == 'a' || q3 == 'c' || q3 == 'd')
    {
        printf("incorrect\n\n");
        score--;
        //print correct answer
    }
    else if (q3 != 'a' || q3 != 'b' || q3 != 'c' || q3 != 'd')
    {
        printf("invalid input\n\n");
        score--;
        //print correct answer
    }
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


