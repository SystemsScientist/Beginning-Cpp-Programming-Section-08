/*
 *  Author: Matt Johnson
 *  Subject: arithmetic operators
 *  Purpose: execute arithmetic operators
 *  Date: 05/31/2023
 * 
 *  Notes:
 * 
 *          - use ' + ' for addition
 *          - use ' - ' for subtraction
 *          - use ' * ' for multiplication
 *          - use ' / ' for division
 *          - use ' % ' for modulo or remainder (only works with integers)
 * 
 *          - +, -, * and / operators are overloaded to work with multiple
 *             multiple types such as int, double, etc.
 *          - % only with integer types
 */

#include <iostream>

using namespace std;

int main(void) {
    
    int num1 {200};
    int num2 {100};
    
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    
    int result {0};
    
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
    
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;
    
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
    
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;
    
    result = num2 / num1;
    cout << num2 << " / " << num1 << " = " << result << endl;
    
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    // overwrite num1 and num2
    num1 = 10;
    num2 = 3;
    
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    result = num1 * 10 + num2;
    cout << result << endl;
    
    cout << 5 / 10 << endl;
    cout << 5.0 / 10.0 << endl;
    
    cout << endl;
    return 0;
}
