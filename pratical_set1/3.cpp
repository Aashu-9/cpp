//function defination out side class
#include <iostream>
using namespace std;
class str
{
    public:
    float l,b,h;
    float area();
    float vol();
};
float str::area()
{
    float a=l*b;
    return a;
}
float str::vol()
{
    float o=l*b*h;
    return o;
}
int main()
{
    str obj1;
    cout<<"Enter the length ,breath and height respectively to find area and volume of given parameter:\n";
    cin>>obj1.l>>obj1.b>>obj1.h;
    cout<<"Area of given parameter is "<<obj1.area()<<endl;
    cout<<"Volume of given parameter is "<<obj1.vol();
 return 0;
}
