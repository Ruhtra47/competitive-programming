#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int ans = 0;
    int cur = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            ans = max(ans, cur);
            cur = 0;
        }
        cur++;
    }
    ans = max(ans, cur);
    cout << ans << '\n';
}