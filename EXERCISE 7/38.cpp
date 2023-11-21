#include <bits/stdc++.h>
using namespace std;

void Triangle(int side1, int side2, int side3)
{
    if (side1 == side2 && side1 == side3 && side2 == side3)
    {
        cout<<"Equilateral Triangle"<<endl;
    }
    else if (side1 != side2 && side1 != side3 && side2 != side3 )
    {
        cout<<"Scalene Triangle"<<endl;
    }
    else
    {
        cout<<"Isoceles Triangle"<<endl;
    }
}

int main()
{
    int side1,side2, side3;
    cout<<"Enter the side1 of the Triangle"<<endl;
    cin>>side1;
    cout<<"Enter the side2 of the Triangle"<<endl;
    cin>>side2;
    cout<<"Enter the side3 of the Triangle"<<endl;
    cin>>side3;
    Triangle(side1,side2,side3);
    
    return 0;
}