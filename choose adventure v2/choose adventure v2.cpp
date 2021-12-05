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

                        Pulled from GitHub
                        Added code for narration and endings
                        Pushed to GitHub

            12/1/21     Done:
                        Pulled from GitHub
                        Added code for narration and endings
                        Pushed to GitHub

            12/3/21     Done:
                        Added code for narration and endings
                        Pushed to GitHub

            12/5/21     Done:
                        Pulled from GitHub
                        Added code for narration and endings
                        Finished narration and endings
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
                printf("%s opened the door between the rocking chair and the dining table.\nThey heard the sound of a calm ocean, and nothing else.\nIn front of %s, there was a peaceful beach.\n", name.c_str()); 
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
                printf("%s walked down the left path.\n%s thet their guard down whistled while they walked.\nIt took a few minutes to reach the end.\n", name.c_str());
                printf("%s walked into an ornately decorated dining hall.\nBeautifully crafted candelabras illuminated the room\n", name.c_str());
                printf("%s blew out the torch and took a seat at the table.\nIt was filled with platters of all their favorite foods.\n", name.c_str());
                printf("%s enjoyed a nice meal.\n", name.c_str());
                
                //end message

                break;
            case '2': //guitar
                printf("%s walked down the middle path.\n%s let their guard down and danced around a bit as they walked.\nIt took a long time to reach the end.\n", name.c_str()); 
                printf("%s walked into open air.\nThey looked forward and saw that the exit led to the top of a tall hill overlooking the sea.\n%s saw a fallen tree with flowers growing out of it.\nThey walked towards the tree and saw a guitar proped up agains the tree trunk.\n", name.c_str());
                printf("%s sat down and pulled the guitar onto their lap.\n");
                _getch();
                printf("%s leaned against the tree trunk and watched seagulls fly through the air as they plucked notes on the strings.\n");
                
                //end message

                break;
            case '3': //planetarium
                printf("%s walked down the right path.\n %s let their guard down for the few minutes it took to reach the end.\n", name.c_str()); 
                printf("%s walked into a round room with a glass dome ceiling.\nIt was night, and %s could see all of the stars in the sky.\nFloor pillows were scattered around, and in the center of the room, there was a telescope.\n", name.c_str());
                printf("%s grabbed a floor pillow and sat under the telescope.\nThey put their eye to the lens and spent the night stargazing.\n", name.c_str());
                
                //end message

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
        printf("Directly across the room, there was an archway, separating the temple room from a source of blinding light.\nOn either side of %s, there were staircases leading to another archway above the first.\nTotal darkness lay behind the higher arch.\n", name.c_str());
        _getch();

        printf("Which path did %s choose?\n", name.c_str());
        printf("\t1. The lower, bright archway\n");
        printf("\t2. The higher, dark archway\n");
        printf(">");
        scanf_s("%i", &choice);
        fseek(stdin, 0, SEEK_END);

        if (choice == 1) //low&bright UNFINISHED
        {
            printf("%s walked through the rippling water, which had no reaction to their movement.\nIt was cool but not cold, and sent a chilldown %s's spine.\n", name.c_str());
            printf("%s walked into a limestone bathhouse.\nNarrow walkways formed a square around the bath.\nWaterfalls spill over the path on either side, cutting off the path to the opposite side of the room.\n", name.c_str());
            printf("To the side of either waterfall, on the same side of the room as %s, there were two doorways.\nThe doorways were covered by curtains, which were dyed a rich purple.\n", name.c_str());
            printf("Directly across the bath, there was a wooden door, which had worn overtime from the steam of the bath.\n");
            _getch();

            printf("Which path did %s choose?\n", name.c_str());
            printf("\t1. the left doorway\n");
            printf("\t2. the right doorway\n");
            printf("\t3. the far doorway\n");
            printf(">");
            scanf_s("%i", &choice);
            fseek(stdin, 0, SEEK_END);

            switch (choice) //endings
            {
            case '1': //horse
                printf("%s walked along the narrow path to the doorway by the left waterfall.\nOn the other side of the curtain, there was a brightly lit hallway.\nThe hallway stopped and led to a door.\n", name.c_str()); 
                _getch();
                printf("%s opened the door and walked out onto a beautiful mountain trail.\nA majestic horse with black fur and a white mane stood, its hair flowing in the breeze.\n", name.c_str());
                printf("The horse kneeled when it saw %s.\nThe horse was equipped with a sadle and bridle, ready to adventure with %s.\n", name.c_str());
                printf("%s put one foot in the stirrup and grabbed onto the top of the sadle, swinging themself up onto the back of the horse.\n", name.c_str());
                _getch();
                printf("%s and the horse rode along the mountain trail.\n", name.c_str());
                
                //end message

                break;
            case '2': //cottage
                printf("%s walked along the narrow path to the doorway by the right waterfall.\nOn the other side of the curtain, there was a dim hallway.\nThe hallway stopped and led to a door.\n", name.c_str());
                _getch();
                printf("%s opened the door and heard birds singing.\nThey looked up and saw that they were in an enchanted forest.\nFaries flew through the air, colorful birds perched on trees, end everything looked like it was sparkling.\n");
                printf("%s walked around the magical scene, and saw a cozy cottage.\n", name.c_str());
                printf("%s sat in a rocking chair on the porch, and watched the fairies.\n", name.c_str());
                
                //end message

                break;
            case '3': //invisibility cloak
                printf("%s jumped into the bath and swam across.\nThe water was hot, and a layer of steam obscured %s's vision.\n", name.c_str()); 
                printf("%s rose out of the water and opened the wooden door.\nTheir clothes were drenched and dripping water that was now cold.\n", name.c_str());
                printf("The room behind the door was a dusty storage room.\nThere were shelves of towels, cleaning supplies, brooms, and mops.\n");
                printf("There was another wooden door behind a cluster of supplies.\n");
                printf("In the center of the room, there was a box\n");
                printf("The lid was ajar, and there was a note left on top.\n%s read it.\n", name.c_str());
                printf("''I leave my cloak of invisibility to whoever finds it''\n");
                printf("%s gasped and opened the box.\nThere was a cloak inside made of blue velvet and violet detailing.\n", name.c_str());
                printf("%s took the cloak and threw it over their shoulders.\n", name.c_str());
                printf("%s's entire body dissapeared!\n", name.c_str());
                printf("%s went to the blocked doorway.\n", name.c_str());
                _getch();
                printf("%s moved all of the supplpies away from the door, and opened it.\n", name.c_str());
                _getch();
                printf("Behind the door was an exit from the supply closet into a village.\n");
                _getch();
                printf("%s began a long journey to an unknown destination.\n", name.c_str());
                
                //end message
                
                break;
            }
        }
        else if (choice == 2) //high&dark UNFINISHED
        {
            printf("%s walked up the left staircase and through the dark archway.\n", name.c_str());
            printf("On the other side was a dark underground canal, and an empty gondola.\n", name.c_str());
            printf("%s climbed onto the front  and took the oar.\n%s sailed slowly down the tunnel, with only the reflection of light off the water to guide them.\n", name.c_str());
            printf("%s quickly stopped the gondola when they noticed that the canal was about to branch off into three seperate paths.\n");
            printf("In the low light, all three canals looked identical.\n");
            _getch();

            printf("Which path did %s choose?\n", name.c_str());
            printf("\t1. the left canal\n");
            printf("\t2. the middle canal\n");
            printf("\t3. the right canal\n");
            printf(">");
            scanf_s("%i", &choice);
            fseek(stdin, 0, SEEK_END);         

            switch (choice) //endings
            {
            case '1': //crown
                printf("%s steered the gondola down the left canal.\n");
                printf("After a few minutes, %s saw a small dock lit by two torches on either side.\n", name.c_str());
                printf("%s slowed the gondola to a halt and grabbed the rope on the dock, tying the gondola to a post.\n", name.c_str());
                printf("They hopped off and walked down the dock, where a staricase waited at the end.\n");
                printf("%s walked up the stairs, which led into a bright hall with marble pedestals holding rare artifacts.\n", name.c_str());
                printf("At the end of the hall, in the center of the walkway, was a lone pedestal, displaying a regal crown.\n");
                printf("%s had a feeling this was their reward for navigating the cave.\n", name.c_str());
                printf("%s took the crown and put it on their head, and then they walked back and forth the hall, examining the artifacts and imagining their stories.\n", name.c_str());
                
                //end message

                break;
            case '2': //treasure
                printf("%s steered the gondola down the middle canal.\n", name.c_str()); 
                printf("After a long while, %s saw a riverbank, lit by a torch stuck in the sand.\n", name.c_str()); 
                printf("%s hopped onto the riverbank and noticed a large vault door, cracked open.\n", name.c_str()); 
                printf("%s went to open the door wider, and endered the vault.\n", name.c_str()); 
                printf("%s's eyes opened wide in shock at the treasure trove in front of them.\n", name.c_str()); 
                printf("There was gold, and gems, and jewelry, and any other treasure imaginable.\n"); 
                printf("%s ran through the vault, exploring the large gold piles.\n", name.c_str()); 
                
                //end message

                break;
            case '3': //harp
                printf("%s steered the gondola down the right canal.\n", name.c_str()); 
                printf("After a short while, %s saw a large dock, devoid of any boats.\n", name.c_str()); 
                printf("%s grabbed a rope bound to a post and tied the gondola to the dock.\n", name.c_str()); 
                printf("They hopped onto the gondola and walked down the large dock, which was next to a raised town street.\n"); 
                printf("It was dark out, and %s noticed a staircase lit by a streetlight.\n", name.c_str()); 
                printf("%s climbed the staircase, which was oddly long.\nOnce they reached the top, %s saw that they were on a balcony overlooking a plaza.\nThere was a fountain in the middle, and benches all around.\n", name.c_str()); 
                printf("%s didn't see anyone down there.\n", name.c_str()); 
                printf("%s took a seat on a short, cushioned chair.\n", name.c_str()); 
                printf("There was a beautiful harp next to the chair.\nIt was coated in gold and its strings looked like thin tendons.\n");
                printf("%s played a melodic song under the stars to the empty town plaza.\n");
                
                //end message

                break;
            }
        }
    }

    return 0;
}

