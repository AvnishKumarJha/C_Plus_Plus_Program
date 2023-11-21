#include <bits/stdc++.h> //ax+by=c
using namespace std;

void EquationofLine(int a, int b, int c)
{
    cout<<"The Equation of a Line in the form of ax+by=c is given as "<<endl;
    cout<<a<<"x"<<"+"<<b<<"y"<<"="<<c;
}

int main()
{
    int a,b,c;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    cout<<"Enter the value of c "<<endl;
    cin>>c;

    EquationofLine(a,b,c);

    return 0;
}