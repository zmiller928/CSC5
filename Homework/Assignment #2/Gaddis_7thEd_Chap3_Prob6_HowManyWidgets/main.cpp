/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: To calculate and display the number 
 *          of widgets stacked on a pallet
 * Created on March 4, 2017, 3:50 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

const float WIDGET = 9.2f;       //Weight per widget (lbs)

int main(int argc, char** argv) {
    float   pltLbs,     //weight per pallet (lbs)
            totalW,     //Total weight pallet + widgets (lbs)
            widTot;     //Number of widgets on the pallet after calculation
    
    //Input and output asking the weights of a single pallet and that pallet + all widgets.
    cout << "How much does the pallet weigh in pounds (lbs)?" << endl;
    cin >> pltLbs;
    cout << "How much does the pallet included all widgets weight? (lbs)" << endl;
    cin >> totalW;
    
    //Calculation of widgets on pallet
    widTot = (totalW - pltLbs) / WIDGET;
    
    //Output of final answer
    cout << "There are a total of " << widTot << " widgets on the pallet." << endl;

    return 0;
}

