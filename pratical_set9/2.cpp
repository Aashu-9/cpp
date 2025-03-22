#include <iostream>
using namespace std;

class Complex {
private:
    int real;      // Real part
    int imaginary; // Imaginary part

public:
    // Function to set the complex number
    void setData(int r, int i) {
        real = r;
        imaginary = i;
    }

    // Overload the - operator
    Complex operator-(const Complex &obj) const {
        Complex temp;
        temp.real = real - obj.real;
        temp.imaginary = imaginary - obj.imaginary;
        return temp;
    }

    // Overload the + operator
    Complex operator+(const Complex &obj) const {
        Complex temp;
        temp.real = real + obj.real;
        temp.imaginary = imaginary + obj.imaginary;
        return temp;
    }

    // Function to display the complex number
    void showData() const {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    // Set data for c1 and c2
    c1.setData(5, 10);
    c2.setData(4, 9);

    // Subtract c2 from c1
    c3 = c1 - c2;
    cout << "Difference of c1 and c2: ";
    c3.showData();

    // Add c1 and c2
    c3 = c1 + c2;
    cout << "Sum of c1 and c2: ";
    c3.showData();

    return 0;
}