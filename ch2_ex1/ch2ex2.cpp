/* 
Name: Xonie
Description: A program to calculate the area and permimeter
of a rectangle. 
*/

#include <iostream>

using namespace std;

int main() {

	//Named Constant
	const int TWO = 2;

	//Variables
	double length = 12.5;
	double width = 8.3;
	double area;
	double perimeter;

	//Calculations
	area = length * width;
	perimeter = TWO * (length + width);

	//Display Results
	cout << "Rectangle Calculator" << endl << endl;
	cout << "Length: " << length << endl;
	cout << "Width: " << width << endl;
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl;

	return 0;
}
