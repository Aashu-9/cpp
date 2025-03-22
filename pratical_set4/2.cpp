/* A class to represent a bank account. Include the members like name of the depositor, account number, type of account, and balance amount in the account. Make functions;
(1) To assign initial values
(2) To deposit an amount
(3) To withdraw an amount after checking the balance
(4) To display name and balance
A main program to test the program*/
#include <iostream>
#include <iomanip>
using namespace std;

class Bank {
private:
    char name[30];       
    long int acc_num;     
    char acc_type[30];    
    double balance;       

public:
    // Function to initialize account details
    void init_acc() {
        cout << "Enter the depositor name: ";
        cin.getline(name, 30);
        cout << "Enter account number: ";
        cin >> acc_num;
        cout << "Enter account type: ";
        cin >> acc_type;
        cout << "Enter initial amount: ";
        cin >> balance;
        cin.ignore(); // Clear the input buffer
    }

    // Function to deposit an amount
    void deposit_amount() {
        double deposit;
        cout << "Enter deposit amount: ";
        cin >> deposit;
        if (deposit > 0) {
            balance += deposit;
            cout << "Deposited " << deposit << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount. Amount must be greater than 0." << endl;
        }
    }

    // Function to withdraw an amount
    void withdraw_amount() {
        double withdraw;
        cout << "Enter withdraw amount: ";
        cin >> withdraw;
        if (withdraw > 0) {
            if (balance >= withdraw) {
                balance -= withdraw;
                cout << "Withdrew " << withdraw << ". New balance: " << balance << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
        } else {
            cout << "Invalid withdrawal amount. Amount must be greater than 0." << endl;
        }
    }

    // Function to display account details
    void display() {
        cout << "Account Holder: " << name << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    Bank A1;
    A1.init_acc();    // Initialize account details
    A1.display();     // Display initial account detailsA
    A1.deposit_amount();  // Deposit money
    A1.withdraw_amount(); // Withdraw moneyA
    A1.display();     // Display final account details
    return 0;
}