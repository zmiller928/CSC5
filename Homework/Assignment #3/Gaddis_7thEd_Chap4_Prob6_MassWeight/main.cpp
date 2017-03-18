/*
 * Mass and Weight
 * 
 * Scientists measure an object's mass in kilograms and its weIght in newtons.
 * If you know the amount of mass that an object has, you can calculate its weight,
 * in newtons with the following formula:
 * 
 * weight = mass x 9.8
 * 
 * Write a program that asks the user to enter an object's mass, and then calculates and
 * displays its weight. If the object weighs more than 1,000 newtons, display a message
 * indicating that it is too heavy. If the object weighs less than 10 newtons,
 * display a message indicating that the object is too light.
 */

/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Created on March 12, 2017, 1:51 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int     weight,     //Weight in newtons
            mass;       //Mass of an object
    
    cout << "This program calculates the weight of an object" << endl;
    cout << "Enter the object's mass:" << endl;
    cin >> mass;
    
    weight = mass * 9.8;
    
    cout << "The object weighs " << weight << " newtons." << endl;
    if (weight >= 10 || weight <= 1000) {
        cout << "The object is neither to heavy or light." << endl;
    } else if (weight < 10) {
        cout << "The object is to light." << endl;
    } else {
        cout << "The object is to heavy." << endl;
    }
            

    return 0;
}

