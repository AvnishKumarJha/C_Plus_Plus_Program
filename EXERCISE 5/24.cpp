#include <bits/stdc++.h>
using namespace std;

void InterchangeTheContent(int c, int d)
{
    cout<<"Before Interchange the Contents of C and d "<<endl<<c<<endl<<d<<endl;
    int temp;
    temp=c;
    c=d;
    d=temp;
    cout<<"After Interchange the Contents of C and d "<<endl<<c<<endl<<d<<endl;
}

int main()
{   
    int c,d;
    cout<<"Enter the First number are input through the keyboard at location C "<<endl;
    cin>>c;
    cout<<"Enter the Second number are input through the keyboard at location D "<<endl;
    cin>>d;
    InterchangeTheContent(c,d);

    return 0;
}