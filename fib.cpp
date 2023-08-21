#include <bits/stdc++.h>
using namespace std;

#define maxn 500

int n;
int dp[maxn];

int fib(int i) {
    if (i <= 1) return 1;
    if (dp[i] != -1) return dp[i];
    dp[i] = fib(i-1) + fib(i-2);
    return dp[i];
}

int main() {
    memset(dp, -1, sizeof(dp));

    cin >> n;

    cout << fib(n) << "\n";
}