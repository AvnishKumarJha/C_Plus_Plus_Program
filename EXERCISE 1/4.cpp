#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number you want the Multiplication Table" << endl;
    cin >> n;
    for (int i = 1; i < 11; i++)
    {
        cout << n << "*" << i << "=" << n * i;
        cout << endl;
    }
    return 0;
}