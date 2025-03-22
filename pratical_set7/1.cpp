/*Create a program to understand and use of static members and static member functions.*/
#include<iostream>
using namespace std;

class employ {
    int id;
    static int count;
public:
    void setdata() {
        cout << "enter the employ's id : ";
        cin >> id;
        count++;
    }
    void getdata() {
        cout << "the id of the employ is : " << id << " \n this employ's number is: " << count << endl;
    }
    static void getcount() {
        cout << "the value of counter is : " << count << endl << endl;
    }
};

int employ::count;

int main() {
    employ Aashish,neel,bhavya;
    Aashish.setdata();
    Aashish.getdata();
    employ::getcount();
    neel.setdata();
    neel.getdata();
    employ::getcount();
    bhavya.setdata();
    bhavya.getdata();
    employ::getcount();
    return 0;
}