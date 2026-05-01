// Brief explanation: These lines of codes calculate the average score with five exam scores that user types.
/*
Team Name: PlusPlusUltra
Team member: Xonie Martin, Kyungjae Lee
Name: Xonie Martin 
Assignment number: Chapter 3 - Assignments
The question description: Write a program that asks for five test scores. The program should calculate the average
test score and display it. The number displayed should be formatted in fixed-point
notation, with one decimal point of precision.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	// Variables
	double test1; // first test score
	double test2; // second test score
	double test3; // third test score
	double test4; // fourth test score
	double test5; // fifth test score
	double totalScore;
	double avgScore;

	// Inputs
	cout << "Type your first exam score: ";
	cin >> test1;
	cout << "Type your second exam score: ";
	cin >> test2;
	cout << "Type your third exam score: ";
	cin >> test3;
	cout << "Type your fourth exam score: ";
	cin >> test4;
	cout << "Type your fifth exam score: ";
	cin >> test5;

	// Calculation
	totalScore = test1 + test2 + test3 + test4 + test5;
	avgScore = totalScore / 5;

	// Display
	cout << fixed << setprecision(1) << showpoint;
	cout << "\nYour average score is " << avgScore << endl;
	return 0;
}
