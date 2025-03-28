#include <bits/stdc++.h>
using namespace std;

const int MAX = 10001;

int n;
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
    
    cin >> n;
    
    for(int i = 0; i < n-1; i++) {
        int parent, child, weight;
        cin >> parent >> child >> weight;
        tree[parent].push_back({child, weight});
        tree[child].push_back({parent, weight});
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