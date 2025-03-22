#include <iostream>
using namespace std;

class Number {
private:
    int value; // Integer value

public:
    // Parameterized constructor
    Number(int v) : value(v) {}

    // Function to display the value
    void display() const {
        cout << "Value: " << value << endl;
    }

    // Overload the unary - operator
    Number operator-() const {
        return Number(-value); // Return a new object with negated value
    }
};

int main() {
    // Create an object of Number
    Number num(10);

    // Display the original value
    cout << "Original value: ";
    num.display();

    // Use the overloaded unary - operator
    Number negNum = -num;

    // Display the negated value
    cout << "Negated value: ";
    negNum.display();

    return 0;
}