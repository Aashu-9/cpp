/*Write a program to implement single inheritance. Show the consequences of deriving a class in public, protected and private manner with a simple example. Consider a simple
example. Class Student stores the roll-number, class Test stores the marks in two subjects and class Result contains the total marks obtained in the test. The class Result inherits the
details of the marks obtained and roll number of students through multilevel inheritance. Write a program to demonstrate the above.*/
#include <iostream>
using namespace std;

// Base class: Student
class Student {
private:
    int rollNumber;

protected:
    void setRollNumber(int roll) {
        rollNumber = roll;
    }

    int getRollNumber() const {
        return rollNumber;
    }
};

// Derived class: Test (inherits from Student)
class Test : public Student {
protected:
    float subject1Marks;
    float subject2Marks;

public:
    void setMarks(float m1, float m2) {
        subject1Marks = m1;
        subject2Marks = m2;
    }

    void displayMarks() const {
        cout << "Marks in Subject 1: " << subject1Marks << endl;
        cout << "Marks in Subject 2: " << subject2Marks << endl;
    }
};

// Derived class: Result (inherits from Test)
class Result : public Test {
private:
    float totalMarks;

public:
    void calculateTotal() {
        totalMarks = subject1Marks + subject2Marks;
    }

    void displayResult() const {
        cout << "Roll Number: " << getRollNumber() << endl;
        displayMarks();
        cout << "Total Marks: " << totalMarks << endl;
    }

    void setStudentDetails(int roll, float m1, float m2) {
        setRollNumber(roll); // Accessing protected member of Student
        setMarks(m1, m2);    // Accessing public member of Test
    }
};

int main() {
    Result result;

    // Set student details
    result.setStudentDetails(101, 85.5, 90.0);

    // Calculate and display result
    result.calculateTotal();
    result.displayResult();

    return 0;
}