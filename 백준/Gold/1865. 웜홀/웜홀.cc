#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 501;
const int INF = 1e9;

int TC, N, M, W;
vector<pair<pair<int, int>, int>> edges;
int dist[MAX_N];

bool bellmanFord() {
    fill(dist, dist + MAX_N, 0);
    
    for(int i = 1; i < N; i++) {
        bool updated = false;
        for(auto &edge : edges) {
            int from = edge.first.first;
            int to = edge.first.second;
            int time = edge.second;
            
            if(dist[to] > dist[from] + time) {
                dist[to] = dist[from] + time;
                updated = true;
            }
        }
        if(!updated) break;
    }
    
    for(auto &edge : edges) {
        int from = edge.first.first;
        int to = edge.first.second;
        int time = edge.second;
        
        if(dist[to] > dist[from] + time) {
            return true;
        }
    }
    
    return false;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> TC;
    while(TC--) {
        cin >> N >> M >> W;
        edges.clear();
        
        for(int i = 0; i < M; i++) {
            int S, E, T;
            cin >> S >> E >> T;
            edges.push_back({{S, E}, T});
            edges.push_back({{E, S}, T});
        }
        
        for(int i = 0; i < W; i++) {
            int S, E, T;
            cin >> S >> E >> T;
            edges.push_back({{S, E}, -T});
        }
        
        bool hasNegativeCycle = bellmanFord();
        cout << (hasNegativeCycle ? "YES\n" : "NO\n");
    }
    
    return 0;
}