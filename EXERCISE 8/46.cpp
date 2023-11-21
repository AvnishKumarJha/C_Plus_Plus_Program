#include <bits/stdc++.h>
using namespace std;

void CalculateGrossSalary(int bs)
{
    float hra,da,gs;
    if (bs>20000)
    {
        hra=(0.3*bs);
        da=(0.95*bs);
        gs=bs+hra+da;
        cout<<"Gross Salary Will be "<<gs<<endl;
    }
    else if (bs>=10000 && bs<=20000)
    {
        hra=(0.25*bs);
        da=(0.9*bs);
        gs=bs+hra+da;
        cout<<"Gross Salary Will be "<<gs<<endl;
    }
    else
    {
        hra=(0.20*bs);
        da=(0.8*bs);
        gs=bs+hra+da;
        cout<<"Gross Salary Will be "<<gs<<endl;
    }
}

int main()
{
    int bs;
    cout<<"Enter Basic Salary of an Employee are "<<endl;
    cin>>bs;
    CalculateGrossSalary(bs);
    return 0;
}