#include <bits/stdc++.h>  //A = √{s(s-a)(s-b)(s-c)},
using namespace std;

void AreaofTriangle(int a, int b, int c)
{
    float s;
    double area;
    s=(a+b+c)/2;
    cout<<"Sides is given as "<<s<<endl;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of the Triangle is "<<area<<endl;
}

int main()
{
    int a,b,c;
    cout<<"Enter the First side of the Triangle "<<endl;
    cin>>a;
    cout<<"Enter the Second side of the Triangle "<<endl;
    cin>>b;
    cout<<"Enter the Third side of the Triangle "<<endl;
    cin>>c;
    AreaofTriangle(a,b,c);

    return 0;
}