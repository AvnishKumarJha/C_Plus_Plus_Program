#include <bits/stdc++.h>
using namespace std;

void sum(int a, int b)
{
    int c;
    c=a+b;
    cout<<"The Addition of 2 Number are "<<c<<endl;
}

void diff(int p, int q)
{
    int r;
    r=p-q;
    cout<<"The Difference of 2 Number are "<<r;
}

int main()
{
    int a,b,c;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    sum(a,b);
    
    int p,q,r;
    cout<<"Enter the value of p "<<endl;
    cin>>p;
    cout<<"Enter the value of q "<<endl;
    cin>>q;
    diff(p,q);

    return 0;
}