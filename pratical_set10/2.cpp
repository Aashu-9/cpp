/*a program to overload the [] operator.*/
#include <iostream>
using namespace std;

class sub_arr {
private:
    int SIZE;
    int* arr;

public:
    // Constructor
    sub_arr() {
        cout << "How many Elements do you want in array (at least enter 10): " << endl;
        cin >> SIZE;

        // Validate input size
        if (SIZE < 10) {
            cout << "Size must be at least 10. Setting size to 10." << endl;
            SIZE = 10;
        }

        arr = new int[SIZE];

        // Initialize array with i^2
        for (int i = 0; i < SIZE; i++) {
            arr[i] = i * i;
        }
    }

    // Destructor to free dynamically allocated memory
    ~sub_arr() {
        delete[] arr;
    }

    // Function to print the array
    void prnt() {
        for (int i = 0; i < SIZE; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Overload [] operator
    int& operator[](int i) {
        if (i >= SIZE || i < 0) {
            cout << "Index out of bounds! Returning first element." << endl;
            return arr[0];
        }
        return arr[i];
    }
};

int main() {
    sub_arr A;

    cout << "Auto-generated Array is:" << endl;
    A.prnt();

    cout << "\nUsing [] Operator to access elements" << endl;
    cout << "Value of A[5]: " << A[5] << endl;
    cout << "Value of A[2]: " << A[2] << endl;
    cout << "Value of A[9]: " << A[9] << endl;

    // Test out-of-bounds access
    cout << "Value of A[15]: " << A[15] << endl;

    return 0;
}