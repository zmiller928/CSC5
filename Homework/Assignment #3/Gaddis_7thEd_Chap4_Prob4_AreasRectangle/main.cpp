/*
 * Areas of Rectangles
 * 
 * The area of a rectangle is the rectangle's length times its width.
 * write a program that asks for the length and width of two rectangles.
 * The program should tell the user which rectangle has the greater
 * area, or if the areas are the same.
 */
 

/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Created on March 11, 2017, 4:26 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    float   length1,        //Length of rectangle #1
            length2,        //Length of rectangle #2
            width1,         //Width of rectangle #1
            width2,         //Width of rectangle #2
            area1,          //Area of rectangle #1
            area2;          //Area of rectangle #2
    
    cout << "This program determines which of two rectangles has"
            "the greater area, or if the areas are the same." << endl;
    cout << "Enter the length of rectangle #1" << endl;
    cin >> length1;
    cout << "Enter the width of rectangle #1" << endl;
    cin >> width1;
    cout << "Enter the length of rectangle #2" << endl;
    cin >> length2;
    cout << "Enter the width of rectangle #2" << endl;
    cin >> width2;
    
    area1 = length1 * width1;
    area2 = length2 * width2;
    
    if (area1 == area2) {
        cout << "The area of rectangle #1 and #2 are the same!" << endl;
    } else if (area1 > area2) {
        cout << "The area of rectangle #1 is greater than #2" << endl;
    } else {
        cout << "The area of rectangle #1 is smaller than #2" << endl;
    }
            

    return 0;
}

