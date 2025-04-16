/*constructor to allocate memeory dynamically and read value create a display function to
display the string , a destructor function to free allocated memory.*/
#include<iostream>
#include<string.h>
using namespace std; 
class String 
{ 
 char *name; 
 int length; 
 public: 
 String (char *s) 
 {length=strlen(s);    
    name= new char[length+1]; 
    strcpy(name,s); 
    } 
    void Display() 
    { 
    cout<<"Name :- "<<name<<endl; 
    } 
    ~String () 
    { 
    delete []name; 
    } 
   }; 
   int main() 
   { 
    String s1("Aashu"),s2("Parmar"); 
    s1.Display(); 
    s2.Display(); 
    return 0; 
   }
