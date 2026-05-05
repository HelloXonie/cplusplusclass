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
#include <ctime>

using namespace std;

int main() {
	
	// Constants
	const int MIN_DOC = 1000;
	const int MAX_DOC = 2000;
	const double OVERTIME_PAY = 1.5;
	
	// Variables
	string companyName;
	int hoursWorked;
	int docNumber;
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
		overtimeGrossPay = (hoursWorked - 40) * (hourlyRate * OVERTIME_PAY);
	}
	
	// Calculate total gross pay
	totalGrossPay = regularGrossPay + overtimeGrossPay;

	// Random number generator for document
	srand(static_cast<unsigned int>(time(0))); // seed random number
	docNumber = MIN_DOC + rand() % (MAX_DOC - MIN_DOC + 1);

	// Display output
	cout << fixed << setprecision(2) << showpoint; // format pay output
	cout << "Company name: " << companyName << endl;
	cout << "Hours worked: " << hoursWorked << endl;
	cout << "Hourly rate: " << hourlyRate << endl;
	cout << "Document number: " << docNumber << endl;
	cout << "Your " << companyName << " gross pay is $" << totalGrossPay << " dollars." << endl;

	return 0;
}

/********* Sample Output *********

Please tell me the name of your company: 
google
How many hours did you work?
50
How much is your hourly rate?
20
Company name: google
Hours worked: 50
Hourly rate: 20.00
Document number: 1839
Your google gross pay is $1100.00 dollars.

-----------------------------------

Please tell me the name of your company: 
Netflix
How many hours did you work?
40
How much is your hourly rate?
84.25
Company name: Netflix
Hours worked: 40
Hourly rate: 84.25
Document number: 1270
Your Netflix gross pay is $3370.00 dollars.

*/
