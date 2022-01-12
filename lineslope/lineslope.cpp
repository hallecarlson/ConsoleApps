/*
    Author:         Halle Carlson
    Project Name:   Problem GS07-05
    File Name:      lineslope.cpp
    Purpose:        Write a program that calculates the slope of a line. Make a struct for 
                    a 2D point with float values. Make a struct for a line which has 2 points. 
                    The user will input the data for two points. Make sure that the line is 
                    really a line (not the same points) and that it is not vertical. If the 
                    two points are equal, have the user input the points again (or at least the 
                    second one). If the line is vertical, tell the user that the slope is infinite. 
                    If the line is not vertical, send the line to a function that returns the slope.
                    Output the slope in the calling function.

    Pseudocode:         Slope formula comment
                        Struct variables
                        Math function
                        Slope calculated step-by-step
                        Main function
                        Struct variables
                        Intro text
                        Player Inputs
                        Player inputs outputted back to screen
                        Slope outputted to screen

    Notes:

    Maintenance Log:
    Date: 1/12/22       Done:
                        Created Project
                        Copy-pasted code from my GS07-04 project
                        Added code for struct, math, intro text, player input, outputs of values, output of slope
                        Tested code
                        Added messages for infinite and zero slopes
                        Added prompts for players to try again if the previous scenarios are encountered
                        Pushed to GitHub
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
#include <math.h>
using namespace std;

//slope = (y2-y1) / (x2-x1)

struct Point
{
    float x, y;
};


float slopes(Point p1, Point p2)
{
    float slope;
    float changex;
    float changey;
    
    changey = p2.y - p1.y;
    changex = p2.x - p1.x;
    slope = changey / changex;

    return slope;
}

int main()
{
    Point p1, p2;

    printf("This program will calculate the slope of two points on a graph\n");

    printf("\nPlease input x-coordinate of Point 1\n");
    printf(">");
    scanf_s("%f", &p1.x);
    fseek(stdin, 0, SEEK_END);

    printf("\nPlease input y-coordinate of Point 1\n");
    printf(">");
    scanf_s("%f", &p1.y);
    fseek(stdin, 0, SEEK_END);

    do
    {
        printf("\nPlease input x-coordinate of Point 2\n");
        printf(">");
        scanf_s("%f", &p2.x);
        fseek(stdin, 0, SEEK_END);

        if (p2.x == p1.x)
        {
            printf("Equal x-coordinates create infinite slopes. Try again.\n");
        }
    } while (p2.x == p1.x);

    do
    {
        printf("\nPlease input y-coordinate of Point 2\n");
        printf(">");
        scanf_s("%f", &p2.y);
        fseek(stdin, 0, SEEK_END);
        
        if (p2.y == p1.y)
        {
            printf("Equal y-coordinates create a slope of 0, and that is boring. Try again.\n");
        }
    } while (p2.y == p1.y);

    printf("\nYour point values:\n\tPoint 1\n\tx: %f\n\ty: %f\n\tPoint 2\n\tx: %f\n\ty: %f\n", p1.x, p1.y, p2.x, p2.y);

    float s = slopes(p1, p2);
    printf("\nSlope: %.2f\n", s);

    _getch();
    return 0;
}