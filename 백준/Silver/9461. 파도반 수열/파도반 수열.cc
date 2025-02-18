#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 101;
long long dp[MAX_N];

void precompute() {
    dp[1] = dp[2] = dp[3] = 1;
    
    for (int i = 4; i < MAX_N; i++) {
        dp[i] = dp[i-2] + dp[i-3];
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
        cout << dp[n] << '\n';
    }
    
    return 0;
}