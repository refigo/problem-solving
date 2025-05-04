#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string s;
    cin >> s;
    
    int n = s.length();
    
    vector<vector<bool>> isPalindrome(n, vector<bool>(n, false));
    
    for (int i = 0; i < n; i++) {
        isPalindrome[i][i] = true;
    }
    
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            isPalindrome[i][i + 1] = true;
        }
    }
    
    for (int len = 3; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            if (s[i] == s[j] && isPalindrome[i + 1][j - 1]) {
                isPalindrome[i][j] = true;
            }
        }
    }
    
    vector<int> dp(n, INT_MAX);
    
    for (int i = 0; i < n; i++) {
        if (isPalindrome[0][i]) {
            dp[i] = 1;
        } else {
            for (int j = 0; j < i; j++) {
                if (isPalindrome[j + 1][i]) {
                    dp[i] = min(dp[i], dp[j] + 1);
                }
            }
        }
    }
    
    cout << dp[n - 1] << '\n';
    
    return 0;
}