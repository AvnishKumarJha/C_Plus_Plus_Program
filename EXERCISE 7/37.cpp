#include <bits/stdc++.h>
using namespace std;

void EligibleForVoting(int age)
{
    if (age>=18)
    {
        cout<<"Candidate allow for Voting"<<endl;
    }
    else
    {
        cout<<"Candidate are not allow for Voting"<<endl;
    }
}

int main()
{
    int age;
    cout<<"Enter Candidate Age"<<endl;
    cin>>age;
    EligibleForVoting(age);

    return 0;
}