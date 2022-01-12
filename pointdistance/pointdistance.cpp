/*
    Author:         Halle Carlson
    Project Name:   Problem GS07-04
    File Name:      pointdistance.cpp
    Purpose:        Write a program that calculates the distance between two points. Make a 
                    struct for a 2D point which will have float values. Declare two points 
                    from this one struct. The user will input the values for the x- and y-values
                    in the main() function of your program. Then, you will send the two points 
                    to a function which calculates the distance between the points and returns 
                    the single value to the calling function to be displayed there.

    Pseudocode:         distance formula comment
                        struct variables
                        math function
                        distance calculated step-by-step
                        main function
                        struct variables
                        intro 
                        player inputs
                        player inputs outputted back to screen
                        distance printed to screen


    Notes:

    Maintenance Log:
    Date: 1/12/22       Done:
                        Created Project
                        Added code for struct, math function, player inputs, outputs of values, and outputs of distance
                        Added pseudocode and comments
                        Got help from Dhanasri
                        Tested code
                        Pushed to GitHub
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
#include <math.h>
using namespace std;

//distance = sqrt ((y2-y1)^2 + (x2 - x1)^2)

struct Point
{
    float x, y;
};


float distance(Point p1, Point p2)
{
    float dist;
    float changex;
    float changey;
    float changex_;
    float changey_;
    float changexy;

    changey = p2.y - p1.y;
    changex = p2.x - p1.x;
    changex_ = changex * changex;
    changey_ = changey * changey;
    changexy = changey_ + changex_;
    dist = sqrt(changexy);
   
    return dist;
}

int main()
{
    Point p1, p2;    

    printf("This program will calculate the distance between two points on a graph\n");
    
    printf("\nPlease input x-coordinate of Point 1\n");
    printf(">");
    scanf_s("%f", &p1.x);
    fseek(stdin, 0, SEEK_END);

    printf("\nPlease input y-coordinate of Point 1\n");
    printf(">");
    scanf_s("%f", &p1.y);
    fseek(stdin, 0, SEEK_END);

    printf("\nPlease input x-coordinate of Point 2\n");
    printf(">");
    scanf_s("%f", &p2.x);
    fseek(stdin, 0, SEEK_END);

    printf("\nPlease input y-coordinate of Point 2\n");
    printf(">");
    scanf_s("%f", &p2.y);
    fseek(stdin, 0, SEEK_END);

    printf("\nYour point values:\n\tPoint 1\n\tx: %f\n\ty: %f\n\tPoint 2\n\tx: %f\n\ty: %f\n", p1.x, p1.y, p2.x, p2.y);

    float d = distance(p1, p2);
    printf("\nDistance: %.3f\n", d);

    _getch();
    return 0;
}

