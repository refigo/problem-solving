#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 50001;
int dp[MAX_N];

void precompute() {
    fill(dp, dp + MAX_N, 4);
    
    for (int i = 1; i * i < MAX_N; i++) {
        dp[i * i] = 1;
    }
    
    for (int i = 1; i < MAX_N; i++) {
        if (dp[i] == 1) continue;
        
        for (int j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    precompute();
    
    int n;
    cin >> n;
    cout << dp[n] << '\n';
    
    return 0;
}