#include <bits/stdc++.h>
using namespace std;

const int MAX = 100001;
const int INF = 1e9;

int N, K;
int dist[MAX];

bool inRange(int x) {
    return 0 <= x && x < MAX;
}

int bfs() {
    deque<int> dq;
    fill(dist, dist + MAX, INF);
    
    dist[N] = 0;
    dq.push_back(N);
    
    while(!dq.empty()) {
        int cur = dq.front();
        dq.pop_front();
        
        if(cur == K) {
            return dist[cur];
        }
        
        int next = cur * 2;
        if(inRange(next) && dist[next] > dist[cur]) {
            dist[next] = dist[cur];
            dq.push_front(next);
        }
        
        for(int next : {cur - 1, cur + 1}) {
            if(inRange(next) && dist[next] > dist[cur] + 1) {
                dist[next] = dist[cur] + 1;
                dq.push_back(next);
            }
        }
    }
    
    return -1;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> N >> K;
    
    cout << bfs() << '\n';
    
    return 0;
}