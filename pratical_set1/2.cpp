//student data
#include<iostream>
#include<string.h>
using namespace std;
class student
{ public:
    
    string name;
    int age;
     
     void Gdata()
     {
        cout<<"Enter your name:"<<endl;
        getline (cin,name);
        cout<<"enter your age:"<<endl;
        cin>>age;
     }
     void Pdata()
     {
        cout<<" your name is "<<name<<endl;
        cout<<"your age is "<<age<<endl;
     }
};
int main()
{
    student obj1;
    obj1.Gdata();
    obj1.Pdata();


    student obj2;
    obj2.Gdata();
    obj2.Pdata();
    return 0;

}