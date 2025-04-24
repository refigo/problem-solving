#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n, m;
    cin >> n >> m;
    
    vector<vector<pair<int, int>>> graph(n+1);
    
    for(int i = 0; i < m; i++) {
        int from, to, cost;
        cin >> from >> to >> cost;
        graph[from].push_back({to, cost});
    }
    
    int start, end;
    cin >> start >> end;
    
    vector<int> dist(n+1, INF);
    vector<int> prev(n+1, -1);
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    dist[start] = 0;
    pq.push({0, start});
    
    while(!pq.empty()) {
        int cost = pq.top().first;
        int curr = pq.top().second;
        pq.pop();
        
        if(dist[curr] < cost) continue;
        
        for(auto &next : graph[curr]) {
            int next_node = next.first;
            int next_cost = next.second;
            
            if(dist[next_node] > dist[curr] + next_cost) {
                dist[next_node] = dist[curr] + next_cost;
                prev[next_node] = curr;
                pq.push({dist[next_node], next_node});
            }
        }
    }
    
    cout << dist[end] << '\n';
    
    vector<int> path;
    for(int at = end; at != -1; at = prev[at]) {
        path.push_back(at);
    }
    reverse(path.begin(), path.end());
    
    cout << path.size() << '\n';
    
    for(int i = 0; i < path.size(); i++) {
        cout << path[i] << (i < path.size() - 1 ? " " : "");
    }
    cout << '\n';
    
    return 0;
}