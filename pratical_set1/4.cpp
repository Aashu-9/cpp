//student 
#include<iostream>
using namespace std;
class student
{
    public:
    char name[20];
    int age;
    void getdata()
    {
        cout<<"Enter your name:"<<endl;
        cin>>name;
        cout<<"Enter your age:"<<endl;
        cin>>age;
    }
    void printdata()
    {
        cout<<"your name is " <<name<<" and your age is "<<age<<"."<<endl;
    }
};
int main()
{
    student data;
    data.getdata();
    data.printdata();
    return 0;
}

