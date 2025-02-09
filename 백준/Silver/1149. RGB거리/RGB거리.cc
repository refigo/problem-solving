#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1001;

int n;
int cost[MAX_N][3];
int dp[MAX_N][3];

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> cost[i][j];
        }
    }
    
    for (int color = 0; color < 3; color++) {
        dp[0][color] = cost[0][color];
    }
    
    for (int i = 1; i < n; i++) {
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + cost[i][0];
        
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + cost[i][1];
        
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + cost[i][2];
    }
    
    int result = min({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
    
    cout << result << '\n';
    
    return 0;
}