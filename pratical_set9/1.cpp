#include <iostream>
using namespace std;

class Array2D {
private:
    int **arr; // Pointer to a pointer for 2D array
    int rows;  // Number of rows
    int cols;  // Number of columns

public:
    // Constructor to initialize the 2D array
    Array2D() {
        cout << "How many rows do you want to add: ";
        cin >> rows;
        cout << "How many columns do you want to add: ";
        cin >> cols;

        // Allocate memory for the 2D array
        arr = new int*[rows];
        for (int i = 0; i < rows; i++) {
            arr[i] = new int[cols];
        }
        cout << "2D array of size " << rows << "x" << cols << " created dynamically." << endl;
    }

    // Destructor to deallocate memory
    ~Array2D() {
        for (int i = 0; i < rows; i++) {
            delete[] arr[i]; // Deallocate memory for columns
        }
        delete[] arr; // Deallocate memory for rows
        cout << "2D array of size " << rows << "x" << cols << " destroyed." << endl;
    }

    // Function to input values into the 2D array
    void input() {
        cout << "Enter the elements of the " << rows << "x" << cols << " matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Element at X[" << i << "][" << j << "]: ";
                cin >> arr[i][j];
            }
        }
    }

    // Function to display the 2D array
    void print() const {
        cout << "Matrix elements:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Create an object of Array2D
    Array2D *arr1 = new Array2D;

    // Input and display the matrix
    arr1->input();
    arr1->print();

    // Deallocate the dynamically created object
    delete arr1;

    return 0;
}