/*a program to swap two numbers by both call by value and call by 
reference mechanism, using two functions swap_value and swap_reference respectively,
 by getting the choice from the user and executing the user’s choice by switch-case.*/
#include <iostream>
using namespace std;

// Function to swap two numbers using call by value
void swap_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap_value function:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
}

// Function to swap two numbers using call by reference
void swap_reference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap_reference function:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
}

int main() {
    int a, b, choice;

    // Input two numbers
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;

    // Display menu for swapping mechanism
    cout << "\nChoose swapping mechanism:" << endl;
    cout << "1. Swap using call by value" << endl;
    cout << "2. Swap using call by reference" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    // Perform swapping based on user's choice
    switch (choice) {
        case 1:
            cout << "\nBefore swapping (in main):" << endl;
            cout << "a = " << a << ", b = " << b << endl;
            swap_value(a, b); // Call by value
            cout << "After swapping (in main):" << endl;
            cout << "a = " << a << ", b = " << b << endl;
            break;

        case 2:
            cout << "\nBefore swapping (in main):" << endl;
            cout << "a = " << a << ", b = " << b << endl;
            swap_reference(a, b); // Call by reference
            cout << "After swapping (in main):" << endl;
            cout << "a = " << a << ", b = " << b << endl;
            break;

        default:
            cout << "Invalid choice! Please enter 1 or 2." << endl;
            break;
    }

    return 0;
}