/*
Name: Xonie Martin
Team Name: PlusPlusUltra - Xonie Martin, Kyungjae Lee
Assignment Title: Programming challenges Chapter 2
Problem Number: 8 - Total Purchase
*/

#include <iostream>
using namespace std;

int main() {

	// Price of each item
	double Price1 = 15.95; // Price of item 1
	double Price2 = 24.95; // Price of item 2
	double Price3 = 6.95; // Price of item 3
	double Price4 = 12.95; // Price of item 4
	double Price5 = 3.95; // Price of item 5
	
	// Calculation of subtotal of sale
	double subtotal = Price1 + Price2 + Price3 + Price4 + Price5;

	// Calculation of sales tax
	double salesTax = subtotal * 0.07;

	// Calculation of total sale
	double totalSale = subtotal + salesTax;

	// Display output
	cout << "Item 1's price is $" << Price1 << "." << endl;
	cout << "Item 2's price is $" << Price2 << "." << endl;
	cout << "Item 3's price is $" << Price3 << "." << endl;
	cout << "Item 4's price is $" << Price4 << "." << endl;
	cout << "Item 5's price is $" << Price5 << "." << endl << endl;
	cout << "The subtotal is $" << subtotal << "." << endl;
	cout << "The sales tax is $" << salesTax << "." << endl;
	cout << "The total is $" << totalSale << "." << endl;
	return 0;
}
