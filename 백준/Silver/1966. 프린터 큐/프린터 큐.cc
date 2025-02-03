#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        queue<pair<int, int>> docs;  // {index, priority}
        priority_queue<int> pq;  // max heap for priorities
        
        for (int i = 0; i < n; i++) {
            int priority;
            cin >> priority;
            docs.push({i, priority});
            pq.push(priority);
        }
        
        int count = 0;
        
        while (!docs.empty()) {
            int curr_idx = docs.front().first;
            int curr_priority = docs.front().second;
            docs.pop();
            
            if (curr_priority == pq.top()) {
                count++;
                pq.pop();
                
                if (curr_idx == m) {
                    cout << count << '\n';
                    break;
                }
            } else {
                docs.push({curr_idx, curr_priority});
            }
        }
    }
    return 0;
}