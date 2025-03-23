#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100001;

int n;
int sticker[2][MAX_N];
int dp[3][MAX_N];

void solve() {
    cin >> n;
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < n; j++) {
            cin >> sticker[i][j];
        }
    }
    
    dp[0][0] = 0;
    dp[1][0] = sticker[0][0];
    dp[2][0] = sticker[1][0];
    
    for(int j = 1; j < n; j++) {
        dp[0][j] = max({dp[0][j-1], dp[1][j-1], dp[2][j-1]});
        
        dp[1][j] = max(dp[0][j-1], dp[2][j-1]) + sticker[0][j];
        
        dp[2][j] = max(dp[0][j-1], dp[1][j-1]) + sticker[1][j];
    }
    
    cout << max({dp[0][n-1], dp[1][n-1], dp[2][n-1]}) << '\n';
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}