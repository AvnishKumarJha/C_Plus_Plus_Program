#include <bits/stdc++.h>
using namespace std;

void Leapyear(int year)
{
    if ((year % 400 == 0)  || (year % 4 == 0) && (year % 100 != 0))
    {
        cout<<year<<" is a leap Year"<<endl;
    }
    else
    {
        cout<<year<<" is not a Leap Year"<<endl;
    }
}

int main()
{
    int year;
    cout<<"Enter Year"<<endl;
    cin>>year;
    Leapyear(year);

    return 0;
}