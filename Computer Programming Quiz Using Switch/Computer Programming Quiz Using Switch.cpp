// Computer Programming Quiz Using Switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS03-03 (Computer Programming Quiz using switch)
    File Name:      Computer Programming Quiz Using Switch.cpp
    Purpose:        Write a program that gives a student a multiple choice computer programming quiz. The program should use switch 
                    to determine whether the player's answers are correct or not, and add 1 point for correct answers, subtract 0.25 point 
                    for incorrect answers, and neither add nor subtract points for answers that are not listed.

    Pseudocode:     The program prompts the player to input their name. Then, instructions are given to explain how the quiz works.
                    The questions and multiple choice answers are outputted to the screen and the player is prompted to input either
                    a, b, c, or d. The program outputs a message telling the player whether their answer was correct or incorrect, 
                    determined through switch, and then proceeds to the next question. Once the player has answered all 3 questions, 
                    the program outputs their name and score. Since the program uses switch, the the program first calculates the score
                    as an int variable. The actual point values for correct and incorrect answers are +1 and -0.25, respectively, but since int
                    variables can't have decimal values, the program uses the same scoring as with the Science Quiz: +4 for correct and -1 for 
                    incorrect. After the player answers all 3 questions, the program typecasts the score as a float and divides it by 4.0 to 
                    calculate the actual score.

    Maintenance Log:
    Date: 11/1/21   Done:
                    Created project
                    Added code for player name input
                    Added code for introduction
                    Added code for questions
                    Added comments
                    Pushed to GitHub

                    Pulled from GitHub
                    Added code
                    Formatted code
                    Added comments
                    Pushed to GitHub

    Date: 11/2/21   Done:
                    Tested code
                    Fixed error in code regarding score calculation
                    Updated pseudocode
                    Added comments
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
    printf("Computer Programming Quiz\nCreated By: Halle Carlson\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("Please enter your name:\n\tPlayer:");
    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);

    printf("\nHi, %s!\n", name.c_str());
    _getch();
    printf("You will be asked 3 multiple choice questions related to computer programming.\n");
    _getch();
    printf("Points are scored as follows:\n");
    _getch();
    printf("\tCorrect answer: +1 point\n");
    printf("\tIncorrect answer: -0.25 point\n");
    printf("\tUnlisted answer: no change\n\n");
    _getch();
    printf("Good luck!\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    _getch();

    int score;
    score = 0; 

    printf("Question 1:\n");
    printf("%s, what is the binary value for the decimal number 8 ?\n", name.c_str());
    printf("\ta. 000\n");
    printf("\tb. 0100\n");  
    printf("\tc. 1000\n");  //correct answer
    printf("\td. 1111\n\n");

    printf("\tAnswer:");
    char q1;
    scanf_s("%c", &q1);
    fseek(stdin, 0, SEEK_END);

    switch (q1)
    {
        case 'c': case 'C':
            printf("\tcorrect\n");
            score = score + 4;  //score is first calculated as an int, and then typecasted as a float and divided by 4.0 at the end of the quiz
            break;
        case 'a': case 'A': case 'b': case 'B': case 'd': case 'D':
            printf("\tincorrect\n");
            score = score - 1;
            printf("\tcorrect answer: c\n");
            break;
        default:
            printf("\tinvalid input\n");
            printf("\tcorrect answer: c\n");
            break;
    }

    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("Question 2:\n");
    printf("%s, what data type can be used for switch branching ?\n", name.c_str());
    printf("\ta. int\n");   //correct answer
    printf("\tb. float\n");
    printf("\tc. string\n");
    printf("\td. all of the above\n\n"); 

    printf("\tAnswer:");
    char q2;
    scanf_s("%c", &q2);
    fseek(stdin, 0, SEEK_END);

    switch (q2)
    {
    case 'a': case 'A':
        printf("\tcorrect\n");
        score = score + 4;
        break;
    case 'b': case 'B': case 'c': case 'C': case 'd': case 'D':
        printf("\tincorrect\n");
        score = score - 1;
        printf("\tcorrect answer: a\n");
        break;
    default:
        printf("\tinvalid input\n");
        printf("\tcorrect answer: a\n");
        break;
    }

    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("Question 3:\n");
    printf("%s, what does ASCII stand for\n", name.c_str());
    printf("\ta. Assembled Standard Formatting International Index\n");
    printf("\tb. Actuated Sanctioning Frame for Implicit Inboxing\n");    
    printf("\tc. Arrayed Subliminal Code for Imaginative Illustrations\n");
    printf("\td. American Standard Code for Information Interchange\n\n");  //correct answer

    printf("\tAnswer:");
    char q3;
    scanf_s("%c", &q3);
    fseek(stdin, 0, SEEK_END);

    switch (q3)
    {
    case 'd': case 'D':
        printf("\tcorrect\n");
        score = score + 4;
        break;
    case 'a': case 'A': case 'b': case 'B': case 'c': case 'C':
        printf("\tincorrect\n");
        score = score - 1;
        printf("\tcorrect answer: d\n");
        break;
    default:
        printf("\tinvalid input\n");
        printf("\tcorrect answer: d\n");
        break;
    }

    float final_score;
    final_score = (float)score / 4.0;
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("Congradulations, %s, you finished the quiz!\n\n", name.c_str());
    _getch();
    printf("\tThis game\n");
    printf("\tPlayer: %s\n", name.c_str());
    printf("\tScore:  %f\n\n", final_score);

    printf("Thanks for playing!\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    _getch();

    return 0;
}

