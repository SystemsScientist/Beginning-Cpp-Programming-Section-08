/*
 * Author: Matt Johnson
 * Subject: assignment operator
 * Purpose: program illustrates assignment operator
 * Date: 05/21/2023
 *
 * Notes:
 *
 * 	- Initialization equals declaration plus assignment
 * 	- assignment can occur in at least two situations
 *		+ first, assignment occurs during the initialization process
 *		+ second, assignment occurs when a new value is assigned to
 *		  a variable
 *	- print variables to test and see how the values change through the
 *	  program
 */

#include <iostream>

using namespace std;

int main(void) {

	// initialize variables
	int num1 {10};
	int num2 {20};

	cout << "num1 is " << num1 << endl;
	cout << "num2 is " << num2 << endl;

	num1 = 100;		// 100 is assigned to num1
	cout << "\nnum1 is " << num1 << endl;
	cout << "num2 is " << num2 << endl;

	num1 = num2;		// num2 is assigned to num1
	cout << "\nnum1 is " << num1 << endl;
	cout << "num2 is " << num2 << endl;

	num1 = num2 = 1000;	// chain assignments
	cout << "\nnum1 is " << num1 << endl;
	cout << "num2 is " << num2 << endl;

	cout << endl;
	return 0;
}
