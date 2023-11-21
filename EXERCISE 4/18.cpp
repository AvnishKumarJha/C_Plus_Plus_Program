// SIMPLE ARITHMETIC CALCULATOR.
#include <bits/stdc++.h>
using namespace std;

void sum(int x, int y)
{
    int z;
    z=x+y;
    cout<<"The Addition of the two Number are "<<z<<endl;
}

void difference(int a, int b)
{
    int c;
    c=a-b;
    cout<<"The Difference of the two Number are "<<c<<endl;
}

void product(int p, int q)
{
    int r;
    r=p*q;
    cout<<"The Product of the two Number are "<<r<<endl;
}

void division(int d, int e)
{
    int f;
    f=d/e;
    cout<<"The Division of the two Number are "<<f<<endl;
}

int main()
{
    int x,y;
    cout<<"*****Display the Simple Arithmetic Calculator*****"<<endl<<endl;
    cout<<"Enter the First Number"<<endl;
    cin>>x;
    cout<<"Enter the Second Number"<<endl;
    cin>>y;
    sum(x,y);

    int a,b;
    cout<<"\nEnter the First Number"<<endl;
    cin>>a;
    cout<<"Enter the Second Number"<<endl;
    cin>>b;
    difference(a,b);

    int p,q;
    cout<<"\nEnter the First Number"<<endl;
    cin>>p;
    cout<<"Enter the Second Number"<<endl;
    cin>>q;
    product(p,q);

    int d,e;
    cout<<"\nEnter the First Number"<<endl;
    cin>>d;
    cout<<"Enter the Second Number"<<endl;
    cin>>e;
    division(d,e);

    cout<<"\n*****The End*****";

    return 0;
}