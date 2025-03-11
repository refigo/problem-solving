#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n, m;
    cin >> n >> m;
    
    vector<vector<bool>> graph(n + 1, vector<bool>(n + 1, false));
    vector<int> indegree(n + 1, 0);
    
    for (int i = 0; i < m; i++) {
        int cnt;
        cin >> cnt;
        
        vector<int> order(cnt);
        for (int j = 0; j < cnt; j++) {
            cin >> order[j];
        }
        
        for (int j = 0; j < cnt - 1; j++) {
            for (int k = j + 1; k < cnt; k++) {
                if (!graph[order[j]][order[k]]) {
                    graph[order[j]][order[k]] = true;
                    indegree[order[k]]++;
                }
            }
        }
    }
    
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> result;
    
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) {
            pq.push(i);
        }
    }
    
    while (!pq.empty()) {
        int curr = pq.top();
        pq.pop();
        result.push_back(curr);
        
        for (int next = 1; next <= n; next++) {
            if (graph[curr][next]) {
                indegree[next]--;
                if (indegree[next] == 0) {
                    pq.push(next);
                }
            }
        }
    }
    
    if (result.size() == n) {
        for (int x : result) {
            cout << x << '\n';
        }
    } else {
        cout << "0\n";
    }
    
    return 0;
}