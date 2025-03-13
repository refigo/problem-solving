#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1001;
vector<int> graph[MAX_N];
int delay[MAX_N];
int indegree[MAX_N];
int dp[MAX_N];

void solve() {
    int n, k;
    cin >> n >> k;
    
    for(int i = 1; i <= n; i++) {
        graph[i].clear();
        indegree[i] = 0;
        dp[i] = 0;
    }
    
    for(int i = 1; i <= n; i++) {
        cin >> delay[i];
    }
    
    for(int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        indegree[y]++;
    }
    
    int w;
    cin >> w;
    
    queue<int> q;
    
    for(int i = 1; i <= n; i++) {
        if(indegree[i] == 0) {
            q.push(i);
            dp[i] = delay[i];
        }
    }
    
    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        
        for(int next : graph[curr]) {
            dp[next] = max(dp[next], dp[curr] + delay[next]);
            indegree[next]--;
            
            if(indegree[next] == 0) {
                q.push(next);
            }
        }
    }
    
    cout << dp[w] << '\n';
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}