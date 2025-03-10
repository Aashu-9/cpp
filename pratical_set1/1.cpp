// arithmetic operations in c++
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first no of your choice: ";
    cin>>a;
    cout<<"\nEnter the second no of your choice: ";
    cin>>b;
    int sum=a+b;
    cout<<"\nSum of given no "<<a<<" and "<<b<<" is "<<sum;
    int sub=a-b;
    cout<<"\nSubtraction of given no "<<a<<" and "<<b<<" is "<<sub;
    int mul=a*b;
    cout<<"\nMultiplication of given no "<<a<<" and "<<b<<" is "<<mul;
    int div=a/b;
    cout<<"\nDividion of given no "<<a<<" and "<<b<<" is "<<div;
    int mod=a%b;
    cout<<"\nmodulo of given no "<<a<<" and "<<b<<" is "<<mod;
    return 0;
    }
