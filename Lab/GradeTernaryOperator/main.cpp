/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Grade branching exercise 
 * Created on March 16, 2017, 11:23 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    unsigned short score;   //Integer scores valid from 0-100
    char grade;             
    
    cout << "The program produces a grade from a score input" << endl;
    cout << "The date type used is an integer (0-100)" << endl;
    cout << "Type in the score:" << endl;
    cin >> score;
 
    
    if (!(score >= 0 && score <=100)) {
        cout << "You failed to type an integer between 0 and 100" << endl;
        return 1;     //Use DeMorgans Law to make clearer   
    }
    
    grade = (score >= 90)?'A':
            (score >= 80)?'B':
            (score >= 70)?'C':
            (score >= 60)?'D':'F';
            
    
    cout << "For a score = " << score << " your grade is an " << grade << "." << endl;
    return 0;
}

