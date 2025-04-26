#include <bits/stdc++.h>
using namespace std;
#define INF 1000000000

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;
    
    vector<vector<int>> cost(N, vector<int>(3));
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> cost[i][j];
        }
    }
    
    int ans = INF;
    
    for(int first_color = 0; first_color < 3; first_color++) {
        vector<vector<int>> dp(N, vector<int>(3, INF));
        
        dp[0][first_color] = cost[0][first_color];
        
        for(int i = 1; i < N; i++) {
            for(int j = 0; j < 3; j++) {
                for(int prev = 0; prev < 3; prev++) {
                    if(prev != j) {
                        dp[i][j] = min(dp[i][j], dp[i-1][prev] + cost[i][j]);
                    }
                }
            }
        }
        
        for(int last_color = 0; last_color < 3; last_color++) {
            if(last_color != first_color) {
                ans = min(ans, dp[N-1][last_color]);
            }
        }
    }
    
    cout << ans << '\n';
    
    return 0;
}