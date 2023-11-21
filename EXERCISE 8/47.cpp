#include <bits/stdc++.h>
using namespace std;

void TotalElectricityBill(float E_used)
{
    float E_Bill,Total_Bill;
    if (E_used<=50)
    {
        E_Bill=(E_used*0.5);
        Total_Bill=E_Bill+0.2*E_Bill;
        cout<<"Electricity Bill "<<Total_Bill;
    }
    else if (E_used>=50 && E_used<=150)
    {
        E_Bill=((50*0.5) + ((E_used-50)*0.75));
        Total_Bill=E_Bill+0.2*E_Bill;
        cout<<"Electricity Bill "<<Total_Bill;
    }
    else if (E_used>=150 && E_used<=250)
    {
        E_Bill=(50*0.5)+(100*0.75)+((E_used-150)*1.2);
        Total_Bill=E_Bill+0.2*E_Bill;
        cout<<"Electricity Bill "<<Total_Bill;
    }
    else
    {
        E_Bill=(50*0.5)+(100*0.75)+(100*1.2)+((E_used-250)*1.5);
        Total_Bill=E_Bill+0.2*E_Bill;
        cout<<"Electricity Bill "<<Total_Bill;
    }
}

int main()
{
    float E_used;
    cout<<"Enter Electricity Used in Unit"<<endl;
    cin>>E_used;
    TotalElectricityBill(E_used);
    return 0;
}