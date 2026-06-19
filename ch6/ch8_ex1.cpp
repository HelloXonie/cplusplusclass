/* 
Xonie Martin
Description: This program accepts an array from the user, sorts it using
either Selection Sort or Bubble Sort, then searches for a value using
either Linear Search or Binary Search.
*/

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

// functions
void showValues(int arr[], int size);
void selectionSort(int arr[], int size);
void bubbleSort(int arr[], int size);
int linearSearch(int arr[], int size, int target);
int binarySearch(int arr[], int size, int target);

int main() {
    int size;

    // Prompt the user for array size 
    cout << "How many elements in the array? ";
    cin >> size;

    int arr[MAX_SIZE];

    for (int i = 0; i < size; i++) {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> arr[i];
    }

    cout << "Unsorted array: ";
    showValues(arr, size);

	  // Prompt user for sorting method
    int sortChoice;
    cout << "Choose sort method:" << endl;
    cout << "1. Selection Sort" << endl;
    cout << "2. Bubble Sort" << endl;
    cout << "> ";
    cin >> sortChoice;

    if (sortChoice == 1) {
        selectionSort(arr, size);
    } else {
        bubbleSort(arr, size);
    }

    cout << "Sorted array: ";
    showValues(arr, size);

	  // Prompt user for value and search type
    int target;
    cout << "Enter a value to search for: ";
    cin >> target;

    int searchChoice;
    cout << "Choose search method:" << endl;
    cout << "1. Linear Search" << endl;
    cout << "2. Binary Search" << endl;
    cout << "> ";
    cin >> searchChoice;

    int index;
    if (searchChoice == 1) {
        index = linearSearch(arr, size, target);
    } else {
        index = binarySearch(arr, size, target);
    }

    if (index == -1) {
        cout << "Value not found in the array." << endl;
    } else {
        cout << "Value found at index " << index << endl;
    }

    return 0;
}

// function definitions
void showValues(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}
