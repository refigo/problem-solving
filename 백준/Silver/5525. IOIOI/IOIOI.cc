#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N, M;
    string S;
    
    cin >> N >> M >> S;
    
    int answer = 0;
    vector<int> dp(M, 0);
    
    for(int i = 1; i < M-1; i++) {
        if(S[i] == 'O' && S[i+1] == 'I') {
            if(S[i-1] == 'I') {
                dp[i+1] = dp[i-1] + 1;
                
                if(dp[i+1] >= N) {
                    answer++;
                }
            }
        }
    }
    
    cout << answer << '\n';
    
    return 0;
}