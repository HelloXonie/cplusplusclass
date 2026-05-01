// Brief explanation: These lines of codes calucaltes the percentage of each females and males in class based on the number of each females and males in class.
/*
Team Name: PlusPlusUltra
Team member: Xonie Martin, Kyungjae Lee
Name: Xonie Martin
Assignment number: Chapter 3 — Assignments
The question description: This codes will write a program that asks the user for the number of males and the number of females
registered in a class. The program should display the percentage of males and females
in the class.
*/

#include <iostream>
using namespace std;

int main() {

	// Variables
	int numberOfMales;
	int numberOfFemales;
	int totalStudents;
	double percentageOfMales;
	double percentageOfFemales;

	// Inputs
	cout << "How many male students registered in a class?: ";
	cin >> numberOfMales;

	cout << "How many female students registered in a class?: ";
	cin >> numberOfFemales;

	// Calculation
	totalStudents = numberOfMales + numberOfFemales;
	percentageOfMales = (static_cast<double>(numberOfMales) / totalStudents) * 100;
	percentageOfFemales = (static_cast<double>(numberOfFemales) / totalStudents) * 100;

	// Display output
	cout << "The percentage of male students in class is " << percentageOfMales << "%" << endl;
	cout << "The percentage of female students in class is " << percentageOfFemales << "%" << endl;
	return 0;
}
