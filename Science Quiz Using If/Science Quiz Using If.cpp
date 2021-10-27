// Science Quiz Using If.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS03-02 (Science Quiz using if)
    File Name:      Science Quiz Using If.cpp
    Purpose:        Write a program that gives a student a multiple choice science quiz. The program should use if to determine 
                    whether the player's answers are correct or not, and add 4 points for correct answers, subtract 1 point for
                    incorrect answers, and not change points for answers that are not listed.

    Pseudocode:     The program prompts the player to input their name. Then, instructions are given to explain how the quiz works. 
                    The questions and multiple choice answers are outputted to the screen and the player is prompted to input either 
                    a, b, c, or d. The program outputs a message telling the player whether their answer was correct or incorrect, 
                    and then proceeds to the next question. Once the player has answered all 3 questions, the program outputs   
                    their name and score.

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
                    Pulled from GitHub
                    Added code to output instructions 
                    Added code to output the player's name and score after they finish the quiz
                    Updated code and comments
                    Formatted code and comments
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
    printf("Science Quiz\nCreated By: Halle Carlson\n\n");

    printf("Please enter your name:\nPlayer:");
    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);

    printf("\nHi, %s!\n", name.c_str());
    _getch();
    printf("You will be asked 3 multiple choice questions related to science.\n");
    _getch();
    printf("Points are scored as follows:\n");
    _getch();
    printf("\tCorrect answer: +4 points\n");
    printf("\tIncorrect answer: -1 point\n");     
    printf("\tUnlisted answer: no change\n\n");
    _getch();
    printf("Good luck!\n\n");
    _getch();

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
        score = score + 4;
    }
    else if (q1 == 'a' || q1 == 'c' || q1 == 'd')
    {
        printf("incorrect\n");
        score--;
        printf("correct answer: b\n\n");
    }
    else if (q1 != 'a' || q1 != 'b' || q1 != 'c' || q1 != 'd')
    {
        printf("invalid input\n");
        printf("correct answer: b\n\n");
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
        score = score + 4;
    }
    else if (q2 == 'a' || q2 == 'b' || q2 == 'c')
    {
        printf("incorrect\n");
        score--;
        printf("correct answer: d\n\n");
    }
    else if (q2 != 'a' || q2 != 'b' || q2 != 'c' || q2 != 'd')
    {
        printf("invalid input\n");
        printf("correct answer: d\n\n");
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
        score = score + 4;
    }
    else if (q3 == 'a' || q3 == 'c' || q3 == 'd')
    {
        printf("incorrect\n");
        score--;
        printf("correct answer: b\n\n");
    }
    else if (q3 != 'a' || q3 != 'b' || q3 != 'c' || q3 != 'd')
    {
        printf("invalid input\n");
        printf("correct answer: b\n\n");
    }

    printf("Congradulations, %s, you finished the quiz!\n\n", name.c_str());
    _getch();
    printf("-------------------------------------------------------\n");
    printf("\tThis game");
    printf("\tPlayer: %s\n", name.c_str());
    printf("\tScore:  %i\n\n", score);

    printf("Thanks for playing!");
    _getch();

    return 0;
}


