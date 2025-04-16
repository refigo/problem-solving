#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

vector<int> dijkstra(int start, int n, vector<vector<pair<int, int>>>& graph) {
    vector<int> dist(n + 1, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    dist[start] = 0;
    pq.push({0, start});
    
    while(!pq.empty()) {
        int cur_dist = pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        
        if(dist[cur] < cur_dist) continue;
        
        for(auto& next : graph[cur]) {
            int next_node = next.first;
            int next_dist = next.second;
            
            if(dist[next_node] > cur_dist + next_dist) {
                dist[next_node] = cur_dist + next_dist;
                pq.push({dist[next_node], next_node});
            }
        }
    }
    
    return dist;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N, E;
    cin >> N >> E;
    
    vector<vector<pair<int, int>>> graph(N + 1);
    
    for(int i = 0; i < E; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }
    
    int v1, v2;
    cin >> v1 >> v2;
    
    vector<int> dist_from_1 = dijkstra(1, N, graph);
    vector<int> dist_from_v1 = dijkstra(v1, N, graph);
    vector<int> dist_from_v2 = dijkstra(v2, N, graph);
    
    long long path1 = (long long)dist_from_1[v1] + dist_from_v1[v2] + dist_from_v2[N];
    
    long long path2 = (long long)dist_from_1[v2] + dist_from_v2[v1] + dist_from_v1[N];
    
    long long answer = min(path1, path2);
    
    if(answer >= INF) {
        cout << -1 << '\n';
    } else {
        cout << answer << '\n';
    }
    
    return 0;
}