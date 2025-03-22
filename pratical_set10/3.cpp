/*a program to overload the << and >> operators.*/
#include <iostream>
using namespace std;

class MyClass {
private:
    int x;
    int y;

public:
    // Default constructor
    MyClass() : x(0), y(0) {}

    // Parameterized constructor
    MyClass(int a, int b) : x(a), y(b) {}

    // Overload >> operator for input
    friend istream& operator>>(istream& input, MyClass& obj);

    // Overload << operator for output
    friend ostream& operator<<(ostream& output, const MyClass& obj);
};

// Definition of >> operator overloading
istream& operator>>(istream& input, MyClass& obj) {
    cout << "Enter value for x: ";
    input >> obj.x;
    cout << "Enter value for y: ";
    input >> obj.y;
    return input;
}

// Definition of << operator overloading
ostream& operator<<(ostream& output, const MyClass& obj) {
    output << "x = " << obj.x << ", y = " << obj.y;
    return output;
}

int main() {
    MyClass obj;

    // Use overloaded >> operator to input values
    cout << "Enter values for MyClass object:" << endl;
    cin >> obj;

    // Use overloaded << operator to output values
    cout << "Values in MyClass object: " << obj << endl;

    return 0;
}