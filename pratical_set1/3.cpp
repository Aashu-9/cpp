//string operations
#include <iostream>
using namespace std;

class String {
public:
    int findlength(char *p);
    void stringcopy(char *p);
    void stringcompare();
    void stringconcat();
    void stringsearch(const char* str1, const char* substr1);
};

// Function to find the length of a string
int String::findlength(char *p) {
    int count = 0;
    for (; *p != '\0'; p++) {
        count++;
    }
    cout << "Length of the string is: " << count << endl;
    return count;
}

// Function to copy one string to another
void String::stringcopy(char *p) {
    char str2[100];
    int i;
    for (i = 0; p[i] != '\0'; i++) {
        str2[i] = p[i];
    }
    str2[i] = '\0'; // Null terminate the copied string

    cout << "Original string: " << p << endl;
    cout << "Copied string: " << str2 << endl;
}

// Function to compare two strings
void String::stringcompare() {
    char str1[50], str2[50];
    int flag = 1;

    cout << "Enter first string: ";
    cin.ignore(); // Clear buffer before taking input
    cin.getline(str1, 50);
    cout << "Enter second string: ";
    cin.getline(str2, 50);

    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }
}

// Function to concatenate two strings
void String::stringconcat() {
    char s1[100], s2[100];
    int i, j;

    cout << "Enter first string: ";
    cin.ignore();
    cin.getline(s1, 100);
    cout << "Enter second string: ";
    cin.getline(s2, 100);

    for (i = 0; s1[i] != '\0'; i++);  // Move to end of s1
    for (j = 0; s2[j] != '\0'; i++, j++) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';  // Null terminate the concatenated string

    cout << "Concatenated string: " << s1 << endl;
}

// Function to search for a substring
void String::stringsearch(const char* str1, const char* substr1) {
    int length = 0, subLength = 0;

    // Calculate length of main string
    for (; str1[length] != '\0'; length++);

    // Calculate length of substring
    for (; substr1[subLength] != '\0'; subLength++);

    for (int i = 0; i <= length - subLength; ++i) {
        int j;
        for (j = 0; j < subLength; ++j) {
            if (str1[i + j] != substr1[j]) {
                break;
            }
        }
        if (j == subLength) {  // Substring found
            cout << "\nSubstring found at position " << i << endl;
            return;
        }
    }

    cout << "\nSubstring not found in the original string." << endl;
}

// Main function
int main() {
    String obj1;
    char str[100];
    
    cout << "Enter a string: ";
    cin.getline(str, 100);

    obj1.findlength(str);
    obj1.stringcopy(str);
    obj1.stringcompare();
    obj1.stringconcat();
    obj1.stringsearch("Hello World", "World");

    return 0;
}
