/*Create a class Complex that has two members of type float. 
Write a friend function that calculate the sum of the two complex objects 
and returns the result as an object. Demonstrate the working using a main 
function. For the Complex class, demonstrate the use of multiple constructors.*/
#include <iostream>
using namespace std;

class Complex {
private:
    float a; // Real part
    float b; // Imaginary part

public:
    // Friend function to add two complex numbers
    friend Complex sum(Complex, Complex);

    // Function to set the complex number
    void setComplex() {
        cout << "Enter the real part: ";
        cin >> a;
        cout << "Enter the imaginary part: ";
        cin >> b;
    }

    // Function to display the complex number
    void display() const {
        cout << a << " + " << b << "i" << endl;
    }
};

// Friend function definition
Complex sum(Complex o1, Complex o2) {
    Complex temp;
    temp.a = o1.a + o2.a; // Add real parts
    temp.b = o1.b + o2.b; // Add imaginary parts
    return temp;
}

int main() {
    Complex obj1, obj2, res;

    // Input for the first complex number
    cout << "Enter the first complex number:" << endl;
    obj1.setComplex();

    // Input for the second complex number
    cout << "Enter the second complex number:" << endl;
    obj2.setComplex();

    // Display the input complex numbers
    cout << "First complex number: ";
    obj1.display();
    cout << "Second complex number: ";
    obj2.display();

    // Add the two complex numbers
    res = sum(obj1, obj2);

    // Display the result
    cout << "Sum of the two complex numbers: ";
    res.display();

    return 0;
}