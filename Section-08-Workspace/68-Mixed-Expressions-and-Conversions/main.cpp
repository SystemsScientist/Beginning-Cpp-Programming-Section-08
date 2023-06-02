/*
 *  Author: Matt Johnson
 *  Subject: mixed expressions and conversions
 *  Purpose: 
 *  Date: 06/02/2023
 * 
 *  Notes:
 * 
 *          - ask the user to enter 3 integers
 *          - calculate the sum of the integers 
 *          - calculate the average of the 3 integers
 * 
 *          - display the 3 integers entered
 *              + the sum of the 3 integers
 *              + the average of the 3 integers
 */

#include <iostream>

using namespace std;

int main(void) {
    
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};
    
    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    average = static_cast<double>(total) / count;
    
    cout << "\nThe 3 numbers are: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the 3 numbers is: " << total << endl;
    cout << "The average of the 3 numbers is: " << average << endl;
    
    cout << endl;
    return 0;
}
