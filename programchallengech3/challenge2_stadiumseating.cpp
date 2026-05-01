/*
Team Name: PlusPlusUltra
Team member: Xonie Martin, Kyungjae Lee
Name: Xonie Martin
Assignment number: Chapter 3 — Assignments
The question description: This program displays how many class seats are sold and displays generated income.
uses decimals and make sure decimals are always displayed.
*/

#include <iostream> 
#include <iomanip> 
using namespace std;

int main() {

	// Variables
	int classASold; // seats sold in A class
	int classBSold; // seats sold in B class 
	int classCSold; // seats sold in C class
	double netSales;
	const int CLASS_A = 15; // In dollars
	const int CLASS_B = 12; // In dollars
	const int CLASS_C = 9; // In dollars
	
	// Inputs
	cout << "How many A class seats were sold?: ";
	cin >> classASold;
	cout << "\nHow many B class seats were sold?: ";
	cin >> classBSold;
	cout << "\nHow many C class seats were sold?: ";
	cin >> classCSold;
	
	// Calculation
	netSales = (CLASS_A * classASold) + (CLASS_B * classBSold) + (CLASS_C * classCSold);
	
	// Display Output
	cout << fixed << setprecision(2) << showpoint;
	cout << "\nThe net profit is $" << netSales << endl;
	return 0;
}
