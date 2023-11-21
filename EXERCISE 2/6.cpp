#include <bits/stdc++.h>
using namespace std;

void sum(int a, int b, int c)
{
    double x;
    x=a/(b-c);
    cout<<x;
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

    sum(a,b,c);

    return 0;
}