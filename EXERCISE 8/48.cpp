#include <bits/stdc++.h>
using namespace std;

void CalculateRootOfQuadraticEquation(float a, float b, float c, float d, float r1, float r2, float rp, float ip)
{
    d=((b*b)-(4*a*c));
    if (d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        cout << "Roots are real and different." << endl;
        cout<<"r1 = "<<r1<<endl;
        cout<<"r2 = "<<r2<<endl;
    }

    else if (d == 0)
    {
        cout << "Roots are real and same." << endl;
        r1=-b/(2*a);
        cout<<"r1 = r2 ="<<r1<<endl;
    }
    else
    {
        rp=-b/(2*a);
        ip=sqrt(-d)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "r1 = " << r1 << "+" << ip << "i" << endl;
        cout << "r2 = " << r2 << "-" << ip << "i" << endl;
    }
}

int main()
{
    float a,b,c,d,r1,r2,rp,ip;
    cout<<"Enter the Coefficients a,b and c "<<endl;
    cin>>a>>b>>c;
    CalculateRootOfQuadraticEquation(a,b,c,d,r1,r2,rp,ip);

    return 0;
}