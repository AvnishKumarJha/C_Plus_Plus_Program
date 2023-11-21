#include <bits/stdc++.h>
using namespace std;

void CheckGrade(int Pm, int Cm, int Bm, int Mm, int CSm)
{
    float Total,per;
    Total=Pm+Cm+Bm+Mm+CSm;
    cout<<"Total Marks out of 500 "<<Total<<endl;
    per=(Total/500)*100;
    cout<<"Percentage Obtained by the Student are "<<per<<endl;
    if (per>=90)
    {
        cout<<"Your Division : Grade A"<<endl;
    }
    else if (per>=80 && per<=90)
    {
        cout<<"Your Division : Grade B"<<endl;
    }
    else if (per>=70 && per<=80)
    {
        cout<<"Your Division : Grade C"<<endl;
    }
    else if (per>=60 && per<=70)
    {
        cout<<"Your Division : Grade D"<<endl;
    }
    else if (per>=40 && per<=60)
    {
        cout<<"Your Division : Grade E"<<endl;
    }
    else
    {
        cout<<"Your Division : Grade F"<<endl;
    }
}

int main()
{
    int Pm, Cm, Bm, Mm,CSm;
    cout<<"Enter Marks Obtained out of 100 in Physics Subject"<<endl;
    cin>>Pm;
    cout<<"Enter Marks Obtained out of 100 in Chemistry       Subject"<<endl;
    cin>>Cm;
    cout<<"Enter Marks Obtained out of 100 in Biology         Subject"<<endl;
    cin>>Bm;
    cout<<"Enter Marks Obtained out of 100 in Mathematics     Subject"<<endl;
    cin>>Mm;
    cout<<"Enter Marks Obtained out of 100 in ComputerScience Subject"<<endl;
    cin>>CSm;
    CheckGrade(Pm,Cm,Bm,Mm,CSm);

    return 0;
}