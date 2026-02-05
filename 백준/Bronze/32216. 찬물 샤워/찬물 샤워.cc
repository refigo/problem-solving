#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k, T0;
    cin >> n >> k >> T0;
    
    vector<int> d(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> d[i];
    }
    
    int T = T0;
    int discomfort = 0;
    
    for (int i = 1; i <= n; ++i) {
        if (T > k) {
            T = T + d[i] - abs(T - k);
        } else if (T < k) {
            T = T + d[i] + abs(T - k);
        } else {
            T = T + d[i];
        }
        discomfort += abs(T - k);
    }
    
    cout << discomfort << '\n';
    
    return 0;
}