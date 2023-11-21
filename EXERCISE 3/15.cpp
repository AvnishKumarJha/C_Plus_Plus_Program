#include <bits/stdc++.h>   //Note: 1 inch = 2.54 cm.

using namespace std;

void distance(float cm)
{
    float inch;
    inch=2.54*cm;
    cout<<"Display the values in inches "<<inch<<endl;
}

int main()
{
    float cm;
    cout<<"Enter the distance in the centimetres "<<endl;
    cin>>cm;
    distance(cm);

    return 0;
}