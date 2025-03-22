/*a program to demonstrate the use of copy constructor.*/
#include <iostream>
using namespace std;

class Sample {
private:
    int id; // Member variable

public:
    // Parameterized constructor
    Sample(int x) : id(x) {
        cout << "Parameterized constructor called." << endl;
    }

    // Copy constructor
    Sample(const Sample &obj) {
        id = obj.id; // Copy the value of id
        cout << "Copy constructor called." << endl;
    }

    // Function to display the id
    void display() const {
        cout << "ID = " << id << endl;
    }
};

int main() {
    // Create an object using the parameterized constructor
    Sample obj1(10);
    cout << "Object 1: ";
    obj1.display();

    // Create a new object as a copy of obj1 using the copy constructor
    Sample obj2 = obj1; // Copy constructor is called here
    cout << "Object 2 (copy of Object 1): ";
    obj2.display();

    return 0;
}