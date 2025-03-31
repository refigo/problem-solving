#include <bits/stdc++.h>
using namespace std;

const int MAX = 100001;

int V;
vector<pair<int, int>> tree[MAX];
bool visited[MAX];
int max_dist, max_node;

void dfs(int node, int dist) {
    visited[node] = true;
    
    if(dist > max_dist) {
        max_dist = dist;
        max_node = node;
    }
    
    for(auto &p : tree[node]) {
        int next = p.first;
        int weight = p.second;
        
        if(!visited[next]) {
            dfs(next, dist + weight);
        }
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> V;
    
    for(int i = 0; i < V; i++) {
        int node;
        cin >> node;
        
        while(true) {
            int next, weight;
            cin >> next;
            if(next == -1) break;
            
            cin >> weight;
            tree[node].push_back({next, weight});
            tree[next].push_back({node, weight});
        }
    }
    
    max_dist = 0;
    max_node = 0;
    memset(visited, false, sizeof(visited));
    dfs(1, 0);
    
    max_dist = 0;
    memset(visited, false, sizeof(visited));
    dfs(max_node, 0);
    
    cout << max_dist << '\n';
    
    return 0;
}