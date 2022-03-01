// righttriangleclass.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS12-03 (right triangle class)
    File Name:      righttriangleclass.cpp
    Purpose:        Write a class called triangle and a program that tests the class. The class must have the required elements (instance variables) of a right triangle (base and height). The class must also have a default constructor, a method(s) to set the instance variables, a method(s) to get the instance variables, a perimeter method, and an area method. The perimeter and area methods must return the rectangle’s perimeter and area. (Hint: Do not make a class variable for the hypotenuse. Calculate it where you need it - in the perimeter method. If you would like to add a method to return the hypotenuse, you can add it to the class and use it to find your perimeter.)

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