#include <bits/stdc++.h>
using namespace std;

const int MAX = 100001;
bool visited[MAX];

int bfs(int start, int target) {
    queue<pair<int, int>> q;
    q.push({start, 0});
    visited[start] = true;
    
    while (!q.empty()) {
        int curr = q.front().first;
        int time = q.front().second;
        q.pop();
        
        if (curr == target) {
            return time;
        }
        
        if (curr-1 >= 0 && !visited[curr-1]) {
            visited[curr-1] = true;
            q.push({curr-1, time+1});
        }
        
        if (curr+1 < MAX && !visited[curr+1]) {
            visited[curr+1] = true;
            q.push({curr+1, time+1});
        }
        
        if (curr*2 < MAX && !visited[curr*2]) {
            visited[curr*2] = true;
            q.push({curr*2, time+1});
        }
    }
    
    return -1;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n, k;
    cin >> n >> k;
    
    cout << bfs(n, k) << '\n';
    
    return 0;
}