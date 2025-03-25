#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 101;
const int MAX_K = 100001;

int N, K;
int W[MAX_N];
int V[MAX_N];
int dp[MAX_N][MAX_K];

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> N >> K;
    for(int i = 1; i <= N; i++) {
        cin >> W[i] >> V[i];
    }
    
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= K; j++) {
            if(W[i] <= j) {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-W[i]] + V[i]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    
    cout << dp[N][K] << '\n';
    
    return 0;
}