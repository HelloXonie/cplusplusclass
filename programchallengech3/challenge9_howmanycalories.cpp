/*
Team Name: PlusPlusUltra
Team member: Xonie Martin, Kyungjae Lee
Name: Xonie Martin
Assignment number: Programming Challenges – Chapter 3
Description: This program will write a program
that asks the user to input how many cookies he or she actually ate and then reports
how many total calories were consumed.
*/

#include <iostream>
using namespace std;

int main() {

	// Variables
	double oneServing = 10; // One serving is 10 cookies
	double servingCalories = 300; // One serving is equal to 300 calories.
	double cookieAmount; // Amount cookies the user ate
	double consumedCalories;

	// Inputs
	cout << "How many cookies did you eat?: ";
	cin >> cookieAmount;

	// Calculation
	consumedCalories = (servingCalories / oneServing) * cookieAmount;

	// Display
	cout << "\nYou consumed " << consumedCalories << " calories." << endl;
	return 0;
}
