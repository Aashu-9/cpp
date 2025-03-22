/*a program to demonstrate the use of arrays within a class. 
Create and manage an inventory system.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX_REC 10

class inventry {
    char item_name[20];
    int code;
    int cost;
public:
    void getdata() {
        cout << " \n enter item_name : ";
        cin.ignore();
        cin.getline(item_name, 20);
        cout << " enter code : ";
        cin >> code;
        cout << " enter cost: ";
        cin >> cost;
    }
    void showdata() {
        cout << endl;
        cout << setw(15) << item_name;
        cout << setw(10) << code;
        cout << setw(15) << cost;
    }
};

int main() 
{
    inventry record[MAX_REC];
    int i, n;
    cout << " \n ------- INVENTRY MANAGEMENT ------- \n ";
    cout << " \n how many records you want create : ";
    cin >> n;
    cout << " \n enter " << n << " records \n ";
    for (i = 0; i < n; i++) {
        record[i].getdata();
        cout << "\n";
    }
    cout << "\n ---------- STOCK INFORMATION ---------- \n\n";
    cout << "--------------------------------------------- \n";
    cout << setw(15) << "item_name";
    cout << setw(10) << "code";
    cout << setw(15) << "cost" << endl;
    cout << "---------------------------------------------";
    for (i = 0; i < n; i++)
        record[i].showdata();
    cout << endl;
    return 0;
}