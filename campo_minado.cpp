#include <bits/stdc++.h>
using namespace std;

#define maxn 51

int n;
bool bombas[maxn];
int res[maxn];

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> bombas[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (bombas[i])
        {
            res[i]++;
        }

        if ((i > 0) && (bombas[i - 1]))
        {
            res[i]++;
        }

        if ((i < n - 1) && (bombas[i + 1]))
        {
            res[i]++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << "\n";
    }
}