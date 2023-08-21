#include <bits/stdc++.h>
using namespace std;

#define maxn 100
typedef tuple<int, int, int> ti;

int n;
int mat[maxn][maxn];
int vis[maxn][maxn];

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

bool isSafe(int x, int y) {
    if ((x < 0) || (x > n) || (y < 0) || (y > n)) return false;
    return true;
}

int dijkstra() {
    priority_queue<ti, vector<ti>, greater<ti>> pq;
    pq.emplace(0, 0, 0);

    while (!pq.empty()) {
        int c, x, y;
        tie(c, y, x) = pq.top();
        pq.pop();

        if (vis[y][x]) continue;
        vis[y][x] = true;

        if ((y == n-1) && (x == n-1)) return c;

        for (int i = 0; i < 4; i++) {
            int y2 = y + dy[i];
            int x2 = x + dx[i];
            if (!isSafe(x2, y2)) continue;
            pq.emplace(mat[y2][x2] + c, y2, x2);
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    cout << dijkstra() << "\n";
}