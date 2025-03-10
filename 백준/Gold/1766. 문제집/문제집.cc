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
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) {
            pq.push(i);
        }
    }
    
    while (!pq.empty()) {
        int curr = pq.top();
        pq.pop();
        
        cout << curr << ' ';
        
        for (int next : graph[curr]) {
            indegree[next]--;
            if (indegree[next] == 0) {
                pq.push(next);
            }
        }
    }
    cout << '\n';
    
    return 0;
}