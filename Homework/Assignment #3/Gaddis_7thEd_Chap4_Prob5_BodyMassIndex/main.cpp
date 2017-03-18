/*
 * Write a program that calculates and displays a person's body mass index (BMI).
 * The BMI is often used to determine whether a person with a sedentary lifestyle
 * is overweight or underweight for his or her height. A person's BMI is calculated
 * with the following formula:
 * 
 * BMI = weight x 703 / height^2
 * 
 * Where weight is measured in pounds and height is measure in inches. The program
 * should display a message indicating whether the person has optimal weight, is 
 * underweight, or is overweight. A sedentary person's weight is considered to be
 * optimal if his or her BMI is between 18.5 and 25. If the BMI is less than 18.5,
 * the person is considered to be underweight. If the BMI value is greater than 25,
 * the person is considered to be overweight.
 */

/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Created on March 11, 2017, 9:24 PM
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    
    float   height,     //Height in inches
            weight,     //Weight in lbs
            bmi;        //Body Mass Index
    
    cout << "Welcome to the body mass index calculator" << endl;
    cout << "Please enter your height in inches" << endl;
    cin >> height;
    cout << "Please enter your weight in lbs" << endl;
    cin >> weight;
    
    bmi = weight * (703 / pow(height, 2));
    
    if (bmi >= 18.5 && bmi <= 25) {
        cout << "You are considered to be within an optimal weight" << endl;
    } else if (bmi < 18.5) {
        cout << "You are underweight" << endl;
    } else {
        cout << "You are overweight" << endl;
    }
    
    cout << "Your BMI = " << bmi << endl;

    return 0;
}

