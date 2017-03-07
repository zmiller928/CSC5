/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Calculate BMR for Males and Females
 * Created on March 7, 2017, 11:59 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //Variables
    char sex;                       //Male or Female
    unsigned short ht, wt, age;     //height(in), weight(lbs), age(yrs)
    unsigned char cdyCal = 230;     //Candy bar calories
    float bmr;                      //Basic Metabolic Rate (calories)
    int nCdyBrs;                    //Number of candy bars we can eat
    
    //Input data
    cout << "This program calculates the number of candy bars allowed"
            "per day based upon your BMR" << endl;
    cout << "Type in your Sex (M/F), Weight (lbs), Height (in), "
            "Age (Years)" << endl;
    cout << "Inputs are integer based" << endl;
    cin >> sex >> wt >> ht >> age;
    
    //Process data
    bmr = (sex == 'M')?
        66 + 6.3f * wt + 12.9f * ht - 6.8f * age:
        655 + 4.3f * wt + 4.7f * ht - 4.7f * age;
    
    nCdyBrs = static_cast<int>(bmr/cdyCal);
    
    //Output
    cout << "The number of candy bars you can eat = " << nCdyBrs << endl;
    
    
    
    return 0;
}

