/*a program to convert an object of one class to another class.*/
#include <iostream>
using namespace std;

// Forward declaration of ClassB
class ClassB;

// ClassA definition
class ClassA {
private:
    int value;

public:
    // Default constructor
    ClassA() : value(0) {}

    // Parameterized constructor
    ClassA(int val) : value(val) {}

    // Getter for value
    int getValue() const {
        return value;
    }

    // Conversion operator to convert ClassA to ClassB
    operator ClassB() const;
};

// ClassB definition
class ClassB {
private:
    double data;

public:
    // Default constructor
    ClassB() : data(0.0) {}

    // Parameterized constructor
    ClassB(double val) : data(val) {}

    // Conversion constructor to convert ClassA to ClassB
    ClassB(const ClassA& obj) {
        data = static_cast<double>(obj.getValue()); // Convert int to double
    }

    // Display function
    void display() const {
        cout << "ClassB Data: " << data << endl;
    }
};

// Definition of conversion operator in ClassA
ClassA::operator ClassB() const {
    return ClassB(static_cast<double>(value)); // Convert int to double
}

int main() {
    // Create an object of ClassA
    ClassA objA(42);

    // Convert ClassA to ClassB using conversion operator
    ClassB objB1 = objA; // Implicit conversion
    cout << "Conversion using Conversion Operator:" << endl;
    objB1.display();

    // Convert ClassA to ClassB using conversion constructor
    ClassB objB2(objA); // Explicit conversion
    cout << "\nConversion using Conversion Constructor:" << endl;
    objB2.display();

    return 0;
}