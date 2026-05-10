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
	const int REGULAR_HOURS = 40;
	const double OVERTIME_PAY = 1.5;

	// Variables
	string companyName;
	int hoursWorked;
	int docNumber;
	double hourlyRate;
	double grossPay;

	// Prompt the user for input
	cout << "Please tell me the name of your company: " << endl;
	getline(cin, companyName);

	cout << "How many hours did you work?" << endl;
	cin >> hoursWorked;

	cout << "How much is your hourly rate?" << endl;
	cin >> hourlyRate;

	// check for how many hours worked to calculate total gross pay
	if (hoursWorked > REGULAR_HOURS) {
		grossPay = (REGULAR_HOURS * hourlyRate) + ((hoursWorked - REGULAR_HOURS) * (hourlyRate * OVERTIME_PAY));
	}
	else {
		grossPay = hoursWorked * hourlyRate;
	}
	
	// Random number generator for document
	srand(static_cast<unsigned int>(time(0))); // seed random number
	docNumber = MIN_DOC + rand() % (MAX_DOC - MIN_DOC + 1);

	// Display output
	cout << fixed << setprecision(2) << showpoint; // format pay output
	cout << "Company name: " << companyName << endl;
	cout << "Hours worked: " << hoursWorked << endl;
	cout << "Hourly rate: " << hourlyRate << endl;
	cout << "Document number: " << docNumber << endl;
	cout << "Your " << companyName << " gross pay is $" << grossPay << " dollars." << endl;

	return 0;
}

/************** Sample Output **************

Please tell me the name of your company: 
Facebook
How many hours did you work?
68
How much is your hourly rate?
82.50
Company name: Facebook
Hours worked: 68
Hourly rate: 82.50
Document number: 1563
Your Facebook gross pay is $6765.00 dollars.

**********************************************

Please tell me the name of your company: 
NASA
How many hours did you work?
61 
How much is your hourly rate?
97.63
Company name: NASA
Hours worked: 61
Hourly rate: 97.63
Document number: 1834
Your NASA gross pay is $6980.55 dollars.

*/
