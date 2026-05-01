// Brief explanation: These lines of codes calculates the amount of ingredient needed based on how many cookie user want to make.
/*
Team Name: PlusPlusUltra
Team member: Xonie Martin, Kyungjae Lee    
Name: Xonie Martin
Assignment number: Programming Challenges – Chapter 3
The question description: This code will write a program
that asks the user how many cookies he or she wants to make, and then displays the
number of cups of each ingredient needed for the specified number of cookies.
*/

#include <iostream>
using namespace std;

int main() {

	// Constants
	const int BATCH_SIZE = 48;
	const double SUGAR = 1.5;
	const double BUTTER = 1;
	const double FLOUR = 2.75;

	// Variables
	int amountOfCookies;
	double cupsOfSugar;
	double cupsOfButter;
	double cupsOfFlour;

	// Prompt the user for input
	cout << "How many cookies do you want to make?: ";
	cin >> amountOfCookies;

	// Calculations
	cupsOfSugar = (SUGAR * amountOfCookies) / BATCH_SIZE;
	cupsOfButter = (BUTTER * amountOfCookies) / BATCH_SIZE;
	cupsOfFlour = (FLOUR * amountOfCookies) / BATCH_SIZE; 
	
	// Display output
	cout << "\nThen you will need " << cupsOfSugar << " cups of sugar, ";
	cout << cupsOfButter << " cups of butter,";
	cout << " and " << cupsOfFlour << " cups of flour." << endl;
	
	return 0;
}
