#include <bits/stdc++.h>
using namespace std;

void CheckVorC(char ch)
{
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout<<"Alphabet is an Vowel "<<ch<<endl;
    }
    else
    {
        cout<<"Alphabet is a Consonant "<<ch<<endl;
    }
}

int main()
{
    char ch;
    cout<<"Enter any Alphabet"<<endl; 
    cin>>ch;
    CheckVorC(ch);

    return 0;
}