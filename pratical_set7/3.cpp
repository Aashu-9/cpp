#include <iostream>
using namespace std;

class Time {
private:
    int hours;   // Hours
    int minutes; // Minutes

public:
    // Function to set time
    void setTime(int h, int m) {
        hours = h;
        minutes = m;
    }

    // Function to display time
    void displayTime() const {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }

    // Function to add two Time objects
    Time add(Time t1, Time t2) {
        Time result;
        result.minutes = t1.minutes + t2.minutes;
        result.hours = t1.hours + t2.hours + (result.minutes / 60); // Handle overflow
        result.minutes = result.minutes % 60; // Adjust minutes
        return result;
    }
};

int main() {
    Time time1, time2, sum;

    // Set time for time1
    time1.setTime(2, 45);
    cout << "Time 1: ";
    time1.displayTime();

    // Set time for time2
    time2.setTime(3, 30);
    cout << "Time 2: ";
    time2.displayTime();

    // Add time1 and time2
    sum = sum.add(time1, time2);
    cout << "Sum of Time 1 and Time 2: ";
    sum.displayTime();

    return 0;
}