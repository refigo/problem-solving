#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000000;
const int MAX_N = 101;
const int MAX_MASK = (1 << 10);

ll dp[MAX_N][10][MAX_MASK];

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    for(int i = 1; i <= 9; i++) {
        dp[1][i][1 << i] = 1;
    }
    
    for(int len = 2; len <= n; len++) {
        for(int last = 0; last <= 9; last++) {
            for(int mask = 0; mask < MAX_MASK; mask++) {
                if(dp[len-1][last][mask] == 0) continue;
                
                if(last < 9) {
                    int next_mask = mask | (1 << (last + 1));
                    dp[len][last+1][next_mask] = 
                        (dp[len][last+1][next_mask] + 
                         dp[len-1][last][mask]) % MOD;
                }
                
                if(last > 0) {
                    int next_mask = mask | (1 << (last - 1));
                    dp[len][last-1][next_mask] = 
                        (dp[len][last-1][next_mask] + 
                         dp[len-1][last][mask]) % MOD;
                }
            }
        }
    }
    
    ll answer = 0;
    int full_mask = (1 << 10) - 1;
    
    for(int last = 0; last <= 9; last++) {
        answer = (answer + dp[n][last][full_mask]) % MOD;
    }
    
    cout << answer << '\n';
    
    return 0;
}