#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> memory, cost;
vector<vector<int>> dp;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> n >> m;
    
    memory.resize(n);
    cost.resize(n);
    
    for(int i = 0; i < n; i++) cin >> memory[i];
    for(int i = 0; i < n; i++) cin >> cost[i];
    
    int sum_cost = accumulate(cost.begin(), cost.end(), 0);
    dp.resize(n + 1, vector<int>(sum_cost + 1, 0));
    
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= sum_cost; j++) {
            if(j >= cost[i-1])
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-cost[i-1]] + memory[i-1]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    
    int answer;
    for(int j = 0; j <= sum_cost; j++) {
        if(dp[n][j] >= m) {
            answer = j;
            break;
        }
    }
    
    cout << answer << '\n';
    
    return 0;
}