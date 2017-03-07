/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Calculate the percentage of revenue that is earned 
 *          from tickets sales for a particular movie title
 * Created on March 4, 2017, 2:33 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const float ADPRI = 6.0f;   //Adult ticket price
const float CHPRI = 3.0f;   //Child ticket price

int main(int argc, char** argv) {
    string  mvName;         //Movie name
    
    float   adTics,         //Adult tickets sold
            chTics,         //Child tickets sold
            adTotal,        //Adult ticket sales in $'s
            chTotal,        //Child ticket sales in $'s
            grProf,         //Gross box office profit
            netProf,        //Net box office profit (Gross * 20%)
            paidDis;        //Paid to distributor 
            
    cout << "What is the title of the movie?" << endl;
    cin >> mvName;
    cout << "How many adult tickets were sold?" << endl;
    cin >> adTics;
    cout << "How many child tickets were sold?" << endl;
    cin >> chTics;
    
    adTotal = ADPRI * adTics;       //Adult ticket calculation
    chTotal = CHPRI * chTics;       //Child ticket calculation
    grProf = adTotal + chTotal;     //Gross profit calculation
    netProf = grProf * 0.2;         //Net profit calculation
    paidDis = grProf - netProf;     //Amount given to distributor 
    
    
    cout << "Movie Name: \t\t\t" << "\"" << mvName << "\"" <<endl;
    cout << "Adult tickets sold: \t\t" << adTics << endl;
    cout << "Child tickets sold: \t\t" << chTics << endl;
    cout << "Gross Box Office Profit:\t" << "$" << grProf << endl;
    cout << "Net Box Office Profit:\t\t$" << netProf << endl;
    cout << "Amount Paid to Distributor: \t$" << paidDis << endl;

    return 0;
}

