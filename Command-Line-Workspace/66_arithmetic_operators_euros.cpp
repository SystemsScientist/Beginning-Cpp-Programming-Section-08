/*
 * Author: Matt Johnson
 * Subject: arithmetic operators
 * Purpose: execute arithmetic operators
 * Date: 05/31/203
 *
 * Notes:
 *
 * 	-
 *
 */

#include <iostream>

using namespace std;

int main(void) { 

	const double usd_per_euro {1.19};
	double euros {0.0};
	double dollars {0.0};

	cout << "Welcome to the EUR to USD converter" << endl;
	cout << "Enter the value in Euros: ";
	cin >> euros;

	dollars = euros * usd_per_euro;
	cout << euros << " euros is equivalent to " << dollars << endl;

	cout << endl;
	return 0;
}
