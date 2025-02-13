#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100001;

int n, r, q;
vector<int> graph[MAX_N];
int subtree_size[MAX_N];

int calculate_subtree_size(int node, vector<bool>& visited) {
    visited[node] = true;
    
    subtree_size[node] = 1;
    
    for (int next : graph[node]) {
        if (!visited[next]) {
            subtree_size[node] += calculate_subtree_size(next, visited);
        }
    }
    
    return subtree_size[node];
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> n >> r >> q;
    
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    vector<bool> visited(n + 1, false);
    
    calculate_subtree_size(r, visited);
    
    while (q--) {
        int u;
        cin >> u;
        cout << subtree_size[u] << '\n';
    }
    
    return 0;
}