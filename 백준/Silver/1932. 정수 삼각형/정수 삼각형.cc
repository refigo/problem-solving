#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 501;

int n;
int triangle[MAX_N][MAX_N];
int dp[MAX_N][MAX_N];

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> triangle[i][j];
        }
    }
    
    dp[0][0] = triangle[0][0];
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                dp[i][j] = dp[i-1][j] + triangle[i][j];
            }
            else if (j == i) {
                dp[i][j] = dp[i-1][j-1] + triangle[i][j];
            }
            else {
                dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j];
            }
        }
    }
    
    int result = 0;
    for (int j = 0; j < n; j++) {
        result = max(result, dp[n-1][j]);
    }
    
    cout << result << '\n';
    
    return 0;
}