#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;

string str1, str2;
int dp[MAX][MAX];

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> str1 >> str2;
    
    int len1 = str1.length();
    int len2 = str2.length();
    
    for(int i = 1; i <= len1; i++) {
        for(int j = 1; j <= len2; j++) {
            if(str1[i-1] == str2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    cout << dp[len1][len2] << '\n';
    
    return 0;
}