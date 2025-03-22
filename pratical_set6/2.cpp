/*Create a function called reverse that takes two parameters.
 The first parameter, called str is a pointer to a string that
  will be reversed upon return from the function. The second para
  meter is called count, and it specifies how many characters of str to reverse. 
  Give count a default value that, when present, tells function reverse to reverse the entire string*/
#include <iostream>
#include <cstring>   // For strlen()
using namespace std;

// Function to reverse a string
void reverse(char* str, int count = -1) {
    // If count is not provided or is invalid, reverse the entire string
    if (count == -1 || count > strlen(str)) {
        count = strlen(str);
    }

    // Initialize two pointers
    char* start = str; // Points to the start of the string
    char* end = str + count - 1; // Points to the end of the substring to reverse

    // Swap characters from start and end until they meet
    while (start < end) {
        // Swap the characters
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers
        start++;
        end--;
    }
}

int main() {
    char str[200]; // Array to store the user's input string
    int count;

    // Get the input string from the user
    cout << "INPUT STRING: ";
    cin.getline(str, 200);

    // Ask the user how many characters to reverse
    cout << "Up to how many characters of the string do you want to reverse? (Enter 0 to reverse the entire string): ";
    cin >> count;

    // Call the reverse function
    reverse(str, count);

    // Output the reversed string
    cout << "Reversed string: " << str << endl;

    return 0;
}