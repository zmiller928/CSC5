/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: calculate the average of 5 test takers
 *
 * Created on March 3, 2017, 5:16 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    
    float   testA,      //Test A score
            testB,      //Test B Score
            testC,      //Test C Score
            testD,      //Test D Score
            testE,      //Test E Score
            testAvg;    //Test score average
    
    cout << "This program asks for 5 test scores and averages them together" << endl;
    cout << "What is the 1st test score?" << endl;
    cin >> testA;
    cout << "What is the 2nd test score?" << endl;
    cin >> testB;
    cout << "What is the 3rd test score?" << endl;
    cin >> testC;
    cout << "What is the 4th test score?" << endl;
    cin >> testD;
    cout << "What is the 5th test score?" << endl;
    cin >> testE;
    
    testAvg = (testA + testB + testC + testD + testE) / 5;
    
    cout << setprecision(1) << showpoint << fixed;
    cout << "Test Scores & Average" << endl;
    cout << "_____________________" << endl;
    cout << "Test #1 Score = " << testA << endl;
    cout << "Test #2 Score = " << testB << endl;
    cout << "Test #3 Score = " << testC << endl;
    cout << "Test #4 Score = " << testD << endl;
    cout << "Test #5 Score = " << testE << endl;
    cout << "_____________________" << endl;
    cout << "Test Score Average = " << testAvg;

    return 0;
}

