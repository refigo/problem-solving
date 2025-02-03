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
        
        queue<pair<int, int>> q;  // {index, priority}
        vector<int> importance(n);
        
        for (int i = 0; i < n; i++) {
            cin >> importance[i];
            q.push({i, importance[i]});
        }
        
        int count = 0;
        
        while (!q.empty()) {
            int curr_idx = q.front().first;
            int curr_priority = q.front().second;
            q.pop();
            
            bool is_highest = true;
            for (int i = 0; i < q.size(); i++) {
                pair<int, int> next = q.front();
                q.pop();
                
                if (next.second > curr_priority) {
                    is_highest = false;
                }
                q.push(next);
            }
            
            if (is_highest) {
                count++;
                if (curr_idx == m) {
                    cout << count << '\n';
                    break;
                }
            } else {
                q.push({curr_idx, curr_priority});
            }
        }
    }
    return 0;
}