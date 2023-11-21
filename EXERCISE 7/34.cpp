#include <bits/stdc++.h>
using namespace std;

void GAThreeNum(int a, int b, int c)
{
    cout<<"Print the Greatest Among Three Number"<<endl;
    if (a>b && a>c)        
    {
        cout<<"A is Greatest "<<a<<endl;
    }
    else if (b>c)
    {
        cout<<"B is Greatest "<<b<<endl;
    }
    else
    {
        cout<<"C is Greatest "<<c<<endl;
    }
}

int main()
{
    int a,b,c;
    cout<<"Enter First Number"<<endl;
    cin>>a;
    cout<<"Enter Second Number"<<endl;
    cin>>b;
    cout<<"Enter Third Number"<<endl;
    cin>>c;
    GAThreeNum(a,b,c);

    return 0;
}       