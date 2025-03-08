#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 32001;
vector<int> graph[MAX_N];
int indegree[MAX_N];

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        indegree[b]++;
    }
    
    queue<int> q;
    
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }
    
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        
        cout << curr;
        if (!q.empty() || indegree[curr] == 0) cout << ' ';
        
        for (int next : graph[curr]) {
            indegree[next]--;
            if (indegree[next] == 0) {
                q.push(next);
            }
        }
    }
    cout << '\n';
    
    return 0;
}