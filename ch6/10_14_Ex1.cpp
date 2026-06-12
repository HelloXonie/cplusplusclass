/*
Name: Xonie Martin
Date: June 11, 2026
Description: The purpose of this program is to handle array input and outputs.
*/

#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int arr[MAX];
    int size;
	  int sum = 0;
    double average = static_cast<double>(sum) / size;

    // Prompt user for array size
    cout << "Enter the size of the array: ";
    cin >> size;

    // Prompt user for array values
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // regular for loop
	  for (int i = 0; i < size; i++) {
				cout << arr[i];
					if (i < size - 1) cout << " ";
			}
		cout << endl;

    // Sum and average
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    cout << "Sum:     " << sum << endl;
    cout << "Average: " << average << endl;

    // Highest and lowest
    int highest = arr[0];
    int lowest  = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > highest) highest = arr[i];
        if (arr[i] < lowest)  lowest  = arr[i];
    }

    cout << "Highest: " << highest << endl;
    cout << "Lowest:  " << lowest  << endl;

    // Copy the array
    int arrCopy[MAX];
    for (int i = 0; i < size; i++) {
        arrCopy[i] = arr[i];
    }

    for (int i = 0; i < size; i++) {
        cout << arrCopy[i];
        if (i < size - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
