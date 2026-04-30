/*
Name: Xonie Martin
Team Name: PlusPlusUltra - Xonie Martin, Kyungjae Lee
Assignment Title: Programming challenges Chapter 3
Problem Number: 1 - Miles Per Gallon
Description: Purpose of this program is to take an input 
from the user for the number of gallons of gas a car can hold.
Then calculate miles per gallon.
*/

#include <iostream>
using namespace std;

int main() {

	// Variables
	double gasTankCapacity;
	double fullTankMileage;

	// Prompt the user for input
	cout << "How many gallons can your gas tank hold?" << endl;
	cin >> gasTankCapacity;

	cout << "How many miles can be driven on a full tank?" << endl;
	cin >> fullTankMileage;

	// Calculation
	double MPG = fullTankMileage / gasTankCapacity;

	cout << "The amount of miles you can drive on a full tank are: " << MPG << endl;

	return 0;
}
