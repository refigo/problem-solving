#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n, m, r;
    cin >> n >> m >> r;
    
    vector<int> items(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> items[i];
    }
    
    vector<vector<int>> dist(n+1, vector<int>(n+1, INF));
    
    for(int i = 1; i <= n; i++) {
        dist[i][i] = 0;
    }
    
    for(int i = 0; i < r; i++) {
        int a, b, l;
        cin >> a >> b >> l;
        dist[a][b] = l;
        dist[b][a] = l;
    }
    
    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    
    int max_items = 0;
    for(int i = 1; i <= n; i++) {
        int total_items = 0;
        for(int j = 1; j <= n; j++) {
            if(dist[i][j] <= m) {
                total_items += items[j];
            }
        }
        max_items = max(max_items, total_items);
    }
    
    cout << max_items << '\n';
    
    return 0;
}