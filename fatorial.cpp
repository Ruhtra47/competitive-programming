#include <bits/stdc++.h>
using namespace std;

int n, ans = 1;

int main()
{
    cin >> n;

    for (int i = n; i > 1; i--)
    {
        ans *= i;
    }

    cout << ans << '\n';
}