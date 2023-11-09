#include <bits/stdc++.h>
using namespace std;

#define maxn 10001

int n;
int mat[maxn][maxn];
int sl[maxn];
int sc[maxn];
int ans = 0;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        sl[i] = 0;
        for (int j = 0; i < n; j++)
        {
            sl[i] += mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        sc[i] = 0;
        for (int j = 0; j < n; j++)
        {
            sc[i] += mat[j][i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (sc[j] + sc[i] - 2 * mat[i][j] > ans)
                ans = sc[j] + sl[i] - 2 * mat[i][j];
        }
    }

    cout << ans << '\n';
}