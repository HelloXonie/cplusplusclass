/*
Name: Xonie
Assignment Title: Programming challenges Chapter 2
Problem Number: 2 - Sales Prediction
*/

#include <iostream>
using namespace std;

int main() {
	
	// Calculate the east coast sales prediction.
	double totalSales = 8.6; // 8.6 instead of 8600000 to avoid scientific notation.
	double eastCoastSales = .58 * totalSales;
	
	// Display the output
	cout << "The company is on track to make: $" << totalSales << " million this year." << endl;
	cout << "Based on past performance the East Coast division is projected to make: $" << eastCoastSales << " million." << endl;

	return 0;
}
