// Escapes Sequences
#include <bits/stdc++.h>
using namespace std;

void EscapesSeuences()
{
    cout<<"Hello \n World"<<endl;
    cout<<"Hello \t World"<<endl;
    cout<<"Hello \b world"<<endl;
    cout<<"Hello \" World"<<endl;
    cout<<"Hello \' World"<<endl;
    cout<<"Hello \\ world"<<endl;
    cout<<"Hello \r World"<<endl;
    cout<<"Hello \? World"<<endl;
    cout<<"Hello \a world"<<endl;
    cout<<"Hello \f World"<<endl;
    cout<<"Hello \v World"<<endl;
}

void NumericEscapesSequences()
{
    cout<<"Hello \nnn World"<<endl;
    cout<<"Hello \Xnn World"<<endl;
}

int main()
{
    cout<<"Print the Escape sequences "<<endl;
    EscapesSeuences();
    NumericEscapesSequences();
    return 0;
}