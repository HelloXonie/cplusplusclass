/*
Name: Xonie Martin
Team Name: PlusPlus Ultra - Xonie Martin, Kyungjae Lee
Assignment Title: Programming challenges Chapter 3
Problem Number: 7 - Box Office
Description: This program will calculate percentage of the revenue earned from ticket sales. 
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	
	// Constants
	const	double ADULT_FEE = 10.00;
	const double CHILD_FEE = 6.00;
	
	// Datas
	string movieName; // name of movie
	int adultTicketSold;
	int childTicketSold;
	double grossProfit; // gross box office profit
	double netProfit; // actual profit that theater makes
	double distributorProfit; // profit that distributor makes
	
	// Inputs
	cout << "What is the name of the movie?: ";
	getline(cin, movieName);
	cout << "\nHow many adult tickets were sold?: ";
	cin >> adultTicketSold;
	cout << "\nHow many child tickets were sold?: ";
	cin >> childTicketSold;

	// Calculation
	grossProfit = (ADULT_FEE * adultTicketSold) + (CHILD_FEE * childTicketSold);
	netProfit = grossProfit * 0.20;
	distributorProfit = grossProfit - netProfit;

	// Display
	cout << "\n\nMovie name: " << movieName << endl;
	cout << "\nAdult tickets sold: " << adultTicketSold << endl;
	cout << "\nChild tickets sold: " << childTicketSold << endl;
	cout << fixed << setprecision(2) << showpoint;
	cout << "\nGross box office profit is $" << grossProfit << endl;
	cout << "\nNet Box office profit is $" << netProfit << endl;
	cout << "\nThe amount paid to distributor is $" << distributorProfit << endl;
	return 0;

}
