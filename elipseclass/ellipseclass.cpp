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

    Pseudocode:         ellipse.h
                        Headers
                        Ellipse and its elements declared
                        Method to set radius of ellipse
                        Variables
                        Radii

                        ellipse.cpp
                        Header
                        r1 and r2 set to 0
                        r1 and r2 set to rad1 and rad2
                        r1 and r2 set to E's radii
                        Set again
                        Radii returned
                        Circumference and area returned

                        ellipseclass.cpp
                        Headers
                        Ellipse E declared
                        Radii set to float values
                        Circumference and area included
                        Values printed

    Maintenance Log:
    Date: 2/28/22       Done:
                        Created project
                        Added code for project
                        Pushed to GitHub

                        Pulled from GitHub
                        Got help from Ryan Carlson
                        Added code for project
                        Pushed to GitHub

    Date: 3/1/22        Done:
                        Pulled from GitHub
                        Folowed Mr. Miyoshi's tutorial to fix errors & add code
                        Got help from Mr. Miyoshi
                        Fixed an error
                        Tested code
                        Pushed to GitHub
                        Added pseudocode
                        Pushed to GitHub
*/
#include <iostream> 
#include <stdio.h>
#include <conio.h>
#include "ellipse.h"
using namespace std;

int main()
{
    ellipse E;
    E.setRadii(3.7, 7.3);
    E.circumference();
    E.area();
    printf("r1 = %f\n", E.getR1());
    printf("r2 = %f\n", E.getR2());
    printf("circumference = %f\narea = %f\n", E.circumference(), E.area());
    

    return 0;
}