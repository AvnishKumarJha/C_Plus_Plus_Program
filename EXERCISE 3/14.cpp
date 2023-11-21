#include <bits/stdc++.h>
using namespace std;

void CalculateProfitOrLoss(int cp, int sp)
{
    if (sp>cp)
    {
        int p;
        p=sp-cp;
        cout<<"Profit of the Product is "<<p<<endl;
    }
    else
    {
        int l;
        l=cp-sp;
        cout<<"Loss of the Product is "<<l<<endl;
    }
}

int main()
{
    int cp,sp;
    cout<<"Enter the Cost Price of the Product "<<endl;
    cin>>cp;
    cout<<"Enter the Selling Price of the Product "<<endl;
    cin>>sp;
    CalculateProfitOrLoss(cp,sp);
    return 0;
}