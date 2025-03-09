#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000001;
vector<int> graph[MAX_N];
int dp[MAX_N][2];
bool visited[MAX_N];

void solve(int curr) {
    visited[curr] = true;
    dp[curr][0] = 0;
    dp[curr][1] = 1;
    
    for (int next : graph[curr]) {
        if (visited[next]) continue;
        
        solve(next);
        
        dp[curr][0] += dp[next][1];
        
        dp[curr][1] += min(dp[next][0], dp[next][1]);
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    solve(1);
    
    cout << min(dp[1][0], dp[1][1]) << '\n';
    
    return 0;
}