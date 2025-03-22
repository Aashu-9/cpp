/*A function that creates an 
array of user given size using new operator.*/
#include <iostream>

using namespace std;

int* createArray(int size) {
    // Dynamically allocate an array of given size
    int* arr = new int[size];

    // Take user input for array elements
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; // User inputs values
    }

    return arr; // Return the pointer to the allocated array
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* myArray = createArray(size);

    // Display the user-entered array
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Free allocated memory
    delete[] myArray;

    return 0;
}