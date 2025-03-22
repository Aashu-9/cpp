/*a class Employee with suitable members and functions.
an array of objects and demonstrate the use of the class using the main function.*/
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id; // Employee ID
    string name; // Employee name
    double salary; // Employee salary

public:
    // Function to set employee details
    void setData(int empId, string empName, double empSalary) {
        id = empId;
        name = empName;
        salary = empSalary;
    }

    // Function to display employee details
    void getData() const {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    const int numEmployees = 2; // Number of employees
    Employee employees[numEmployees]; // Array of Employee objects

    // Input employee details
    for (int i = 0; i < numEmployees; i++) {
        int id;
        string name;
        double salary;

        cout << "Enter details for Employee " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> id;
        cin.ignore(); // Clear the input buffer
        cout << "Name: ";
        getline(cin, name);
        cout << "Salary: ";
        cin >> salary;

        employees[i].setData(id, name, salary); // Set data for each employee
    }

    // Display employee details
    cout << "\nEmployee Details:" << endl;
    for (int i = 0; i < numEmployees; i++) {
        employees[i].getData();
    }

    return 0;
}