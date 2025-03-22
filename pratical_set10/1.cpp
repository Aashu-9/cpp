/*a program to overload the + and == operators for the string class.*/
#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char* str;

public:
    // Default constructor
    MyString() {
        str = new char[1];
        *str = '\0';
    }

    // Parameterized constructor
    MyString(const char* s) {
        str = new char[std::strlen(s) + 1];
        strcpy(str, s);
    }

    // Destructor
    ~MyString() {
        delete[] str;
    }

    // Copy constructor
    MyString(const MyString& other) {
        str = new char[std::strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    // Assignment operator
    MyString& operator=(const MyString& other) {
        if (this != &other) { // Self-assignment check
            delete[] str;
            str = new char[std::strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    // Overload == operator for comparison
    bool operator==(const MyString& rhs) const {
        return (std::strcmp(str, rhs.str) == 0);
    }

    // Overload + operator for concatenation
    MyString operator+(const MyString& rhs) const {
        std::cout << "Binary '+' Operator Overloading for Concatenation" << std::endl;
        char* buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
        strcpy(buff, str);
        strcat(buff, rhs.str);
        MyString temp(buff);
        delete[] buff;
        return temp;
    }

    // Display the string and its length
    void display() const {
        std::cout << str << " : " << get_length() << std::endl;
    }

    // Get the length of the string
    int get_length() const {
        return std::strlen(str);
    }
};

int main() {
    MyString s1("ADIT");
    s1.display();

    MyString s2("College");
    s2.display();

    if (s1 == s2)
        cout << "Both strings are same\n\n";
    else
        cout << "Both strings are not same\n\n";

    MyString s3 = s1 + s2;
    s3.display();

    return 0;
}