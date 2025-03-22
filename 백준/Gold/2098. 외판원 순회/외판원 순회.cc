#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 16;
const int INF = 1e9;

int n;
int w[MAX_N][MAX_N];
int dp[MAX_N][1 << MAX_N];
bool visited[MAX_N][1 << MAX_N];

int tsp(int current, int mask) {
    if(mask == (1 << n) - 1) {
        if(w[current][0] != 0) {
            return w[current][0];
        }
        return INF;
    }
    
    if(visited[current][mask]) {
        return dp[current][mask];
    }
    
    visited[current][mask] = true;
    dp[current][mask] = INF;
    
    for(int next = 0; next < n; next++) {
        if(mask & (1 << next) || w[current][next] == 0) {
            continue;
        }
        
        int cost = w[current][next] + tsp(next, mask | (1 << next));
        dp[current][mask] = min(dp[current][mask], cost);
    }
    
    return dp[current][mask];
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> w[i][j];
        }
    }
    
    cout << tsp(0, 1) << '\n';
    
    return 0;
}