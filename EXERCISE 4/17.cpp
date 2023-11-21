#include <bits/stdc++.h>  
using namespace std;

void CelsiustoFahrenheit(int c)
{
    float f;
    f=(9*c/5)+32;
    cout<<"Convert the Temperature from Celsius to Fahrenheit"<<endl;
    cout<<f;
}

void FahrenheittoCelsius(int F)
{
    float c;
    c=(F-32)*5/9;
    cout<<"Convert the Temperature from Fahrenheit to Celsius"<<endl;
    cout<<c;
}

int main()
{
    int c;
    cout<<"Enter the Temperature in the Celsius"<<endl;
    cin>>c;
    CelsiustoFahrenheit(c);
    
    int F;
    cout<<endl;
    cout<<"Enter the Temperature in the Fahrenheit"<<endl;
    cin>>F;
    FahrenheittoCelsius(F);
    return 0;
}