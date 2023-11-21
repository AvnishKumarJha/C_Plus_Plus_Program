#include <bits/stdc++.h>
using namespace std;

void CalculateGrossSalary(float bs)
{
    float da,hra,gs;
    da=bs*0.40;
    hra=bs*0.20;
    gs=bs+da+hra;
    cout<<"Ramesh's Gross Salary "<<gs;

}

int main()
{   
    float bs;
    cout<<"Enter the Ramesh Basic Salary"<<endl;
    cin>>bs;
    CalculateGrossSalary(bs);
    return 0;
}