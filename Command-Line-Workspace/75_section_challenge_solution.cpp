/*
 * Author: Matt Johnson
 * Subject: section challenge solution
 * Purpose:
 * Date: 06/06/2023
 *
 * Requirements:
 *
 * 	- Write a program that asks the user to enter the following:
 *
 * 	- Type an integer representing the number of cents
 * 		+ You may assume that the number of cents entered is
 * 		  greater than or equal to zero
 *
 * 	- The program should display how to provide that change
 *	  to the user
 *
 *	- In the United States:
 *		1 dollar is 100 cents
 *		1 quarter is 25 cents
 *		1 dime is 10 cents
 *		1 nickel is 5 cents
 *		1 penny is 1 cent
 *
 *	- Here is a sample run:
 *
 *	  Enter an amount in cents: 92
 *
 *	  You can provide this change as follows:
 *
 *	  dollars: 0
 *	  quarters: 3
 *	  dimes: 1
 *	  nickels: 1
 *	  pennies: 2
 *
 *	- Hint: Try using the modulo operator
 */

#include <iostream>

using namespace std;

int main(void) {

	int cents {};
	int dollars {100}, dollar_remainder {}, dollars_change {};
	int quarters {25}, quarter_remainder {}, quarters_change {};
	int dimes {10}, dime_remainder {}, dimes_change {};
	int nickels {5}, nickel_remainder {}, nickels_change {};
	int pennies {1}, pennies_change {};

	cout << "Enter an amount in cents: ";
	cin >> cents;

	cout << "You can provide change for these coins as follows: " << endl;

	dollar_remainder = cents % dollars;
	dollars_change = cents / dollars;
	cout << "dollars: " << dollars_change << endl;

	quarter_remainder = dollar_remainder % quarters;
	quarters_change = dollar_remainder / quarters;
	cout << "quarters: " << quarters_change << endl;

	dime_remainder = quarter_remainder % dimes;
	dimes_change = quarter_remainder / dimes;
	cout << "dimes: " << dimes_change << endl;

	nickel_remainder = dime_remainder % nickels;
	nickels_change = dime_remainder / nickels;
	cout << "nickels: " << nickels_change << endl;

	pennies_change = nickel_remainder / pennies;
	cout << "pennies: " << pennies_change << endl;

	cout << endl;
	return 0;
}
