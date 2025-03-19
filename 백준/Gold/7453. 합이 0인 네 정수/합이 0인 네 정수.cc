#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    vector<int> A(n), B(n), C(n), D(n);
    
    for(int i = 0; i < n; i++) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }
    
    vector<int> sums1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            sums1.push_back(A[i] + B[j]);
        }
    }
    
    vector<int> sums2;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            sums2.push_back(C[i] + D[j]);
        }
    }
    
    sort(sums1.begin(), sums1.end());
    
    ll answer = 0;
    
    for(int sum : sums2) {
        auto upper = upper_bound(sums1.begin(), sums1.end(), -sum);
        auto lower = lower_bound(sums1.begin(), sums1.end(), -sum);
        answer += upper - lower;
    }
    
    cout << answer << '\n';
    
    return 0;
}