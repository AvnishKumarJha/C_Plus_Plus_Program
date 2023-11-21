#include <bits/stdc++.h> //D = √[(x2 – x1)2 + (y2 – y1)2 ].
using namespace std;     //D2 = (x2-x1) 2+(y2-y1) 2

void distance(int x2, int x1, int y2, int y1)
{
    int d;
    d=(((x2-x1)*2) + ((y2-y1)*2));
    cout<<"The Distance between two points "<<d;
}

int main()
{
    int x1,x2,y1,y2;
    cout<<"Enter the value of x2 "<<endl;
    cin>>x2;
    cout<<"Enter the value of x1 "<<endl;
    cin>>x1;
    cout<<"Enter the value of y2 "<<endl;
    cin>>y2;
    cout<<"Enter the value of y1 "<<endl;
    cin>>y1;
    distance(x2,x1,y2,y1);

    return 0;
}