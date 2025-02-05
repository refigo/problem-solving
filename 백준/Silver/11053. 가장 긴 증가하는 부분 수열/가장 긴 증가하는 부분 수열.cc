#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    vector<int> a(n);  // 입력 수열
    vector<int> dp(n, 1);  // dp[i]: i번째 원소를 마지막으로 하는 LIS의 길이
    
    // 수열 입력
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // DP로 LIS 계산
    int max_length = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {  // 증가하는 수열 조건
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        max_length = max(max_length, dp[i]);
    }
    
    cout << max_length << '\n';
    
    return 0;
}