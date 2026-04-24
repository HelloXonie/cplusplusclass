/*
Name: Xonie Martin
Team Name: PlusPlusUltra - Xonie Martin, Kyungjae Lee
Assignment Title: Programming challenges Chapter 2
Problem Number: 10 - Miles Per Gallon
*/

#include <iostream>
using namespace std;

int main() {

	// Data
	double gallonsOfGasUsed = 15;
	double milesDriven = 375;

	// Formula of MPG
	double MPG = milesDriven / gallonsOfGasUsed; // Miles per gallons
	
	// Display Output
	cout << "A car's MPG is " << MPG << "." << endl;
	return 0;
}
