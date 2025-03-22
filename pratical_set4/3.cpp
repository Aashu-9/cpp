//to Create a program to convert temperature in Fahrenheit to Celsius and display, using class
#include<iostream> 
using namespace std;  
class temperature  
{  
 float f;  
public:  
 void set_temp()  
 {  
 cout<<"enter temperature in fahrenheit: ";  
 cin>>f;  
 }  
 void display()  
 {  
 float tc;  
 tc=(f-32)*5/9;  
 cout<<"temperature in celcius: "<<tc<<endl;  
 }  
};  
int main()  
{  
 temperature T;  
 T.set_temp();  
 T.display();
 return 0;
}