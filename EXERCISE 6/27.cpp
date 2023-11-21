#include <bits/stdc++.h>
using namespace std;

void TotalMoney(int a, int b, int c, int d, int e)
{
    double sum,rup;
    sum=((50*a)+(25*b)+(20*c)+(10*d)+(5*e));
    cout<<"Total amount of money in paise "<<sum<<endl;
    rup=sum/100;
    cout<<"Total amount of money in Ruppes "<<rup;
}

int main()
{
    int a,b,c,d,e;
    cout<<"Enter the amount of 50 Paise coins "<<endl;
    cin>>a;
    cout<<"Enter the amount of 25 Paise coins "<<endl;
    cin>>b;
    cout<<"Enter the amount of 20 Paise coins "<<endl;
    cin>>c;
    cout<<"Enter the amount of 10 Paise coins "<<endl;
    cin>>d;
    cout<<"Enter the amount of 5 Paise coins "<<endl;
    cin>>e;
    TotalMoney(a,b,c,d,e);

    return 0;
}