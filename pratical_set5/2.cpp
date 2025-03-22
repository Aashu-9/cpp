/*Write a function that creates a vector of user given size M using new operator.
 Demonstrate the use of the function.*/
#include <iostream>
using namespace std;

// Function to create a vector of size M using new operator
int* createVector(int M) {
    int* vector = new int[M]; // Dynamically allocate memory for the vector
    cout << "Enter " << M << " elements for the vector:" << endl;
    for (int i = 0; i < M; i++) {
        cin >> vector[i]; // Input elements into the vector
    }
    return vector; // Return the pointer to the allocated vector
}

// Function to display the vector
void displayVector(int* vector, int M) {
    cout << "Vector elements: ";
    for (int i = 0; i < M; i++) {
        cout << vector[i] << " "; // Display each element
    }
    cout << endl;
}

int main() {
    int M;
    cout << "Enter the size of the vector (M): ";
    cin >> M;

    // Create the vector using the createVector function
    int* vector = createVector(M);

    // Display the vector using the displayVector function
    displayVector(vector, M);

    // Free the dynamically allocated memory
    delete[] vector;

    return 0;
}