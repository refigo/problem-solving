#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100001;
int parent[MAX_N];

int find_parent(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find_parent(parent[x]);
}

void union_sets(int x, int y) {
    x = find_parent(x);
    y = find_parent(y);
    if (x < y) parent[y] = x;
    else parent[x] = y;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n, m;
    vector<pair<int, pair<int, int>>> edges;
    
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edges.push_back({c, {a, b}});
    }
    
    sort(edges.begin(), edges.end());
    
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }
    
    vector<int> selected_costs;
    int total_cost = 0;
    
    for (auto& edge : edges) {
        int cost = edge.first;
        int v1 = edge.second.first;
        int v2 = edge.second.second;
        
        if (find_parent(v1) != find_parent(v2)) {
            union_sets(v1, v2);
            selected_costs.push_back(cost);
            total_cost += cost;
        }
    }
    
    total_cost -= selected_costs.back();
    
    cout << total_cost << '\n';
    
    return 0;
}