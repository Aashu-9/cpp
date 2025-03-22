/*a class Polar which describes a point in the plane using polar coordinates radius and angle. Use overloaded + operator to add two polar objects.*/
#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14159265358979323846; // Precise value of pi

class Polar {
private:
    double radius; // Radius
    double angle;  // Angle in radians

public:
    // Default constructor
    Polar() : radius(0), angle(0) {}

    // Parameterized constructor
    Polar(double r, double a) {
        radius = r;
        angle = a * (pi / 180); // Convert angle from degrees to radians
    }

    // Overload + operator to add two Polar objects
    Polar operator+(const Polar& other) const {
        // Convert polar coordinates to Cartesian coordinates
        double x1 = radius * cos(angle);
        double y1 = radius * sin(angle);

        double x2 = other.radius * cos(other.angle);
        double y2 = other.radius * sin(other.angle);

        // Add Cartesian coordinates
        double xSum = x1 + x2;
        double ySum = y1 + y2;

        // Convert back to polar coordinates
        double rSum = sqrt(xSum * xSum + ySum * ySum);
        double aSum = atan2(ySum, xSum); // Use atan2 to handle division by zero

        return Polar(rSum, aSum * (180 / pi)); // Convert angle back to degrees
    }

    // Display function
    void display() const {
        cout << "Radius: " << radius << ", Angle: " << angle * (180 / pi) << " degrees" << endl;
    }
};

int main() {
    double r, a;

    // Input for the first Polar object
    cout << "Enter radius and angle (in degrees) for p1: ";
    cin >> r >> a;
    Polar p1(r, a);

    // Create a second Polar object
    Polar p2(8, 45); // Radius = 8, Angle = 45 degrees

    // Add two Polar objects using overloaded + operator
    Polar p3 = p1 + p2;

    // Display results
    cout << "\np1:\n";
    p1.display();

    cout << "\np2:\n";
    p2.display();

    cout << "\np3 (p1 + p2):\n";
    p3.display();

    return 0;
}