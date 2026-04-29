/*
Name: Xonie
Team Name: Plus Plus Ultra - Xonie Martin, Kyungjae Lee
Description: The purpose of this program is to take user inputs,
store those values into variables then give an output
based on calculations made with those inputs
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	// Constants
	const double TAX_RATE = 0.12;
	const int MIN_DOC = 1000;
	const int MAX_DOC = 2000;

	//Variables
	string companyName;
	int numHoursWorked;
	double payRate;
	double grossPay, taxAmount, netPay;
	double avgPayPerHour;
	int docNumber;

	// Prompt the user for inputs
	cout << "What company do you work for? " << endl;
	getline(cin, companyName);

	cout << "How many hours did you work? " << endl; // Will return 0's and "nan" if user enters in a letter
	cin >> numHoursWorked;

	cout << "What's your hourly pay rate?" << endl;
	cin >> payRate;
	
	// Calculations
	grossPay = numHoursWorked * payRate;
	taxAmount = grossPay * TAX_RATE;
	netPay = grossPay - taxAmount;

	// Type casting 
	avgPayPerHour = grossPay / static_cast<double>(numHoursWorked);

	// Random number generator for Doc
	srand(static_cast<unsigned int>(time(0))); // Seed random number 
	docNumber = MIN_DOC + rand()% (MAX_DOC - MIN_DOC + 1);

	// Display output
	cout << fixed << setprecision(2) << showpoint << endl; // Formats output for monetary values
	cout << "Company Name: " << companyName << endl;
	cout << "Hours Worked: " << numHoursWorked << endl;
	cout << "Hourly Rate: $" << payRate << endl;
	cout << "Document Number: " << docNumber << endl;
	cout << "Gross Pay: $" << grossPay << endl;
	cout << "Tax amount: $" << taxAmount << endl;
	cout << "Net Pay: $" << netPay << endl;
	cout << "Average pay per hour: $" << avgPayPerHour << endl; // Uses typecasting

	return 0;
	
}

/*
----------Sample Output ----------

What company do you work for? 
big tech
How many hours did you work? 
80
Whats your hourly pay rate?
50.00

Company Name: big tech
Hours Worked: 80
Hourly Rate: $50.00
Document Number: 1194
Gross Pay: $4000.00
Tax amount: $480.00
Net Pay: $3520.00
Average pay per hour: $50.00

**********************************
**********************************

What company do you work for? 
NASA 
How many hours did you work? 
80
Whats your hourly pay rate?
88.75

Company Name: NASA
Hours Worked: 80
Hourly Rate: $88.75
Document Number: 1985
Gross Pay: $7100.00
Tax amount: $852.00
Net Pay: $6248.00
Average pay per hour: $88.75

*/

