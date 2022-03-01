//added code for project
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

    Pseudocode:         rectangle.h
                        Headers
                        Rectangle and its elements declared
                        Method to set dimensions of rectangle
                        Variables
                        Dimensions

                        rectangle.cpp
                        Header
                        l and w set to 0
                        l and w set to length and width
                        l and w set to R's dimensions
                        Set again
                        Length and width returned
                        Perimeter and area returned

                        rectangleclass.cpp
                        Headers
                        Rectangle R declared
                        Dimensions set to float values
                        Perimeter and area included
                        Values printed

    Maintenance Log:
    Date: 3/1/22        Done:
                        Created project
                        Added code for project
                        Fixed errors
                        Added pseudocode
                        Pushed to GitHub
*/
#include <iostream> 
#include <stdio.h>
#include <conio.h>
#include "rectangle.h"
using namespace std;

int main()
{
    rectangle R;
    R.setDimensions(4, 6);
    R.perimeter();
    R.area();
    printf("length = %f\n", R.getL());
    printf("width = %f\n", R.getW());
    printf("perimeter = %f\narea = %f\n", R.perimeter(), R.area());


    return 0;
}