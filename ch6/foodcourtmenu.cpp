/*
Name: Xonie Martin
Team Name: Plus Plus Ultra - Xonie Martin, Kyungjae Lee
Date: May 23, 2026
Description: The purpose of this program is to build a menu, and take user inputs for an order.
The program will handle calculation and output a final bill to a separate file.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

int main() {

	// Constants
	const double BURGER1 = 5.25;  // De Anza Burger
	const double BURGER2 = 5.75;  // Bacon Cheese
	const double BURGER3 = 5.95;  // Mushroom Swiss
	const double BURGER4 = 5.95;  // Western Burger
	const double BURGER5 = 5.95;  // Don Cali Burger
	const double TAX_RATE = 0.09;

	// Variables
	int quantity1 = 0;
	int quantity2 = 0;
	int quantity3 = 0;
	int quantity4 = 0;
	int quantity5 = 0;

	int choice;
	int amount;
	double subtotal = 0.0;
	double tax = 0.0;
	double total = 0.0;
	string userType;

	// Display the menu
	cout << "1. De Anza Burger - $" << BURGER1 << endl;
	cout << "2. Bacon Cheese - $" << BURGER2 << endl;
	cout << "3. Mushroom Swiss - $" << BURGER3 << endl;
	cout << "4. Western Burger - $" << BURGER4 << endl;
	cout << "5. Don Cali Burger - $" << BURGER5 << endl;

	// Prompt the User
	cout << "Select a burger. Enter a number from 1 to 5 or enter 6 when done: " << endl;
	cin >> choice;

	// Ordering Logic
	while (choice != 6) {

		// How many of each burger
		if(choice >= 1 && choice <=5) {
			
			if (choice == 1) {
				cout << "How many would you like?" << endl;
				cin >> amount;
				quantity1 += amount;
				cout << "Anything else? Enter a number 1 to 5 or enter 6 when done: " << endl;
				cin >> choice;
			}
			else if (choice == 2) {
				cout << "How many would you like?" << endl;
				cin >> amount;
				quantity2+= amount;
				cout << "Anything else? Enter a number 1 to 5 or enter 6 when done: ";
				cin >> choice;
			}
			else if (choice == 3) {
				cout << "How many would you like?" << endl;
				cin >> amount;
				quantity3+= amount;
				cout << "Anything else? Enter a number 1 to 5 or enter 6 when done: ";
				cin >> choice;
			}
			else if (choice == 4) {
				cout << "How many would you like?" << endl;
				cin >> amount;
				quantity4+= amount;
				cout << "Anything else? Enter a number 1 to 5 or enter 6 when done: ";
				cin >> choice;
			}
			else if (choice == 5) {
				cout << "How many would you like?" << endl;
				cin >> amount;
				quantity5+= amount;
				cout << "Anything else? Enter a number 1 to 5 or enter 6 when done: ";
				cin >> choice;
			}
		}
		else {
			cout << "Invalid choice. Please enter 1-6." << endl;
			cin >> choice;
		}
	}

	// Calculations
	subtotal = (quantity1 * BURGER1) + (quantity2 * BURGER2) + (quantity3 * BURGER3) + (quantity4 * BURGER4) + (quantity5 * BURGER5);

	// Prompt user if Student or staff
	cout << "Are you a student or staff?" << endl;
	cin >> userType;

	if (userType == "student"){
		tax = 0;
	}
	else {
		tax = subtotal * TAX_RATE;
	}

	total = subtotal + tax;

	// Display output
	cout << fixed << setprecision(2);
	cout << "********** FINAL BILL **********" << endl;

	if (quantity1 > 0) {
		cout << "De Anza Burger x" << quantity1 << " - $" << quantity1 * BURGER1 << endl;
	}
	if (quantity2 > 0) {
		cout << "Bacon Cheese x" << quantity2 << " - $" << quantity2 * BURGER2 << endl;
	}
	if (quantity3 > 0) {
		cout << "Mushroom Swiss x" << quantity3 << " - $" << quantity3 * BURGER3 << endl;
	}
	if (quantity4 > 0) {
		cout << "Western Burger x" << quantity4 << " - $" << quantity4 * BURGER4 << endl;
	}
	if (quantity5 > 0) {
		cout << "Don Cali Burger x" << quantity5 << " - $" << quantity5 * BURGER5 << endl;
	}
	cout << "Subtotal: $" << subtotal << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Total: $" << total << endl;

	// Output to a file
	cout << fixed << setprecision(2);
	cout << "********** FINAL BILL **********" << endl;

	if (quantity1 > 0) {
		cout << "De Anza Burger x" << quantity1 << " - $" << quantity1 * BURGER1 << endl;
	}
	if (quantity2 > 0) {
		cout << "Bacon Cheese x" << quantity2 << " - $" << quantity2 * BURGER2 << endl;
	}
	if (quantity3 > 0) {
		cout << "Mushroom Swiss x" << quantity3 << " - $" << quantity3 * BURGER3 << endl;
	}
	if (quantity4 > 0) {
		cout << "Western Burger x" << quantity4 << " - $" << quantity4 * BURGER4 << endl;
	}
	if (quantity5 > 0) {
		cout << "Don Cali Burger x" << quantity5 << " - $" << quantity5 * BURGER5 << endl;
	}
	cout << "Subtotal: $" << subtotal << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Total: $" << total << endl;


	
	
}












