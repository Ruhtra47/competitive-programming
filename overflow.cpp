#include <bits/stdc++.h>
using namespace std;

double n, p, q;
char op;

int main()
{
    cin >> n;
    cin >> p >> op >> q;

    if (op == '+')
    {
        if (p + q > n)
        {
            cout << "OVERFLOW\n";
            return 0;
        }
        else
        {
            cout << "OK\n";
            return 0;
        }
    }
    else
    {
        if (p * q > n)
        {
            cout << "OVERFLOW\n";
            return 0;
        }
        else
        {
            cout << "OK\n";
            return 0;
        }
    }
}