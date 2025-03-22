//max in three numbers
#include<iostream>
using namespace std;
class logic
{  public:
void swap(int &p,int &q)
  {  int tem;
    tem=p;
    p=q;
    q=tem;
  }
  int fmax(int &x,int &y,int &z)
  {
    if (x<y)
    swap(x,y);
    if (x<z)
    swap(x,z);
  return x;
  }
};
int main()
{   logic done;
    int a,b,c;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c;
    int t=done.fmax(a,b,c);
    cout<<"The largest no is "<<t<<endl;
    return 0;
}