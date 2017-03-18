/*
 * Math Tutor
 * 
 * This is a modification of the Programming Challenge 15 from chapter 3. Write a
 * program that can be used as a math tutor for a young student. The program should
 * display two random numbers that are to be added, such as:
 * 
 *   247 
 * + 149
 *  _____
 * 
 * The program should wait for the student to enter the answer. If the answer is correct,
 * a message of congratulations should be printed. If the answer is incorrect, a message
 * should be printed showing the correct answer.
 * 
 */
        
/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Created on March 17, 2017, 3:27 PM
 */

#include <iostream>
#include <cstdlib>


using namespace std;

int main(int argc, char** argv) {
    
    unsigned int num1, num2, answ, sum;
    unsigned seed = time(0);       //Seed generator
    
    //Initializing num1 & num2 with random numbers
    srand(seed);
    num1 = 100 + rand() % 50;
    num2 = 100 + rand() % 50;
    
    //Displaying the two random numbers for the addition problem
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "______" << endl;
    cout << " " << endl;
    
    sum = num1 + num2;
    
    cout << "Please enter the sum of these two values." << endl;
    cin >> answ;
    
    if (sum == answ) {
        cout << "Congratulations, that is the correct answer!" << endl;
    } else {
        cout << "Sorry, that is incorrect" << endl;
        cout << "The correct answer is " << sum << "." << endl;
    }

    return 0;
}

