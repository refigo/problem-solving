#include <bits/stdc++.h>
using namespace std;

const int MOD = 10007;
const int MAX_N = 1001;
int dp[MAX_N];

void precompute() {
    dp[1] = 1;
    dp[2] = 2;
    
    for (int i = 3; i < MAX_N; i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % MOD;
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