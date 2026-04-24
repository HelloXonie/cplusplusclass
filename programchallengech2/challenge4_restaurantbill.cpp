/*
Name: Xonie
Team Name: PlusPlusUltra - Xonie Martin, Kyungjae Lee
Assignment Title: Programming challenges Chapter 2
Problem Number: 4 - Restaurant Bill
*/

#include <iostream>
using namespace std;

int main() {
	
	// Calculate each value
	double mealCost = 88.67;
	double salesTax = .0675 * mealCost;
	double subTotal = salesTax + mealCost; // calculate the total meal and tax before calculating the tip
	double tipCost = .2 * subTotal;
	double finalCost = tipCost + subTotal;

	// Display the output
	cout << "Your meal cost: $" << mealCost << endl;
	cout << "Sales  tax: $" << salesTax << endl;
	cout << "Subtotal: $" << subTotal << endl;
	cout << "Final cost: $" << finalCost << endl;

	return 0;
}
