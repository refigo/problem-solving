#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;
    
    vector<vector<int>> house(N+1, vector<int>(N+1));
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            cin >> house[i][j];
        }
    }
    
    vector<vector<vector<int>>> dp(N+1, vector<vector<int>>(N+1, vector<int>(3, 0)));
    
    dp[1][2][0] = 1;
    
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            if(house[i][j] == 1) continue;
            
            if(j > 1) {
                dp[i][j][0] += dp[i][j-1][0];
                dp[i][j][0] += dp[i][j-1][2];
            }
            
            if(i > 1) {
                dp[i][j][1] += dp[i-1][j][1];
                dp[i][j][1] += dp[i-1][j][2];
            }
            
            if(i > 1 && j > 1 && house[i-1][j] == 0 && house[i][j-1] == 0) {
                dp[i][j][2] += dp[i-1][j-1][0];
                dp[i][j][2] += dp[i-1][j-1][1];
                dp[i][j][2] += dp[i-1][j-1][2];
            }
        }
    }
    
    int result = dp[N][N][0] + dp[N][N][1] + dp[N][N][2];
    cout << result << '\n';
    
    return 0;
}