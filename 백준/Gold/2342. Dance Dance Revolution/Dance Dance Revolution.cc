#include <bits/stdc++.h>
using namespace std;

int getCost(int from, int to) {
    if(from == to) return 1;
    if(from == 0) return 2;
    
    if((from == 1 && to == 3) || (from == 3 && to == 1) || 
       (from == 2 && to == 4) || (from == 4 && to == 2)) {
        return 4;
    }
    
    return 3;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    vector<int> commands;
    int cmd;
    
    while(true) {
        cin >> cmd;
        if(cmd == 0) break;
        commands.push_back(cmd);
    }
    
    int n = commands.size();
    
    vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(5, vector<int>(5, 1e9)));
    
    dp[0][0][0] = 0;
    
    for(int i = 1; i <= n; i++) {
        int next = commands[i-1];
        
        for(int left = 0; left <= 4; left++) {
            for(int right = 0; right <= 4; right++) {
                if(left == right && left != 0) continue;
                
                if(dp[i-1][left][right] == 1e9) continue;
                
                if(next != right) {
                    dp[i][next][right] = min(dp[i][next][right], 
                                            dp[i-1][left][right] + getCost(left, next));
                }
                
                if(next != left) {
                    dp[i][left][next] = min(dp[i][left][next], 
                                            dp[i-1][left][right] + getCost(right, next));
                }
            }
        }
    }
    
    int result = 1e9;
    for(int left = 0; left <= 4; left++) {
        for(int right = 0; right <= 4; right++) {
            if(left == right && left != 0) continue;
            result = min(result, dp[n][left][right]);
        }
    }
    
    cout << result << '\n';
    
    return 0;
}