/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Menu to be utilized on homework #4
 * Created on March 23, 2017, 12:06 PM
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    
    //Declare variables
    int choice;
    
    //Show menu and loop
    do {
        //Display menu
        cout << endl << "Type 0 to exit" << endl;
        cout << "Type 1 for 'Sum of Numbers'" << endl;
        cout << "Type 2 for 'Sum Float Error'" << endl;
        cout << "Type 3 for 'Characters for the ASCII Codes'" << endl;
        cout << "Type 4 for 'Ocean Levels'" << endl;
        cout << "Type 5 for 'Calories Burned'" << endl;
        cout << "Type 6 for 'Membership Fee Incrase'" << endl;
        cout << "Type 7 for 'Distance Traveled'" << endl;
        cout << "Type 8 for 'Pennies for Pay'" << endl;
        cout << "Type 9 for 'Math Tutor'" << endl;
        cout << "Type 10 for 'Hotel Occupancy'" << endl;
        cout << "Type 11 for 'Average Rainfall'" << endl;
        cout << "Type 12 for 'Population'" << endl;
        cout << "Type 13 for 'Celsius to Fahrenheit'" << endl;
        
        
        //Input choice
        cin >> choice;
        cout << endl;
        
        //Place solutions to problems in switch statement
        switch(choice) {
            case 1: {
            unsigned int  inqVar,    //Inequality comparison variable
                          sum = 0;


            cout << "This program returns the sum of all integers from 1" << endl;
            cout << "up to the number you entered." << endl;
            cout << "Please enter a positive integer" << endl;
            cin >> inqVar;

            if (inqVar > 0) {     //Input validation to make sure number entered is positive
                for (int num = 1; num <= inqVar; num++) {
                    sum += num;
                }
                cout << "The sum of the integers from 1 up to "
                     << inqVar << " = " << sum << "." << endl;
            }
            break;
            }
            case 2: {
                //Declare and initialize variables
                //Make sure 0 <= n <= 40000
                int nLoop = 10000000;
                float sum = 0.0f, frac = 0.1f;

                //Map inputs to outputs or process the data
                for (int i=1; i<=nLoop; i++){
                    sum += frac;
                }

                //Output the transformed data
                cout << "The computer sum of "
                        << frac << "->" << nLoop << " times = " << sum << endl;
                cout << "Simple multiplication of "
                        << frac << "x" << nLoop << " = " << frac * nLoop << endl;
                cout << "Error = " << (frac*nLoop-sum)/(frac*nLoop)*100
                        << "%" << endl;
                
                break;
            }
            case 3: {
    
                int     test,
                        begin = 32;

                for (int row = 0; row < 6; row++) {
                    test = begin + 16;
                    for (int ASCII = begin; ASCII < test; ASCII++) {
                        cout << static_cast<char>(ASCII) << " ";
                    }
                    begin = test;
                    cout << endl;
                }
                break;
            }
            case 4: {
                int year;
                float ocnRise = 0.0f;

                cout << "Table displaying the number of millimeters that the ocean\n"
                     << "will have risen each year for the next 25 years.\n\n"
                     << "   Year         Amount Risen\n"
                     << "                (millimeters)\n"
                     << "-----------------------------\n";

                for (year = 1; year <= 25; year++){
                    ocnRise += 1.5;
                    cout << right << fixed << showpoint << setprecision(1)
                         << setw(7) << year << setw(16) << ocnRise << endl;  
                }
                break;
            }
            case 5: {
                const float CALS = 3.9f;
                int min, burnt = 0;
    
                cout << "Table displaying number of calories burnt on a\n"
                     << "treadmill that burns 3.9 calories per minute.\n\n"
                     << "     Minutes Ran      Calories Burnt\n"
                     << "---------------------------------------------\n";

                for (min = 10; min <= 30; min += 5) {
                    burnt = min * CALS;
                    cout << "         " << min << "               " << burnt << endl;
                }
                break;
            }
            case 6: {
                float perInc = 0.04f,       //% increase per year
                yrCost= 0;                     //Cost after 4% increase

                int cost = 2500,            //Current cost per year
                    year = 0;                   //Number of years

                cout << "Country Club Projections\n"
                        "for the next six years\n"
                        "------------------------\n"
                        "  Year            Cost  \n"
                        "------------------------\n";

                do {
                    year += 1;
                    yrCost = cost * (1 + year * perInc);
                    cout << "     " << year << "           $" << yrCost << endl;
                } while (year >= 1 && year <= 5);  {

                }
                break;
            }
            case 7: {
                int mph,    //Miles Per Hour the vehicle was traveling 
                hrTot,      //Total hours traveled by the vehicle
                dist;       //Distance 
    
                cout << "This program calculates distance traveled based\n";
                cout << "on MPH and hours traveled provided by the user\n\n";

                cout << "Please enter the speed the vehicle was traveling (MPH)" << endl;
                cin >> mph;

                //Input validation for speed
                while (mph <= 0) {
                    cout << "Speed must be a greater than zero. Please try again:";
                    cin >> mph;
                }
                cout << "Please enter the hours traveled: " << endl;
                cin >> hrTot;

                //Input validation for hours
                while (hrTot < 1) {
                    cout << "Hours must be greater or equal to one. Please try again: ";
                    cin >> hrTot;
                }

                cout << endl;
                cout << "Hour    Distance Traveled\n";
                cout << "-------------------------\n";

                for (int hrs = 1; hrs <= hrTot; hrs++) {
                    dist = mph * hrs;
                    cout << " " << hrs << "            " << dist << endl;
                }
                break;
            }
            case 8: {
                int numDays = 0;
                float money = 1.0f,     //1 penny
                      total = 0.0f,
                      dayPay = 0.0f;  
                
                cout << "This program calculates you receiving only 1 penny\n"
                        "on day one, and it doubling every subsequent day.\n"
                        "and calculates your total earnings\n";
                cout << "Enter number of days: ";
                cin >> numDays;
                cout << endl;

                //Input validation
                while (numDays < 1) {
                    cout << "Please enter valid number of days\n";
                    cin >> numDays;      
                }

                cout << "Day\t" << "Salary\n";
                cout << "--------------------" << endl;

                for (int i = 1; i <= numDays; i++) {
                    dayPay = money / 100;                           //Converting pennies to dollars
                    cout << i << "\t$" << dayPay << "\n";           //Outputting every iteration 
                    total += dayPay;                                //Adding all day pays into a total
                    money *= 2;                                     //Doubling of pennies each day
                }
                cout << endl;
                cout << "Total earnings are $" << total << endl;
                break;
            }
            case 9: {
                char choice;
    
                cout << "This program allows the user to select an addition, subtraction,\n"
                        "multiplication, or division problem to solve.\n\n";

                do {
                    cout << "Type 0 to exit the program\n"
                            "Type 1 for a addition problem\n"
                            "Type 2 for a subtraction problem\n"
                            "Type 3 for a multiplication problem\n"
                            "Type 4 for a division problem\n";

                    cout << "Please choose your problem (1-4): \n";
                    cin >> choice; 
                    cout << endl;

                    switch(choice) {
                        case '1': {
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
                                cout << "Congratulations, that is the correct answer!\n" << endl;
                            } else {
                                cout << "Sorry, that is incorrect" << endl;
                                cout << "The correct answer is " << sum << "." << endl;
                            }
                            break;
                        }
                        case '2': {
                            int num1, num2, answ, diff;
                            unsigned seed = time(0);       //Seed generator

                            //Initializing num1 & num2 with random numbers
                            srand(seed);
                            num1 = 100 + rand() % 50;
                            num2 = 100 + rand() % 50;

                            //Displaying the two random numbers for the subtraction problem
                            cout << "  " << num1 << endl;
                            cout << "- " << num2 << endl;
                            cout << "______" << endl;
                            cout << endl;

                            diff = num1 - num2;

                            cout << "Please enter the difference of the two values." << endl;
                            cin >> answ;

                            if (diff == answ){
                                cout << "Congratulations, that is the correct answer!\n" << endl;
                            } else {
                                cout << "Sorry, that is incorrect" << endl;
                                cout << "The correct answer is " << diff << "." << endl;
                            }
                            break;
                        }
                        case '3': {
                            unsigned int num1, num2, answ, finAns;
                            unsigned seed = time(0);       //Seed generator

                            //Initializing num1 & num2 with random numbers
                            srand(seed);
                            num1 = 10 + rand() % 50;
                            num2 = 10 + rand() % 5;

                            //Displaying the two random numbers for the subtraction problem
                            cout << "  " << num1 << endl;
                            cout << "* " << num2 << endl;
                            cout << "_____" << endl;
                            cout << endl;

                            finAns = num1 * num2;

                            cout << "Please enter the product of the two values." << endl;
                            cin >> answ;

                            if (finAns == answ){
                                cout << "Congratulations, that is the correct answer!\n" << endl;
                            } else {
                                cout << "Sorry, that is incorrect" << endl;
                                cout << "The correct answer is " << finAns << "." << endl;
                            }
                            break;
                        }
                        case '4': {
                            float num1, num2, answ, finAns;
                            unsigned seed = time(0);       //Seed generator

                            //Initializing num1 & num2 with random numbers
                            srand(seed);
                            num1 = 10 + rand() % 50;
                            num2 = 1 + rand() % 5;

                            //Displaying the two random numbers for the subtraction problem
                            cout << "  " << num1 ;
                            cout << " / " << num2;
                            cout << " = " << endl;
                            cout << endl;

                            finAns = num1 / num2;

                            cout << "Please enter the dividend of the two values." << endl;
                            cout << "If the answer has a remainder, enter two digits after "
                                    "the decimal place.\n";
                            cin >> answ;

                            if (finAns == answ){
                                cout << "Congratulations, that is the correct answer!\n" << endl;
                            } else {
                                cout << "Sorry, that is incorrect" << endl;
                                cout << "The correct answer is " << setprecision(2) << fixed << finAns << "." << endl;
                            }
                            break;
                        } default: {
                            cout << "Thank you for playing the math tutor game!" << endl;
                        }
                    }
                } while (choice >= '1' && choice <= '4'); {   
                }
                break;
            }
            case 10: {
                int floors;         //Number of floors the hotel has
                int rooms;          //Rooms per floor
                int occu;           //Number of rooms occupied
                int empty;          //Number of empty rooms in the hotel

                float perUn = 0.0f;     //Percentage of rooms unoccupied
                float rTotal = 0.0f;    //Total rooms in the hotel
                float oTotal = 0.0f;    //Total rooms occupied

                cout << "This program calculates the occupancy rate for a hotel.\n\n";
                cout << setprecision (6);
                //Asking users to enter the number of floors
                cout << "Please enter the number of floors the hotel has: ";
                cin >> floors;

                //Input validation
                while (floors < 1) {
                    cout << "Please enter a value greater or equal to 1: ";
                    cin >> floors;        
                }

                for (int i = 1; i <= floors; i++) {

                    if (i != 13) {

                        cout << "Please enter the number of rooms on floor " << i << ": ";
                        cin >> rooms;

                        //Input validation to make sure there are at least 10 rooms per floor
                        while (rooms < 10) {
                            cout << "Minimum rooms per floor has to be 10. Please enter a"
                                    "number greater or equal to 10.\n";
                            cin >> rooms;
                        }

                        cout << "How many of the rooms are occupied: ";
                        cin >> occu;

                        //Input validation to make sure occupied rooms aren't greater than
                        //Rooms on the floor
                        while (occu > rooms) {
                            cout << "Please enter a valid input. Occupied rooms cannot\n"
                                    "be greater than the number of rooms on the floor\n";
                            cin >> occu;
                        }

                        rTotal += rooms;
                        oTotal += occu;
                    }

                    perUn = (oTotal / rTotal) * 100.0f; //Calculates percentage of unoccupied rooms
                    empty = rTotal - oTotal;            //Calculates empty rooms in the hotel
                }

                //Outputs
                cout << setprecision(6) << endl;
                cout << "The hotel has " << floors << " floors total.\n";
                cout << "The hotel has " << rTotal << " rooms total.\n";
                cout << "The hotel has " << oTotal << " occupied rooms\n";
                cout << "The hotel has " << empty << " rooms available\n";
                cout << "The hotel has " << perUn << "% occupancy.\n";
                break;
            }
            case 11:{
                const int MONTHS = 12;    //Months per year
                int numYears;             //Number of years
                float inRain;             //Inches of rain per month
                float tRain;               //Total inches of rainfall 

                cout << "This program calculates average rainfall over a given period.\n\n";
                cout << "Please enter a number of years to calculate average rainfall: ";
                cin >> numYears;

                //Input validation checking to make sure 
                //Checking if years is < 1
                while (numYears < 1) {
                    cout << "Please enter a valid entry. Years must be 1 or greater: ";
                    cin >> numYears;
                }

                //Outer loop for years
                for (int i = 1; i <= numYears; i++) {

                    //Inner loop for months and rainfall per month
                    for (int months = 1; months <= MONTHS; months++) {
                        cout << "How many inches of rain were there in month #" << months << ": ";
                        cin >> inRain;

                        //Input validation
                        //Checking inches of rain is < 0
                        while (inRain < 0) {
                            cout << "Please enter a valid input. Rainfall has to be greater than\n"
                                    "or equal to 0. Please re-enter: ";
                            cin >> inRain;
                        }

                        tRain += inRain;
                    }
                }

                //Outputs
                cout << "\nNumber of months: " << numYears * MONTHS << endl;
                cout << "Total inches of rainfall: " << setprecision(2) << fixed 
                        << tRain << endl;
                cout << "Average rainfall: " << setprecision(2) << fixed <<
                         tRain / (numYears * MONTHS) << " inches." << endl;
                break;    
            }
            case 12: {
                int nOrgs = 0;      //Number of organisms
                int days = 0;       //Days they will multiply
                int tPop = 0;       //Total population
                int pop = 0;        //Average population
                float perInc = 0.0f;   //Percentage increase of population


                cout << "This program will predict the size of a population\n\n";

                cout << "Please enter the current number of organisms: ";
                cin >> nOrgs;

                //Input validation
                //Checks if nOrgs is < 2
                while (nOrgs < 2) {
                    cout << "Number of organisms must be greater or equal to 2\n"
                            "Please re-enter: ";
                    cin >> nOrgs;
                }

                cout << "Please enter the increase in population (percentage): ";
                cin >> perInc;

                //Input validation
                //Checks if perInc is < 0 percent
                while (perInc < 0) {
                    cout << "Percentage increase cannot be negative.\n"
                            "Please re-enter: ";
                    cin >> perInc;
                }

                cout << "Please enter the number of days they will multiply: ";
                cin >> days;

                //Input validation
                //Checks if days is < 1
                while (days < 1) {
                    cout << "Number of days to multiply must be greater or equal to 1\n"
                            "Please re-enter: ";
                    cin >> days;
                }
                cout << endl;

                for (int i = 1; i <= days; i++) {
                    pop = (nOrgs * (perInc/100)) + nOrgs;
                    tPop += pop;
                    cout << "The population for day #" << i << " is = " << tPop << endl; 
                }
                break;    
            }
            case 13: {
                int c;  //Celsius temperature
                int f;  //Fahrenheit temperature

                cout << "Celsius    Fahrenheit" << endl;
                cout << "----------------------" << endl;

                for (c = 1; c <= 20; c++) {
                    f = c * 9.0/5.0 + 32.0;
                    cout << "   " << c << "\t       " << f << endl;
                }
                break;    
            }
            default: {
                cout << "Have a great day!" << endl;
            }
        }
        
    } while(choice >= 1 && choice <= 13); {  
    }

    return 0;
}

