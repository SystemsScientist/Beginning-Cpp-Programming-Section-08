/*
 *  Author: Matt Johnson
 *  Subject: fahrenheit to celsius
 *  Purpose: compute and display celsius temperature
 *  Date: 06/02/2023
 * 
 *  Formula = (32F - 32) * (5/9) = 0
 * 
 *  Requirements:
 * 
 *          1. Initialize variables
 *          2. Display "Welcome to the Fahrenheit to Celsius Converter"
 *          3. Prompt user
 *          4. Calculate formula
 *          5. Display Celsius temperature
 */

#include <iostream>

using namespace std;

int main(void) {
    
    double fahrenheit {0.0};
    double celsius {0.0};
    
    const double ratio_change {0.555555556};
    
    cout << "Welcom to the Fahrenheit to Celsius Converter" << endl;
    cout << "Please enter your temperature in Fahrenheit degress: ";
    cin >> fahrenheit;
    
    celsius = (fahrenheit - 32.0) * (ratio_change);
    cout << "\nThe temperature is " << celsius << " degrees Celsius" << endl;
    
    cout << endl;
    return 0;
}
