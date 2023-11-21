#include <bits/stdc++.h>
using namespace std;

void CheckTriangle(int fa, int sa, int ta)
{
    int sum;
    sum=fa+sa+ta;
    if (sum==180)
    {
        cout<<"It ia valid Triangle"<<endl;
    }
    else
    {
        cout<<"It is not a valid Triangle"<<endl;
    }
}

int main()
{
    int fa,sa,ta;
    cout<<"Enter First Angle of the Triangle"<<endl;
    cin>>fa;
    cout<<"Enter Second Angle of the Triangle"<<endl;
    cin>>sa;
    cout<<"Enter Third Angle of the Triangle"<<endl;
    cin>>ta;
    CheckTriangle(fa,sa,ta);
    return 0;
}