#include <bits/stdc++.h>
using namespace std;

#define maxn 10000

int n;
int fita[maxn];
int ans[maxn];

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> fita[i];
    }

    for (int i = 1; i <= n; i++)
    {
        int left = i;
        int right = i;

        while ((fita[left] != 0) && (fita[right] != 0))
        {
            if ((left > 1) && (fita[left] != 0))
                left--;
            if ((right < n) && (fita[right] != 0))
                right++;
        }

        if (i == 1)
            cout << right - i << ' ';
        else if (i == n)
            cout << i - left << ' ';
        else
            cout << min(i - left, right - i) << ' ';
    }
    cout << '\n';
}