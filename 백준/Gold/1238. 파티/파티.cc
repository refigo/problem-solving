#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;
const int INF = 1e9;

int N, M, X;
vector<pair<int, int>> graph[MAX];
vector<pair<int, int>> rev_graph[MAX];
int dist[MAX], rev_dist[MAX];

void dijkstra(int start, vector<pair<int, int>> g[], int d[]) {
    fill(d, d + MAX, INF);
    priority_queue<pair<int, int>, 
                  vector<pair<int, int>>, 
                  greater<pair<int, int>>> pq;
    
    d[start] = 0;
    pq.push({0, start});
    
    while(!pq.empty()) {
        int cur_dist = pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        
        if(d[cur] < cur_dist) continue;
        
        for(auto &p : g[cur]) {
            int next = p.first;
            int weight = p.second;
            
            if(d[next] > d[cur] + weight) {
                d[next] = d[cur] + weight;
                pq.push({d[next], next});
            }
        }
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> N >> M >> X;
    
    for(int i = 0; i < M; i++) {
        int u, v, t;
        cin >> u >> v >> t;
        graph[u].push_back({v, t});
        rev_graph[v].push_back({u, t});
    }
    
    dijkstra(X, graph, dist);
    dijkstra(X, rev_graph, rev_dist);
    
    int max_time = 0;
    for(int i = 1; i <= N; i++) {
        max_time = max(max_time, dist[i] + rev_dist[i]);
    }
    
    cout << max_time << '\n';
    
    return 0;
}