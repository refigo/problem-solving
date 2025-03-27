#include <bits/stdc++.h>
using namespace std;

const int MAX_V = 20001;
const int INF = 1e9;

int V, E, K;
vector<pair<int, int>> graph[MAX_V];
int dist[MAX_V];

void dijkstra() {
    fill(dist, dist + MAX_V, INF);
    
    priority_queue<pair<int, int>, 
                  vector<pair<int, int>>, 
                  greater<pair<int, int>>> pq;
    
    dist[K] = 0;
    pq.push({0, K});
    
    while(!pq.empty()) {
        int cur_dist = pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        
        if(dist[cur] < cur_dist) continue;
        
        for(auto &p : graph[cur]) {
            int next = p.first;
            int weight = p.second;
            
            if(dist[next] > dist[cur] + weight) {
                dist[next] = dist[cur] + weight;
                pq.push({dist[next], next});
            }
        }
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> V >> E >> K;
    
    for(int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }
    
    dijkstra();
    
    for(int i = 1; i <= V; i++) {
        if(dist[i] == INF) {
            cout << "INF\n";
        } else {
            cout << dist[i] << '\n';
        }
    }
    
    return 0;
}