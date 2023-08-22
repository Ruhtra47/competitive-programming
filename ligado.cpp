#include <bits/stdc++.h>
using namespace std;

#define maxn 1000
#define maxm 100000

int n, m;
int graph[maxn][maxm];

int main() {
    memset(graph, -1, sizeof(graph));

    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        int t, a, b;
        cin >> t >> a >> b;

        if (t == 1) {
            graph[a][b] = 1;
            graph[b][a] = 1;
        } else {
            if (graph[a][b] == 1 || graph[b][a] == 1) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        }
    }
}