#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> lis;
    vector<int> indices(n);
    vector<int> prev(n, -1);
    
    for (int i = 0; i < n; i++) {
        auto it = lower_bound(lis.begin(), lis.end(), arr[i]);
        
        if (it == lis.end()) {
            if (!lis.empty()) {
                prev[i] = indices[lis.size() - 1];
            }
            indices[lis.size()] = i;
            lis.push_back(arr[i]);
        } else {
            int pos = it - lis.begin();
            lis[pos] = arr[i];
            indices[pos] = i;
            if (pos > 0) {
                prev[i] = indices[pos - 1];
            }
        }
    }
    
    cout << lis.size() << '\n';
    
    vector<int> path;
    int cur = indices[lis.size() - 1];
    
    while (cur != -1) {
        path.push_back(arr[cur]);
        cur = prev[cur];
    }
    
    reverse(path.begin(), path.end());
    
    for (int x : path) {
        cout << x << ' ';
    }
    cout << '\n';
    
    return 0;
}