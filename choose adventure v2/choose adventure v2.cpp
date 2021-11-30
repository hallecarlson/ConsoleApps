// choose adventure v2.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS03-04 (Choose your own adventure using if and switch)
    File Name:      choose adventure v2.cpp
    Purpose:        Write a short choose your own adventure story. Address the user by name and tell the story from their perspective.
                    Give the user at least 3 places where the story will branch. The story will branch based on the user giving string
                    input in at least 2 places and int input in at least 1 place. There must be at least 9 endings, each with an appropriate
                    ending. Either 2 levels of nesting with 3 choices at each level, or 3 levels of nesting with 2 choices at each level
                    (one choice would have 3 instead of 2).

    Pseudocode:

    Notes:

    Maintenance Log:
    Date:   11/29/21    Done:
                        Created project     
                        Copy/pasted some code and comments from original version
                        Added code for dialogue and branching
                        Added placeholders
                        Added comments for clarity
                        Pushed to GitHub

            11/30/21    Done:
                        Added code for narration and endings
                        Added comments for clarity
                        Pushed to GitHub

*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    printf("------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                            Choose Your Own Adventure Game\nCreated By: Halle Carlson\n\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("Please enter your name:\n>");
    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);

    //variables
    int choice;

    printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("%s woke up in a dim room.\n", name.c_str());
    printf("They saw 2 doors in front of them.\n");
    printf("%s turned around to check the rest of the room, but there was nothing else there.\n%s heard the sound of water splashing when they turned back around, and looked down.\n", name.c_str());
    printf("Shallow water was covering the floor.\nIt wasn't clear like notmal water.\n");
    _getch();
    printf("It was opaque and darker than anything %s had ever seen.\n", name.c_str());
    _getch();
    printf("%s looked back at the doors.\nThey appeared to be completely identical, except for handles, which were on opposite sides.\n");
    
    printf("Which path did %s choose?\n", name.c_str());
    printf("\t1. the left door\n");
    printf("\t2. the right door\n");
    printf(">");
    scanf_s("%i", &choice);
    fseek(stdin, 0, SEEK_END);

    if (choice == 1) //left UNFINISHED
    {
        printf("%s opened the left door, which took great strength.\n", name.c_str());
        printf("The sight on the other side of the door was stunning.\nBefore %s was a cave formed inside a massive quartz geode.\n", name.c_str());
        _getch();
        printf("%s saw two paths they could take through the geode.\nThere was a path to the left that %s could probably climb through, and a river in front of %s that they could swim through.\n", name.c_str());

        printf("Which path did %s choose?\n", name.c_str());
        printf("\t1. climb to the left\n");
        printf("\t2. swim forward\n");
        printf(">");
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);

        if (choice == 1) //climb
        {
            printf("%s slowly manuevered across the wall, using larger crytsals as steps and smaller crystals as hand grips.\n", name.c_str());
            printf("They saw an entrance to a dark tunnel, and kept climbing.\n");
            printf("%s reached the entrance, where the ground flattened.\nThey walked through.\n", name.c_str());
            printf("On the other side of the tunnel, there was a cozy log cabin.\n It had no windows and was probably buried underground, but the cabin reminded %s of home.\n", name.c_str());
            printf("In one far corner, there was a rocking chair and a side table.\aIn the other, there was a bookcase with childrens' toys lined up on top, and a small, round rug.\n");
            printf("On either side of %s, there was a simple kitchen setup, and a dining table with 3 chairs.\n", name.c_str());
            printf("%s went to sit in the rocking chair.\nOn the seat, there was a book, open to a specific page\n", name.c_str());
            printf("%s sat and rocked while they read the page.\n\n", name.c_str());
            _getch();
            printf("\t''great treasure awaits you, traveler\n\tchoose on of the three doors out of this cabin,\n\tand continue ahead\n\tall paths lead to unique reqards\n\tchoose wisely''\n\n");
            _getch();
            printf("%s sat up and put the book back how they found it.\n", name.c_str());
            printf("One of the doors was between the kitchen and bookcase\nAnother between the bookcase and rocking chair\nThe last between the rocking chair and the dining table\n");
            _getch();

            printf("Which path did %s choose?\n", name.c_str());
            printf("\t1. kitchen/bookcase door\n");
            printf("\t2. bookcase/rocking chair door\n");
            printf("\t3. rocking chair/dining table door\n");
            printf(">");
            scanf_s("%i", &choice);
            fseek(stdin, 0, SEEK_END);

            switch (choice) //endings
            {
            case '1': //sauna
                printf("%s opened the door between the kitchen and the bookcase.\nA wave of steam and hot air enveloped %s for a moment, and then dissapated, leaving their face dripping.\n", name.c_str()); 
                printf("%s rubbed their eyes and looked forward.\nThe door led to a sauna!\n", name.c_str()); 
                printf("%s removed their socks and shoes, and walked in.\n%s sat on the bench and closed their eyes, feeling tired after their journey through the cave.\n", name.c_str()); 
                _getch;
                
                //end message

                break;
            case '2': //campfire
                printf("%s opened the door between the bookcase the the rocking chair, and heard crickets chirping in rhythm.\n", name.c_str()); 
                printf("They looked forward and saw a campfire in the middle of a grassy field.\nIt was night, and there were fireflies in the air.\nThe moon shined on the grass by the fire.\n");
                printf("%s walked to the campfire.\nThe air was cool, and %s wondered how they could possibly be avove the ground when they were just in a cave.\n", name.c_str());
                printf("%s saw marshmallows, graham crackers, chocolate, and skewers. They stuck two marshmallows on a skewer and made s'mores until the sun rose.\n");
                
                //end message

                break;
            case '3': //beach
                printf("%s opened the door between the rocking chair and the dining table.\nThey heard the sound of a calm ocean, and nothing else.\nIn front of %s, there was a peaceful beach.\n", name.c_str-str()); 
                printf("The air was warm, the sky was clear, and the sand was pale.\nThere were shining seashells protruding out of the ground\nOld fallen trees had been made into habitats by the animals that lived on the beach.\n"); 
                printf("%s removed their socks and shoes and walked around, enjoying the feeling of hot sand between their toes.\n", name.c_str()); 
                 
                //end message

                break;
            }

        }
        else if (choice == 2) //swim
        {
            printf("%s slowly walked into the pond until it was deep enough to swim in\nIt was lukewarm and refreshing.\nThe pond extended into small streams leading through tunnels.\n", name.c_str());
            printf("%s saw one stream that was large enough for them to swim through.\nThey continued that way until they reached an exit.\n", name.c_str());
            printf("The stream poured into a larger pond in an even larger cave room.\nThe water looked murky.\n%s climbed out of the water and took a great step onto the stone floor beside the pond.\n", name.c_str());
            printf("%s walked until they saw a wall that looked climbable.\nThey scaled the protruding bits of rock until they reached the top, which led to a higher-up part of the cave.\n", name.c_str());
            printf("%s kept going until they reached a small, round room that branched off into 3 tunnels.\nIn the center, there was a pedestal with an open book.\n%s read the page.\n", name.c_str());
            printf("\t''getting this far is an impressive feat\n\tno more tricks or trials lie ahead\n\teach path leads to a reward\n\ttrust yourself to choose the path that's right for you''\n");
            printf("%s grabbed a torch that was hung on the wall and turned to asses each of the three tunnels.\nThey all led into darkness.\n");
            _getch();

            printf("Which path did %s choose?\n", name.c_str());
            printf("\t1. the left tunnel\n");
            printf("\t2. the middle tunnel\n");
            printf("\t3. the right tunnel\n");
            printf(">");
            scanf_s("%i", &choice);
            fseek(stdin, 0, SEEK_END);

            switch (choice) //endings
            {
            case '1': //meal
                printf("%s began to walk down the left path.\n%s thet their guard down whistled while they walked.\nIt took a few minutes to reach the end.\n", name.c_str());
                printf("%s walked into an ornately decorated dining hall.\nBeautifully crafted candelabras illuminated the room\n", name.c_str());
                printf("%s blew out the torch and took a seat at the table.\nIt was filled with platters of all their favorite foods.\n", name.c_str());
                printf("%s enjoyed a nice meal.\n", name.c_str());
                
                //end message

                break;
            case '2': //guitar
                printf("\n"); //blah blah blah
                break;
            case '3': //planetarium
                printf("\n"); //blah blah blah
                break;
            }
        }
    }
    else if (choice == 2) //right UNFINISHED
    {
        printf("%s turned the handle and pushed on the right door, which then automatically swung open.\n", name.c_str());
        printf("The room on the other side looked very, very old.\nIt seemed to be part of a temple, constructed in turquoise stone.\n");
        _getch();
        printf("There was a shallow pool of water covering most of the floor.\nThis water rippled with no visible source, which made %s wonder if there were ghosts in the temple.\n", name.c_str());
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");

        printf("Which path did %s choose?\n", name.c_str());
        printf("\t1. The lower, bright archway\n");
        printf("\t2. The higher, dark archway\n");
        printf(">");
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);

        if (choice == 1) //low&bright UNFINISHED
        {
            switch (choice) //endings
            {
            case '1': //horse
                printf("\n"); //blah blah blah
                break;
            case '2': //cottage
                printf("\n"); //blah blah blah
                break;
            case '3': //invisibility cloak
                printf("\n"); //blah blah blah
                break;
            }
        }
        else if (choice == 2) //high&dark UNFINISHED
        {
            switch (choice) //endings
            {
            case '1': //crown
                printf("\n"); //blah blah blah
                break;
            case '2': //treasure
                printf("\n"); //blah blah blah
                break;
            case '3': //harp
                printf("\n"); //blah blah blah
                break;
            }
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    return 0;
}

