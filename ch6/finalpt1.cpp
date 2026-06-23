/*
Name: Xonie Martin
Team Name: Plus Plus Ultra - Xonie Martin, Kyungjae Lee
Date: June 22, 2026
Description: The purpose of this program is to build a menu, and take user inputs for an order.
The program will handle calculation and output a final bill to a separate file.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function prototypes
void displayMenu();
void getInputs();
void calculate();
void printBill();
void saveBillToFile();

// Constants and Variables and Arrays
string BURGER_ARRAY[5] = { "De Anza Burger", "Bacon Cheese", "Mushroom Swiss", "Western Burger", "Don Cali Burger" };
double PRICE_ARRAY[5] = { 5.25, 5.75, 5.95, 5.95, 5.95 };
const double TAX_RATE = 0.09;

int orderArray[5] = { 0, 0, 0, 0, 0 }; // To track quantities ordered
string userType;

double subtotal = 0.0;
double tax = 0.0;
double total = 0.0;

int main() {

	displayMenu();
	getInputs();
	calculate();
	printBill();
	saveBillToFile();

	return 0;
}

void displayMenu() {

	for (int i = 0; i < 5; i++) {
		cout << (i + 1) << ". " << BURGER_ARRAY[i] << " - $" << fixed << setprecision(2) << PRICE_ARRAY[i] << endl;
	}
}

void getInputs() {
	
	int choice;
	int amount;

	cout << "Select a burger. Enter a number from 1 to 5 or enter 6 when done: " << endl;
	cin >> choice;

	while (choice != 6) {

		if (choice >= 1 && choice <= 5) {
			cout << "How many would you like?" << endl;
			cin >> amount;
			orderArray[choice - 1] += amount;
			cout << "Anything else? Enter a number 1 to 5 or enter 6 when done: " << endl;
			cin >> choice;
		}
		else {
			cout << "Invalid choice. Please enter 1-6." << endl;
			cin >> choice;
		}
	}

	cout << "Are you a student or staff?" << endl;
	cin >> userType;
}

void calculate() {

	for (int i = 0; i < 5; i++) {
			subtotal += orderArray[i] * PRICE_ARRAY[i];
	}
	if (userType == "student") {
			tax = 0;
	} 
	else {
			tax = subtotal * TAX_RATE;
	}
	total = subtotal + tax;
}

void printBill() {

	// TODO: print the bill header
	// TODO: loop through orderArray, print line items where orderArray[i] > 0
	// TODO: print subtotal, tax, total

}

void saveBillToFile() {

	// TODO: generate random number 1000-2000, build filename like "1845.txt"
	// TODO: open ofstream, write same bill content as printBill(), close file

}
