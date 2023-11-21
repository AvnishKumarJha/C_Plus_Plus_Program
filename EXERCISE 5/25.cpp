#include <bits/stdc++.h>
using namespace std;

void CalculateSumOfDigit(int n)
{
    int sum = 0;
    int a, b, c, d, e;
    while (n > 0)
    {
        a = n % 10;
        n = n / 10;
        b = n % 10;
        n = n / 10;
        c = n % 10;
        n = n / 10;
        d = n % 10;
        n = n / 10;
        e = n % 10;
        n = n / 10;
        sum = a + b + c + d + e;
        cout << "The Sum of the digits is " << sum;
    }
}

int main()
{
    int n;
    cout << "Enter a Five-digit Number" << endl;
    cin >> n;
    CalculateSumOfDigit(n);

    return 0;
}