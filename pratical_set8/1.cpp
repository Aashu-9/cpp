/*Create a class Sample with members a and b of type integer. 
Write a friend function that takes an object as argument and calculates the mean of the two members.*/
#include <iostream>
using namespace std;

class Sample {
private:
    int a; // First integer member
    int b; // Second integer member

public:
    // Constructor to initialize a and b
    Sample(int x, int y) : a(x), b(y) {}

    // Declare the friend function
    friend float calculateMean(Sample s);
};

// Define the friend function
float calculateMean(Sample s) {
    return (s.a + s.b) / 2.0f; // Calculate and return the mean
}

int main() {
    // Create an object of Sample
    Sample obj(10, 20);

    // Calculate the mean using the friend function
    float mean = calculateMean(obj);

    // Display the result
    cout << "Mean of " <<10<< " and " <<20<< " is: " << mean << endl;

    return 0;
}