#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 2001;
int arr[MAX_N];
bool dp[MAX_N][MAX_N];

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 1; i <= n; i++) {
        dp[i][i] = true;
    }
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i+1]) {
            dp[i][i+1] = true;
        }
    }
    
    for (int len = 3; len <= n; len++) {
        for (int start = 1; start <= n-len+1; start++) {
            int end = start + len - 1;
            if (arr[start] == arr[end] && dp[start+1][end-1]) {
                dp[start][end] = true;
            }
        }
    }
    
    int m;
    cin >> m;
    
    while (m--) {
        int s, e;
        cin >> s >> e;
        cout << dp[s][e] << '\n';
    }
    
    return 0;
}