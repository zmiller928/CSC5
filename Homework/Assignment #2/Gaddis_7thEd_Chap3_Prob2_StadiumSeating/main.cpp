/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Displays the amount of income was generated from ticket sales
 * Created on March 3, 2017, 4:29 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    
    float   clsA = 15.00,      //class a ticket cost
            clsB = 12.00,      //class b ticket cost
            clsC = 9.00,       //class c ticket cost
            aTics,          //class a tickets sold
            bTics,          //class b tickets sold
            cTics,          //class c tickets sold
            incA,           //income for Class A tickets
            incB,           //income for Class B tickets
            incC,           //income for class C tickets
            income;         //total income from ticket sales
    
    cout << "This program prompts users to enter "
            "how many tickets were sold per class type "
            "and figures out how much income is generated" << endl;
    cout << "How many Class A tickets were sold?" << endl;
    cin >> aTics;
    cout << "How many Class B tickets were sold?" << endl;
    cin >> bTics;
    cout << "How many Class C tickets were sold?" << endl;
    cin >> cTics;
    
    incA = aTics * clsA;            //figuring out income for class a tickets
    incB = bTics * clsB;            //figuring out income for class b tickets
    incC = cTics * clsC;            //figuring out income for class c tickets
    income = incA + incB + incC;    //total of class a, b, and c ticket sales
    
    cout << "Sales Figures" << endl;
    cout << "_____________" << endl;
    cout << endl;
    cout << setprecision (2) << showpoint << fixed;  //Formatting -- two decimal places to the right
    cout << "Income generated from Class A tickets = $" << incA << endl;
    cout << "Income generated from Class B tickets = $" << incB << endl;
    cout <<  "Income generated from Class C tickets = $" << incC << endl;
    cout <<  "Total tickets sales = $" << income << endl;
  
    return 0;
}

