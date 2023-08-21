#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int l[n];

    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (i > n-3) break;
        if (l[i] && !l[i+1] && !l[i+2]) ans++;
    }
    
    cout << ans << "\n";
}