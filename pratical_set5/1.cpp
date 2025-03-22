/*Create a class 'DISTANCE' with feet and inches as data members. Create member function to input distance, member function to output
 distance and member function to add two distance objects. Write a main function to create objects of DISTANCE class. Input
 two distances and output the sum.*/
#include <iostream>
#include <iomanip>
using namespace std;

class DISTANCE {
private:
    int feet, inches;

public:
    // Function to input distance
    void input() {
        cout << "Enter distance in feet: ";
        cin >> feet;
        cout << "Enter distance in inches: ";
        cin >> inches;
    }

    // Function to sum two distances
    void sum(DISTANCE d1, DISTANCE d2) {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        // Normalize inches if >= 12
        normalize();
    }

    // Function to normalize inches and adjust feet
    void normalize() {
        if (inches >= 12) {
            feet += inches / 12;
            inches %= 12;
        }
    }

    // Function to display distance
    void display() {
        cout << "Feet: " << feet << setw(20) << "Inches: " << inches << endl;
    }
};

int main() {
    DISTANCE o1, o2, c;

    // Input for first object
    cout << "For first object: " << endl;
    o1.input();

    // Input for second object
    cout << "For second object: " << endl;
    o2.input();

    // Sum the distances
    c.sum(o1, o2);

    // Display the result
    cout << "Sum of distances: " << endl;
    c.display();

    return 0;
}