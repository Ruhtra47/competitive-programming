#include <bits/stdc++.h>
using namespace std;

#define maxn 200001

int n;

int main()
{
    cin >> n;

    vector<bool> l(n);
    fill(l.begin(), l.end(), false);

    for (int i = 1; i < n; i++)
    {
        int a;
        cin >> a;
        l[a] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        if (find(l.begin(), l.end(), i) == l.end())
        {
            cout << i << endl;
            break;
        }
    }
}