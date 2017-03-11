/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Compute sales tax on a $52 with a sales tax of 6%
 * Created on February 24, 2017, 3:39 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    float billTot = 52; //Bill total $52
    float stTax = 0.04; //State tax 4%
    float ctTax = 0.02; //County tax 2%
    float totTax;       //What of the $52 dollars is from taxes
    
    totTax = billTot * (stTax + ctTax);
    
    cout << "Amount of money paid from taxes = $" << totTax << endl;
    
    return 0;
}

