/*
Name: Xonie Martin
Team Name: PlusPlusUltra - Xonie Martin, Kyungjae Lee
Assignment Title: Programming challenges Chapter 3
Problem Number: 10 - How much insurance?
Description: Purpose of this program is to calculate how much 
insurance you should purchase on property you own.
*/

#include <iostream>
#include <iomanip> // for fixed and setprecision
using namespace std;

int main() {
	
	// Constants
	const double INSURANCE_RATE = 0.80;

	// Variables
	double replacementCost;
	
	cout << "What will it cost to replace your house?" << endl;
	cin >> replacementCost;
	
	// Calculate the minimum insurance cost
	double minInsurance = replacementCost * INSURANCE_RATE;

	// Display the output
	cout << "The minimum amount of insurance you'll need to pay is: $"
			 << fixed << setprecision(2) << minInsurance << endl;

	return 0;
}


