#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    bool la = false;
    bool lb = false;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a == 1) {
            la = !la;
        } else {
            la = !la;
            lb = !lb;
        }
    }
    cout << la << "\n" << lb << "\n";
}