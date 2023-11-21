#include <bits/stdc++.h>
using namespace std;

void CheckDivisible(int num)
{
    if(num%5==0 && num%11==0)
    {
        cout<<"Divisible by both 5 and 11 is "<<num<<endl;
    }
    else if (num%5==0)
    {
        cout<<"Divisible by 5 is "<<num<<endl;
    }
    else if (num%11==0)
    {
        cout<<"Divisible by 11 is "<<num<<endl;
    }
    else
    {
        cout<<"Not Divisible by both 5 and 11 are "<<num<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter any number"<<endl;
    cin>>num;
    CheckDivisible(num);
    return 0;
}