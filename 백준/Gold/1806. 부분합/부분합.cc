#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n, s;
    cin >> n >> s;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int start = 0, end = 0;
    int sum = 0;
    int min_len = n + 1;
    
    while (end <= n) {
        if (sum >= s) {
            min_len = min(min_len, end - start);
            sum -= arr[start++];
        }
        else {
            if (end == n) break;
            sum += arr[end++];
        }
    }
    
    cout << (min_len == n + 1 ? 0 : min_len) << '\n';
    
    return 0;
}