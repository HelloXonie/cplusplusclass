/*
Name: Xonie
Team Name: Plus Plus Ultra - Xonie Martin, Kyungjae Lee
Description: The purpose of this program is to take user inputs,
and calculate gross pay based on if they did overtime or regular
hours.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	
	// Constants
	const double OVERTIME_PAY = 1.5;

	// Variables
	string companyName;
	int hoursWorked;
	double hourlyRate;
	double regularGrossPay;
	double overtimeGrossPay;
	double totalGrossPay;

	// Prompt the user for input
	cout << "Please tell me the name of your company: " << endl;
	getline(cin, companyName);

	cout << "How many hours did you work?" << endl;
	cin >> hoursWorked;

	cout << "How much is your hourly rate?" << endl;
	cin >> hourlyRate;

	// check for how many hours worked to calculate total gross pay
	if (hoursWorked <= 40) {
		regularGrossPay = hoursWorked * hourlyRate;
		overtimeGrossPay = 0;
	}
	else {
		regularGrossPay = 40 * hourlyRate;
		overtimeGrossPay = hoursWorked * (hourlyRate * OVERTIME_PAY);
	}
	
	// Calculate total gross pay
	totalGrossPay = regularGrossPay + overtimeGrossPay;

	// Display output
	cout << fixed << setprecision(2) << showpoint; // format pay output
	cout << "Company name: " << companyName << endl;
	cout << "Hours worked: " << hoursWorked << endl;
	cout << "Hourly rate: " << hourlyRate << endl;
	cout << "Document number: " <<
	cout << "Your " << companyName << " gross pay is $" << totalGrossPay << " dollars." << endl;

	return 0;
}

