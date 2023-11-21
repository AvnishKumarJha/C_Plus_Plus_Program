#include <bits/stdc++.h>
using namespace std;

void simpleinterest(int p, int r, int t)
{
    float si;
    si=(p*r*t)/100;
    cout<<"The Simple Interest is "<<si<<endl;
}

int main()
{
    int p,r,t;
    float si;
    cout<<"Enter the value of the Principal "<<endl;
    cin>>p;
    cout<<"Enter the value of the Rate "<<endl;
    cin>>r;
    cout<<"Enter the value of the Time "<<endl;
    cin>>t;
    simpleinterest(p,r,t);
    
    return 0;
}