#include <bits/stdc++.h>
using namespace std;

void CheckNumber(int num)
{
    if (num>0)
    {
        cout<<"Positive Number"<<endl;
    }
    else if (num == 0)
    {
        cout<<"Zero Number"<<endl;
    }
    else
    {
        cout<<"Negative Number"<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter any number"<<endl;
    cin>>num;
    CheckNumber(num);
    return 0;
}