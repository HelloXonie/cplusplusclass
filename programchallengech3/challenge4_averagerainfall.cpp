// Brief explanation: These lines of codes calculate the average rainfall with three different rainfall amount from differnt months, which user types.
/*
Team Name: PlusPlusUltra
Team member: Xonie Martin, Kyungjae Lee
Name: Xonie Martin
Assignment number: Chapter 3 — Assignments
The question description: This program will write a program that calculates the average rainfall for three months. The program
should ask the user to enter the name of each month, such as June or July, and the
amount of rain (in inches) that fell each month. 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	// Variables
	string firstMonth;
	string secondMonth;
	string thirdMonth;
	double amountRain1;
	double amountRain2;
	double amountRain3;
	double total;
	double average;

	// Inputs
	cout << "Name of the month: ";
	cin >> firstMonth;
	cout << "How much rain fell that month?: ";
	cin >> amountRain1;

	cout << "\nName of the month: ";
	cin >> secondMonth;
	cout << "How much rain fell that month?: ";
	cin >> amountRain2;

	cout << "\nName of the month: ";
	cin >> thirdMonth;
	cout << "How much rain fell that month?: ";
	cin >> amountRain3;

	// Calculation
	total = amountRain1 + amountRain2 + amountRain3;
	average = total / 3;

	// Display
	cout << "\nThe average rainfall for " << firstMonth << ", " << secondMonth << ", and " << thirdMonth << " is " << average << " inches" << endl;
	return 0;
}
