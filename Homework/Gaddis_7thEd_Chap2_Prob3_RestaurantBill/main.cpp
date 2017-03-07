/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Calculate how much you would pay in sales tax and tip 
 * Created on February 24, 2017, 4:05 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    float mealCos = 44.55f; //Cost of the food
    float salesTx = 0.0675f;  //Percent for sales tax
    float tipAm = 0.15f;    //Percent for tip AFTER sales tax was added
    float mealTax, taxTip;   //Meal cost + taxes & meal cost + tax + tip
    
    mealTax = (mealCos * salesTx) + mealCos;
    taxTip = (mealTax * tipAm) + mealTax;
    cout << setprecision(4) << "Meal cost with taxes included = $" << mealTax << endl;
    cout << setprecision(4) << "Full cost with tax and tip included = $" << taxTip << endl;
    
    return 0;
}

