// cardshuffler.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Problem:        Use the playing card program from goal sheet 7 as a starting point. Create and place 52 cards into a deck 
                    (vector). So you will have a vector of playing cards numbered from 0-51 (which is why having the values 
                    go from 0-51 was suggested in the goal sheet 7 problem). You will need to create a function that shuffles 
                    the cards. That function will give you a random number between 0 and 51 (inclusive), which will be used as 
                    the index for a card in the vector to be switched with the last card in the deck. Then, you exclude the last 
                    card in the deck (essentially making the unshuffled deck smaller each iteration) and do the same process 
                    until you have swapped all the cards. This is a well-known shuffling algorithm (which I forget the name of right now).

                    Once you have created the shuffling function, you will deal the deck into four hands. These hands will be held in 
                    a two-dimensional vector (also called an array). The first dimension will be the number of hands (4) and the second 
                    dimension will be the number of cards each hand holds (13). Make sure to deal the cards into the hands one card at a 
                    time from the deck. When you are finished dealing the cards, output each hand to the screen. Your deck may be full 
                    or empty when you are finished, but make sure that you output the deck in the shuffled order as well as outputting 
                    each hand. Label your output appropriately.
    Project name:   Problem GS10-05 (card shuffler and dealer)
    File name:      cardshuffler.cpp

    Pseudocode:         

    Maintenance Log:
    Date: 2/9/22        Done:
                        Created project
                        Added code for project
                        Got help from Mr. Miyoshi
                        Pushed to GitHub

*/

#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include <vector>
#include <windows.h>
using namespace std;

enum Suits { clubs, diamonds, hearts, spades };
enum Designation { ace = 1, two, three, our, five, six, seven, eights, nine, ten, jack, queen, king };

struct Card
{
    Suits suit;
    Designation designation;
    string description;
};

int main()
{
    Card card;
    
    //example
    card.suit = clubs;
    card.designation = ace;
    card.description = "Ace of Clubs";

    vector<Card> deck;


/*int shuffler(vector<int> cards, int rn)
{
    for (int s = 52; s >= 1; s--)
    {
        int rn = 1 + rand() % (cards.size());
        
    }

    return;
}

int main()
{
    srand((unsigned)time(NULL));
    vector<int> cards;
    int rn;

    for (int c = 1; c <= 52; c++)
    {
        cards.push_back(c);
        printf("%i\t", cards[c - 1]);
        //Sleep(50);
    }*/

    return 0;
}