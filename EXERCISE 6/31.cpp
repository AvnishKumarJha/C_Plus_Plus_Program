#include <bits/stdc++.h>
using namespace std;

void ido()
{
    int a;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Postincrement"<<endl;
    a++;
    cout<<a<<endl;
    cout<<"Preincrement"<<endl;
    ++a;
    cout<<a<<endl;
    cout<<"PostDecrement"<<endl;
    a--;
    cout<<a<<endl;
    cout<<"PreDecrement"<<endl;
    --a;
    cout<<a<<endl;
}

int main()
{
    ido();
    return 0;
}