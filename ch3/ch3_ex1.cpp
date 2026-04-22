/* Name: Xonie
Description: The purpose of this program is to take user inputs,
store those values into variables then give an output
based on calculations made with those inputs

*/

#include <iostream>
using namespace std;

int main() {
	
	int hours;
	double rate;

	// Prompt the user to enter in hours, and take an input
	cout << "Hello, how many hours have you worked?" << endl;
	cin >> hours; // User input value for hours.
	
	// Prompt the user to enter in rate, and take an input.
	cout << "Thank you, and what is your rate per hour?" << endl;
	cin >> rate; // User input value for rate.
	
	// Calculation for gross pay.
	double grossPay = hours * rate;

	// Display the output for hours, rate, and gross pay.
	cout << "Hours: " << hours << endl;
	cout << "Rate: " << rate << endl;
	cout << "Your gross pay is: " << grossPay << endl;

	return 0;
}

/*
Hello, how many hours have you worked?
12
Thank you, and what is your rate per hour?
42.58
Hours: 12
Rate: 42.58
Your gross pay is: 510.96

--

Hello, how many hours have you worked?
40
Thank you, and what is your rate per hour?
48
Hours: 40
Rate: 48
Your gross pay is: 1920
*/
