#include <bits/stdc++.h>
using namespace std;

#define maxn 500

int n, f;
char mat[maxn][maxn];

void solve(int i, int j) {
    if ((i < 0 || j < 0 || i >= n || j >= n) || mat[i][j] == '*') return;
    if ((mat[i][j] - '0') > f) return;
    mat[i][j] = '*';

    solve(i, j-1);
    solve(i, j+1);
    solve(i-1, j);
    solve(i+1, j);
}

int main() {
    cin >> n >> f;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
        
    }
    
    solve(0, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j];
        }
        cout << "\n";
    }
}
