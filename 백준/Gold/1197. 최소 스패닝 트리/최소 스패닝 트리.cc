#include <bits/stdc++.h>
using namespace std;

const int MAX_V = 10001;

int v, e;
vector<pair<int, pair<int, int>>> edges;
int parent[MAX_V];

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
    
    cin >> v >> e;
    
    for (int i = 0; i < e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edges.push_back({c, {a, b}});
    }
    
    sort(edges.begin(), edges.end());
    
    for (int i = 1; i <= v; i++) {
        parent[i] = i;
    }
    
    long long total_weight = 0;
    int selected_edges = 0;
    
    for (auto& edge : edges) {
        int weight = edge.first;
        int v1 = edge.second.first;
        int v2 = edge.second.second;
        
        if (find_parent(v1) != find_parent(v2)) {
            union_sets(v1, v2);
            total_weight += weight;
            selected_edges++;
            
            if (selected_edges == v - 1) break;
        }
    }
    
    cout << total_weight << '\n';
    
    return 0;
}