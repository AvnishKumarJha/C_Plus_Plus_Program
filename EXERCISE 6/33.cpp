#include <bits/stdc++.h>
using namespace std;


int main()
{
    int num;
    float floatvar;
    cout<<"Enter any Floating Number "<<endl;
    cin>>floatvar;
    num=int(floatvar);
    num=num%100;
    cout<<num;
    return 0;
}