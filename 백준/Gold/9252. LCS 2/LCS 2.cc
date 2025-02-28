#include <bits/stdc++.h>
using namespace std;

const int MAX_LEN = 1001;
int dp[MAX_LEN][MAX_LEN];

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    string str1, str2;
    cin >> str1 >> str2;
    
    int len1 = str1.length();
    int len2 = str2.length();
    
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            if (str1[i-1] == str2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    cout << dp[len1][len2] << '\n';
    
    if (dp[len1][len2] == 0) return 0;
    
    string lcs;
    int i = len1, j = len2;
    
    while (i > 0 && j > 0) {
        if (str1[i-1] == str2[j-1]) {
            lcs = str1[i-1] + lcs;
            i--; j--;
        }
        else if (dp[i-1][j] > dp[i][j-1]) {
            i--;
        }
        else {
            j--;
        }
    }
    
    cout << lcs << '\n';
    
    return 0;
}