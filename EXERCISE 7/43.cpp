#include <bits/stdc++.h>
using namespace std;

void CheckAorDorSp(char ch)
{
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        cout<<"Character is an Alphabet "<<ch<<endl;
    }
    else if (ch>='0' && ch<='9')
    {
        cout<<"Character is a Digit "<<ch<<endl;
    }
    else
    {
        cout<<"Character is a Special Digit "<<ch<<endl;
    }
}

int main()
{
    char ch;
    cout<<"Enter any Character"<<endl;
    cin>>ch;
    CheckAorDorSp(ch);
    return 0;
}