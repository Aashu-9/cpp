/*a program to convert a basic type to a class type and vice versa.*/
#include <iostream>
using namespace std;

// Class definition
class Distance {
private:
    int meters;

public:
    // Default constructor
    Distance() : meters(0) {}

    // Parameterized constructor to convert basic type (int) to class type (Distance)
    Distance(int m) : meters(m) {}

    // Conversion operator to convert class type (Distance) to basic type (int)
    operator int() const {
        return meters;
    }

    // Function to display distance
    void display() const {
        cout << "Distance: " << meters << " meters" << endl;
    }
};

int main() {
    // Convert basic type (int) to class type (Distance)
    int basicValue = 100;
    Distance dist = basicValue; // Uses parameterized constructor
    cout << "Converting int to Distance:" << endl;
    dist.display();

    // Convert class type (Distance) to basic type (int)
    Distance dist2(200);
    int convertedValue = dist2; // Uses conversion operator
    cout << "\nConverting Distance to int:" << endl;
    cout << "Converted Value: " << convertedValue << endl;

    return 0;
}