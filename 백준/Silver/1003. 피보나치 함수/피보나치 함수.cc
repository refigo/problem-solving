#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 41;

pair<int, int> dp[MAX_N];

void precompute() {
    dp[0] = {1, 0};
    dp[1] = {0, 1};
    
    for (int i = 2; i <= 40; i++) {
        dp[i].first = dp[i-1].first + dp[i-2].first;
        dp[i].second = dp[i-1].second + dp[i-2].second;
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    precompute();
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n].first << " " << dp[n].second << '\n';
    }
    
    return 0;
}