#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N, M;
    cin >> N >> M;
    
    vector<vector<pair<int, int>>> graph(N + 1);
    
    for(int i = 0; i < M; i++) {
        int from, to, cost;
        cin >> from >> to >> cost;
        graph[from].push_back({to, cost});
    }
    
    int start, end;
    cin >> start >> end;
    
    vector<int> dist(N + 1, INF);
    dist[start] = 0;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});
    
    while(!pq.empty()) {
        int cur_cost = pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        
        if(dist[cur] < cur_cost) continue;
        
        for(auto &next : graph[cur]) {
            int next_city = next.first;
            int next_cost = next.second;
            
            if(dist[next_city] > cur_cost + next_cost) {
                dist[next_city] = cur_cost + next_cost;
                pq.push({dist[next_city], next_city});
            }
        }
    }
    
    cout << dist[end] << '\n';
    
    return 0;
}