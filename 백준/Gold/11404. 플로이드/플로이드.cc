#include <bits/stdc++.h>
using namespace std;

const int MAX = 101;
const int INF = 1e9;

int n, m;
int dist[MAX][MAX];

void floyd() {
    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j) dist[i][j] = 0;
            else dist[i][j] = INF;
        }
    }
    
    for(int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        dist[a][b] = min(dist[a][b], c);
    }
    
    floyd();
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(dist[i][j] == INF) cout << "0 ";
            else cout << dist[i][j] << " ";
        }
        cout << '\n';
    }
    
    return 0;
}