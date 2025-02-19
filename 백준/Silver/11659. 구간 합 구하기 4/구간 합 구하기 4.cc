#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> arr(n + 1);
    vector<int> prefix(n + 1);
    
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        prefix[i] = prefix[i-1] + arr[i];
    }
    
    while (m--) {
        int i, j;
        cin >> i >> j;
        cout << prefix[j] - prefix[i-1] << '\n';
    }
    
    return 0;
}