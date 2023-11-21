#include <bits/stdc++.h>
using namespace std;

void eoro(int num)
{
    if (num%2==0)
    {
        cout<<num<<" is a even"<<endl;
    }
    else
    {
        cout<<num<<" is odd"<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter any Number"<<endl;
    cin>>num;
    eoro(num);
    return 0;
}