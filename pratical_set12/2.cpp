/*Extend the above program in to add a Sports class. The Result class inherits the details of
marks obtained from class Test and the performance in sports from the Sports class (hybrid inheritance).*/
#include <iostream>
#include <vector>
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

// Sports class
class Sports {
protected:
    float sportsScore;

public:
    void setSportsScore(float score) {
        sportsScore = score;
    }

    void displaySportsScore() const {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

// Derived class: Result (inherits from Test and Sports)
class Result : public Test, public Sports {
private:
    float totalMarks;

public:
    void calculateTotal() {
        totalMarks = subject1Marks + subject2Marks + sportsScore;
    }

    void displayResult() const {
        cout << "Roll Number: " << getRollNumber() << endl;
        displayMarks();
        displaySportsScore();
        cout << "Total Marks (including sports): " << totalMarks << endl;
        cout << "-------------------------" << endl;
    }

    void setStudentDetails(int roll, float m1, float m2, float score) {
        setRollNumber(roll); // Accessing protected member of Student
        setMarks(m1, m2);    // Accessing public member of Test
        setSportsScore(score); // Accessing public member of Sports
    }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Create a vector to store multiple students
    vector<Result> students(numStudents);

    // Input details for each student
    for (int i = 0; i < numStudents; ++i) {
        int roll;
        float m1, m2, score;

        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        cout << "Roll Number: ";
        cin >> roll;
        cout << "Marks in Subject 1: ";
        cin >> m1;
        cout << "Marks in Subject 2: ";
        cin >> m2;
        cout << "Sports Score: ";
        cin >> score;

        students[i].setStudentDetails(roll, m1, m2, score);
        students[i].calculateTotal();
    }

    // Display results for all students
    cout << "\nResults for all students:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        students[i].displayResult();
    }

    return 0;
}