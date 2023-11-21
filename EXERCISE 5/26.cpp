#include <bits/stdc++.h>
using namespace std;

void CostPrice(int sp, int p)
{
    int cp;
    cp=sp-p;
    cout<<"The Cost Price of 15 item are "<<cp;
}

int main()
{
    int sp,p;
    cout<<"Enter the Total Selling Price of 15 items are "<<endl;
    cin>>sp;
    cout<<"Enter the Total Profit earned of 15 items are "<<endl;
    cin>>p;
    CostPrice(sp,p);
    return 0;
}