//area
#include<iostream>
#include<math.h>
using namespace std;
class square
{
    float l;
    public:
    void getdata()
    {
        cout<<"Enter the lenght of square:";
        cin>>l;
    }
    float area();
};

class circle 
{
    float r;
    public:
    void getdata()
    { 
        cout <<"Enter the radius of circle:";
        cin>>r;
    }
   float area();
};
class triangle 
{
float a,b,c,s,so;
public:
void getdata()
{
    cout<<"Enter the sides of triangle:";
    cin>>a>>b>>c;

}
 float area();
};
float square::area()
{
    return (l*l);
}
float circle::area()
{
    return (3.14*r*r);
}
float triangle::area()
{
    s=(a+b+c)/2;
    so=sqrt(s*(s-a)*(s-b)*(s-c));
    return so;
}
int main()
{
square s; 
circle c;
triangle t;

cout<<"\n Find Area of Square \n"; 
s.getdata();
cout<<"\nArea of Square = "<<s.area()<<endl;
cout<<"\n Find Area of Circle \n"; 
c.getdata();
cout<<"\nArea of Circle = "<<c.area()<<endl;
cout<<"\n Find Area of Trinagle \n"; 
t.getdata();
cout<<"\nArea of Triangle = "<<t.area()<<endl;
return 0;
}