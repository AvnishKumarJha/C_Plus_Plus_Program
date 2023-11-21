#include <bits/stdc++.h>
using namespace std;

void CheckAlphabet(char ch)
{
    if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        cout<<"Charater is a Alphabet "<<ch<<endl;
    }
    else
    {
        cout<<"Character is not a Alphabet "<<ch<<endl;
    }
}

int main()
{
    char ch;
    cout<<"Enter a Character"<<endl;
    cin>>ch;
    CheckAlphabet(ch);
    return 0;
}