#include <bits/stdc++.h>
using namespace std;

void ConvertDistance(float  km)
{
    float m,feet,inches,cm;
    m=km*1000;
    cm=km*100000;
    feet=km*3280.84;
    inches=km*39370.1;

    cout<<"Result in metre "<<m<<endl;
    cout<<"Result in Centimetre "<<cm<<endl;
    cout<<"Result in Feet "<<feet<<endl;
    cout<<"Result in Inches "<<inches<<endl;
}

int main()
{
    float km;
    cout<<"Enter the distance between two cities in Km "<<endl;
    cin>>km;
    ConvertDistance(km);
    return 0;
}