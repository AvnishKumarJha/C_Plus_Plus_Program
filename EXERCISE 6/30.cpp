#include <bits/stdc++.h>
using namespace std;

void datatypes()
{
    int intvar;
    char charvar;
    float floatvar;
    double doublevar;
    short int shortintvar;
    long int longintvar;
    unsigned int unsignedintvar;
    unsigned char unsignedcharvar;
    cout<<"Size  of Integer Data Type "<<__SIZEOF_INT__<<endl;
    cout<<"Size  of Char Data Type "<<__SIZEOF_WCHAR_T__<<endl;
    cout<<"Size  of Float Data Type "<<__SIZEOF_FLOAT__<<endl;
    cout<<"Size  of double Data Type "<<__SIZEOF_DOUBLE__<<endl;
    cout<<"Size  of shortint Data Type "<<__SIZEOF_SHORT__<<endl;
    cout<<"Size  of longint Data Type "<<__SIZEOF_LONG__<<endl;
}

int main()
{
    cout<<"Print the size of various Data Types "<<endl;
    datatypes();
    return 0;
}