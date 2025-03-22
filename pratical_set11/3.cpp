/*Define two classes Polar and Rectangle to represent points in the polar and rectangular systems. Use conversion routines to convert from one system to the other.*/
#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14159265358979323846; // Precise value of pi

// Forward declaration of Rectangle class
class Rectangle;

// Polar class definition
class Polar {
private:
    double radius; // Radius
    double angle;  // Angle in radians

public:
    // Default constructor
    Polar() : radius(0), angle(0) {}

    // Parameterized constructor
    Polar(double r, double a) : radius(r), angle(a * (pi / 180)) {}

    // Convert Polar to Rectangle
    Rectangle toRectangle() const;

    // Display function
    void display() const {
        cout << "Polar Coordinates: Radius = " << radius << ", Angle = " << angle * (180 / pi) << " degrees" << endl;
    }

    // Getter for radius
    double getRadius() const {
        return radius;
    }

    // Getter for angle
    double getAngle() const {
        return angle;
    }
};

// Rectangle class definition
class Rectangle {
private:
    double x; // x-coordinate
    double y; // y-coordinate

public:
    // Default constructor
    Rectangle() : x(0), y(0) {}

    // Parameterized constructor
    Rectangle(double x1, double y1) : x(x1), y(y1) {}

    // Convert Rectangle to Polar
    Polar toPolar() const;

    // Display function
    void display() const {
        cout << "Rectangular Coordinates: x = " << x << ", y = " << y << endl;
    }

    // Getter for x
    double getX() const {
        return x;
    }

    // Getter for y
    double getY() const {
        return y;
    }
};

// Convert Polar to Rectangle
Rectangle Polar::toRectangle() const {
    double x = radius * cos(angle);
    double y = radius * sin(angle);
    return Rectangle(x, y);
}

// Convert Rectangle to Polar
Polar Rectangle::toPolar() const {
    double r = sqrt(x * x + y * y);
    double a = atan2(y, x); // Use atan2 to handle division by zero
    return Polar(r, a * (180 / pi)); // Convert angle to degrees
}

int main() {
    // Create a Polar object
    Polar p(5, 30); // Radius = 5, Angle = 30 degrees
    cout << "Initial Polar Coordinates:" << endl;
    p.display();

    // Convert Polar to Rectangle
    Rectangle r = p.toRectangle();
    cout << "\nConverted to Rectangular Coordinates:" << endl;
    r.display();

    // Convert Rectangle back to Polar
    Polar p2 = r.toPolar();
    cout << "\nConverted back to Polar Coordinates:" << endl;
    p2.display();

    return 0;
}