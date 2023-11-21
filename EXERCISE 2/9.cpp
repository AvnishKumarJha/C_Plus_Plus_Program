#include <bits/stdc++.h>   //D = √[(x2 – x1)2 + (y2 – y1)2 ].
#define pi 3.14            //D2 = (x2-x1) 2+(y2-y1) 2

using namespace std;

void CalculateDistance(int x2, int x1, int y2, int y1)
{
    float d;
    d=(sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
    cout<<"Distance as the Diameter "<<d<<endl;
}

void radius(int r)
{
    float d,c,a;
    r=d/2;
    cout<<"Radius of the Circle is "<<r<<endl;
    c=2*pi*r;
    cout<<"Circumference of the Circle is "<<c<<endl;
    a=pi*r*r;
    cout<<"Area of the circle is "<<a<<endl;
}

int main()
{
    int x2, x1, y2, y1;
    cout << "Enter the value of x2 " << endl;
    cin >> x2;
    cout << "Enter the value of x1 " << endl;
    cin >> x1;
    cout << "Enter the value of y2 " << endl;
    cin >> y2;
    cout << "Enter the value of y1 " << endl;
    cin >> y1;
    CalculateDistance(x2, x1, y2, y1);

    int r;
    float c,a;
    radius(r);
    
    return 0;
}