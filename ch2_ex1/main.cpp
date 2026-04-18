/*
Name: Xonie
Description: Purpose of this program is to calculate 
the gross pay for a College and then display it.
Hours and rate will be fixed values.
*/

#include <iostream>

using namespace std;

int main() {
	string companyName = "De Anza College";
	int hours = 40;
	int rate = 100;
	int grossPay = hours * rate; // Calculation for Gross Pay
	
	//Display results
	cout << "Company Name: " << companyName << endl;
	cout << "Hours worked: " << hours << endl;
	cout << "Rate per hour: " << rate << endl;
	cout << "Your " << companyName << " gross pay is: " << grossPay << " dollars." << endl;

	return 0;
}
