#include <iostream>
#include <cstring> // For strcpy
using namespace std;

class strings {
    char *p;
public:
    strings() { p = nullptr; } // Initialize pointer

    void setPointer() {
        const char* name = "PARMAR AASHISH"; // Use string literal
        p = new char[strlen(name) + 1]; // Allocate dynamic memory
        strcpy(p, name); // Copy string to allocated memory
    }

    void PrintPointer() {
        cout << p << endl;
    }

    ~strings() {
        delete[] p; // Free memory
    }
};

int main() {
    strings s1;
    s1.setPointer();
    s1.PrintPointer();
    return 0;
}
