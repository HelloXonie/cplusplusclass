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

	srand(time(0));
	
	displayMenu();
	getInputs();
	calculate();
	printBill();
	saveBillToFile();

	return 0;
}

// Show the user the menu
void displayMenu() {

	for (int i = 0; i < 5; i++) {
		cout << (i + 1) << ". " << BURGER_ARRAY[i] << " - $" << fixed << setprecision(2) << PRICE_ARRAY[i] << endl;
	}
}

// Prompt the user and get inputs
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

// Calculations
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

	cout << fixed << setprecision(2);
	cout << "********** FINAL BILL **********" << endl;
	for (int i = 0; i < 5; i++) {
		if (orderArray[i] > 0) {
			cout << BURGER_ARRAY[i] << " x" << orderArray[i] << " - $" << orderArray[i] * PRICE_ARRAY[i] << endl;
		}
	}
	cout << "Subtotal: $" << subtotal << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Total: $" << total << endl;
}

// Output to a file
void saveBillToFile() {

	int randNum = rand() % 1001 + 1000;
	string fileName = to_string(randNum) + ".txt";
	ofstream outputFile(fileName);
	outputFile << fixed << setprecision(2);
	outputFile << "********** FINAL BILL **********" << endl;

	for (int i = 0; i < 5; i++) {
		if (orderArray[i] > 0) {
			outputFile << BURGER_ARRAY[i] << " x" << orderArray[i] << " - $" << orderArray[i] * PRICE_ARRAY[i] << endl;
		}
	}
	outputFile << "Subtotal: $" << subtotal << endl;
	outputFile << "Tax: $" << tax << endl;
	outputFile << "Total: $" << total << endl;
	outputFile.close();
	cout << "Your bill has been saved to " << fileName << endl;
}

/*

**************** SAMPLE OUTPUT *****************

1. De Anza Burger - $5.25
2. Bacon Cheese - $5.75
3. Mushroom Swiss - $5.95
4. Western Burger - $5.95
5. Don Cali Burger - $5.95
Select a burger. Enter a number from 1 to 5 or enter 6 when done: 
1
How many would you like?
2
Anything else? Enter a number 1 to 5 or enter 6 when done: 
6
Are you a student or staff?
student
********** FINAL BILL **********
De Anza Burger x2 - $10.50
Subtotal: $10.50
Tax: $0.00
Total: $10.50
Your bill has been saved to 1240.txt

*************************************************

1. De Anza Burger - $5.25
2. Bacon Cheese - $5.75
3. Mushroom Swiss - $5.95
4. Western Burger - $5.95
5. Don Cali Burger - $5.95
Select a burger. Enter a number from 1 to 5 or enter 6 when done: 
1
How many would you like?
2
Anything else? Enter a number 1 to 5 or enter 6 when done: 
3
How many would you like?
1
Anything else? Enter a number 1 to 5 or enter 6 when done: 
5
How many would you like?
1
Anything else? Enter a number 1 to 5 or enter 6 when done: 
6
Are you a student or staff?
staff
********** FINAL BILL **********
De Anza Burger x2 - $10.50
Mushroom Swiss x1 - $5.95
Don Cali Burger x1 - $5.95
Subtotal: $22.40
Tax: $2.02
Total: $24.42
Your bill has been saved to 1725.txt

*/
