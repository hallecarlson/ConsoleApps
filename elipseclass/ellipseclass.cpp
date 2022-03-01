// ellipseclass.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS12-01 (ellipse class)
    File Name:      ellipseclass.cpp
    Purpose:        Write a class called ellipse and a program that tests the class. The class must have 
                    the required element (instance variables) of an ellipse (r1, r2). The class must also 
                    have a default constructor, methods to set the radii, methods to get each radius, a 
                    circumference method, and an area method. The circumference and area methods must return 
                    the ellipse’s circumference and area. Use the compiler’s built-in definition of PI in 
                    your code (remember the includes shown below, then you can use M_PI for Pi). Notes: The 
                    area of an ellipse is Pi * r1 * r2. The circumference of an ellipse is approximately 
                    2 * Pi * sqrt (r1 * r2) according to Johannes Kepler.

    Pseudocode:        

    Maintenance Log:
    Date: 2/28/22       Done:
                        Created project
                        Added code for project
                        Pushed to GitHub

                        Pulled from GitHub
                        Got help from Ryan Carlson
                        Added code for project
                        Pushed to GitHub
*/
#include <iostream> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>
#include "ellipse.h"

int main()
{
    ellipse E;
    E.setRadius(3.0);
    printf("r1 = %f\n", E.getRadius1());
    printf("r2 = %f", E.getRadius2());
    E.circumference();
    E.area();

    return 0;
}