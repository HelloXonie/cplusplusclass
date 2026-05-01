// Brief explanation: These lines of codes calculate the number of widgets by subtracting total weight to pallets weight, and dividing by 12.5.
/*
Team Name: PlusPlusUltra
Team member: Xonie Martin, Kyungjae Lee
Name: Xonie Martin
Assignment number: Programming Challenges – Chapter 3
The question description: This program will write a program that calculates how many widgets are stacked on a pallet, based on
the total weight of the pallet. The program should ask the user how much the pallet
weighs by itself and with the widgets stacked on it. It should then calculate and display
the number of widgets stacked on the pallet.
*/

#include <iostream>
using namespace std;

int main() {
	// Variables
	double weightOfWidget = 12.5; // In pounds
	double numberOfWidgets;
	double weightOfPallet;
	double totalWeight;

	// Inputs
	cout << "How much does the pallet weigh by itself?: ";
	cin >> weightOfPallet;
	cout << "How much does the pallet weigh with the widgets stacked on it?: ";
	cin >> totalWeight;

	// Calculation
	numberOfWidgets = (totalWeight - weightOfPallet) / weightOfWidget;

	// Display
	cout << "\nThe number of widgets stacked on the pallet is " << numberOfWidgets << endl;
	return 0;
}
