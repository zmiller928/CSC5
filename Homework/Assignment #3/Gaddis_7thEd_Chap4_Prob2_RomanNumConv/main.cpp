
/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: To enter a number in order to determine which roman
 *          numeral it represents
 * Created on March 11, 2017, 4:05 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    short num;  //Number input(1-10)
    
    cout << "Please enter a value 1-10" << endl;
    cin >> num;
    
    switch (num) {
        case 1: cout << "You entered the Roman numeral: I" << endl;
                  break;
        case 2: cout << "You entered the Roman numeral: II" << endl;
                  break;
        case 3: cout << "You entered the Roman numeral: III" << endl;
                  break;
        case 4: cout << "You entered the Roman numeral: IV" << endl;
                  break;
        case 5: cout << "You entered the Roman numeral: V" << endl;
                  break;
        case 6: cout << "You entered the Roman numeral: VI" << endl;
                  break;
        case 7: cout << "You entered the Roman numeral: VII" << endl;
                  break;
        case 8: cout << "You entered the Roman numeral: VIII" << endl;
                  break;
        case 9: cout << "You entered the Roman numeral: IX" << endl;
                  break;
        case 10: cout << "You entered the Roman numeral: X" << endl;
                  break;
        default: cout << "Not a valid entry: Please enter a number 1-10" << endl;
    } 
    

    return 0;
}

