/*
Name: Xonie
Team Name: PlusPlusUltra
Assignment Title: Programming challenges Chapter 2
Problem Number: 3 - Sales Tax
*/

#include <iostream>
using namespace std;

int main() {

	// Calculate the sales tax of an item
	double subtotalPrice = 95.00;
	double stateSalesTax = 0.04 * subtotalPrice;
	double countySalesTax = 0.02 * subtotalPrice;
	double grandtotalPrice = subtotalPrice + stateSalesTax + countySalesTax;

	// Display the output
	cout << "Your subtotal is: $" << subtotalPrice << endl;
	cout << "State sales tax is: $" << stateSalesTax << endl;
	cout << "County sales tax is: $" << countySalesTax << endl;
	cout << "Your grand total price is: $" << grandtotalPrice << endl;

	return 0;
}
