#include <bits/stdc++.h> // 1 Rs=100 
using namespace std;

void Totalmoney(int a, int b, int c, int d, int e)
{
    double sum,paise;
    sum=((50*a)+(25*b)+(20*c)+(10*d)+(5*e));
    cout<<"Total amount money in Rupees "<<sum<<endl;
    paise=sum*100;
    cout<<"Total amount of money in Paise "<<paise<<endl;
}

int main()
{
    int a,b,c,d,e;
    cout<<"Enter 50 paise coins "<<endl;
    cin>>a;
    cout<<"Enter 25 paise coins "<<endl;
    cin>>b;
    cout<<"Enter 20 paise coins "<<endl;
    cin>>c;
    cout<<"Enter 10 paise coins "<<endl;
    cin>>d;
    cout<<"Enter 5 paise coins "<<endl;
    cin>>e;
    Totalmoney(a,b,c,d,e);
    return 0;
}