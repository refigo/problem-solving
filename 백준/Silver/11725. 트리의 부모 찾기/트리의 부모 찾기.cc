#include <bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<vector<int>> graph;
vector<bool> visited;

void findParent(int node) {
    visited[node] = true;
    
    for (int next : graph[node]) {
        if (!visited[next]) {
            parent[next] = node;
            findParent(next);
        }
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    parent.resize(n + 1);
    graph.resize(n + 1);
    visited.resize(n + 1, false);
    
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    findParent(1);
    
    for (int i = 2; i <= n; i++) {
        cout << parent[i] << '\n';
    }
    
    return 0;
}