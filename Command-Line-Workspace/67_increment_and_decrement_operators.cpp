/*
 * Author: Matt Johnson
 * Subject: increment and decrement operators
 * Purpose: 
 * Date: 06/02/2023
 *
 * Notes:
 *
 * 	- increment operator ++
 * 	- decrement operator --
 *
 * 	- increments or decrements its operand by 1
 * 	- can be used with integers, floating-point types and pointers
 *
 * 	- prefix ++num
 * 	- postfix num++
 *
 * 	- don't oversue this operator
 * 	- ALERT!!! never use it twice for the same variable in the same
 * 	  statement
 */

#include <iostream>

using namespace std;

int main(void) {

	int counter{10};
	int result{0};

	// Example 1 - simple increment
	cout << "Counter: " << counter << endl;

	counter = counter + 1;
	cout << "Counter: " << counter << endl;

	counter++;
	cout << "Counter: " << counter << endl;

	++counter;
	cout << "Counter: " << counter << endl;

	// Example 2 - pre-increment
	counter = 10;
	result = 0;

	cout << "\nCounter: " << counter << endl;
	result = ++counter; // note the pre-increment
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;

	// Example 3 - post-increment
	counter = 10;
	result = 0;

	cout << "\nCounter: " << counter << endl;
	result = counter++; // note the post increment
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;

	// Example 4
	counter = 10;
	result = 0;

	cout << "\nCounter: " << counter << endl;
	result = ++counter + 10; // note the pre-increment, i.e., increment before
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;

	// Example 5
	counter = 10;
	result = 0;

	cout << "\nCounter: " << counter << endl;
	result = counter++ + 10; // note the post-increment, i.e., increment after
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;

	return 0;
}
