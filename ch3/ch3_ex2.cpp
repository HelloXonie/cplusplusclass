/*
Name: Xonie
Description: The purpose of this program is to take input from a user,
and see what happens when the user doesn't follow the guidelines of
the prompted input.
*/

#include <iostream>
using namespace std;

int main () {

	int age;
	double gpa;
	char firstInitial;

	// Prompts the user for input on requested info
	cout << "Enter your age please:" << endl;
	cin >> age; // Prediction: entering a value other than an int will cause program to hang.
	cout << endl;

	cout << "What's your GPA?" << endl;
	cin >> gpa; // Prediction: entering a value other than a double will cause program to hang.
	cout << endl;

	cout << "What's your first initial?" << endl;
	cin >> firstInitial; // Prediction: entering a vale other than a letter will be fine since char can be a number too.
	cout << endl;

	// Display the output
	cout << "Student Info Summary" << endl;
	cout << "--------------------" << endl;
	cout << "Age: " << age << endl;
	cout << "GPA: " << gpa << endl;
	cout << "First Initial: " << firstInitial << endl;

	return 0;
}
