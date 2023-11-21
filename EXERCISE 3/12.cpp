#include <bits/stdc++.h>  // A = b h .  P = 2 b + 2 h .
using namespace std;

void rectangle(int l, int b)
{
    float a,p;
    a=l*b;
    cout<<"The Area of the Rectangle is "<<a<<endl;
    p=2*l+2*b;
    cout<<"The Perimeter of the Rectangle is "<<p<<endl;
}
int main()
{
    int l,b;
    cout<<"Enter the Length of the Rectangle "<<endl;
    cin>>l;
    cout<<"Enter the Breadth of the Rectangle "<<endl;
    cin>>b;
    rectangle(l,b);
    return 0;
}