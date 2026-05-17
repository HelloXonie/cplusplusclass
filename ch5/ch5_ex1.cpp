/*
Name: Xonie
Team Name: Plus Plus Ultra - Xonie Martin, Kyungjae Lee
Description: The purpose of this program is to take user inputs,
and calculate gross pay based on if they did overtime or regular
hours. Focus for this will be to have cleaner code and error handling
for edge cases.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main() {
	

	// Variables
	
	string companyName;
	int min_doc = 1000;
	int max_doc = 2000;
	int regularHours;
	int hoursWorked;
	int docNumber;
	double hourlyRate;
	double grossPay;
	double overtimeRate;

	// Prompt the user for input
	cout << "Please tell me the name of your company: " << endl;
	getline(cin, companyName);

	cout << "How many hours did you work?" << endl;
	cin >> hoursWorked;

	// Confirm the user isn't entering in negative hours.
	if (hoursWorked < 1 ) { 
		cout << "Please enter a valid amount hours" << endl;
		cin >> hoursWorked;
	}

	cout << "How many hours can you work before it's considered overtime?" << endl;
	cin >> regularHours;

	cout << "How much is your hourly rate?" << endl;
	cin >> hourlyRate;

	// Confirm the user ins't entering a negative rate.
	if (hourlyRate <= 1) { 
		cout << "Please enter a valid amount hours" << endl;
		cin >> hourlyRate;
	}
	
	cout << "What is the rate if you work overtime?" << endl;
	cin >> overtimeRate;
	
	//Confirm the overtime rate isn't the same as hourly
	//overtime rate is a multiplier so 1.1, 1.5, 2 etc.
	if (overtimeRate <= 1) {
		cout << "Please enter a valid overtime Rate" << endl;
		cin >> overtimeRate;
	}

	cout << "Enter a minimum number to randomize a doc numner" << endl;
	cin >> min_doc;

	cout << "Enter a maximum number to randomize a doc number" << endl;
	cin >> max_doc;

	if (min_doc >= max_doc) {
		cout << "Your minimum number can be greater than or equal to your maximum. Please enter a new value" << endl;
		cout << "minimum: " << endl;
		cin >> min_doc;
		cout << "maximum: " << endl;
		cin >> max_doc;
	}

	// check for how many hours worked to calculate total gross pay
	if (hoursWorked > regularHours) {
		grossPay = (regularHours * hourlyRate) + ((hoursWorked - regularHours) * (hourlyRate * overtimeRate));
	}
	else {
		grossPay = hoursWorked * hourlyRate;
	}
	
	// Random number generator for document
	srand(static_cast<unsigned int>(time(0))); // seed random number
	docNumber = min_doc + rand() % (max_doc - min_doc + 1);

	// Display output
	cout << fixed << setprecision(2) << showpoint; // format pay output
	cout << "Company name: " << companyName << endl;
	cout << "Hours worked: " << hoursWorked << endl;
	cout << "Hourly rate: " << hourlyRate << endl;
	cout << "Document number: " << docNumber << endl;
	cout << "Your " << companyName << " gross pay is $" << grossPay << " dollars." << endl;

	return 0;
}

