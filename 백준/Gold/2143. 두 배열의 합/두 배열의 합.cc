#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    ll T;
    cin >> T;
    
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    int m;
    cin >> m;
    vector<int> B(m);
    for(int i = 0; i < m; i++) {
        cin >> B[i];
    }
    
    vector<ll> sumsA;
    for(int i = 0; i < n; i++) {
        ll sum = 0;
        for(int j = i; j < n; j++) {
            sum += A[j];
            sumsA.push_back(sum);
        }
    }
    
    vector<ll> sumsB;
    for(int i = 0; i < m; i++) {
        ll sum = 0;
        for(int j = i; j < m; j++) {
            sum += B[j];
            sumsB.push_back(sum);
        }
    }
    
    map<ll, ll> countB;
    for(ll sum : sumsB) {
        countB[sum]++;
    }
    
    ll result = 0;
    for(ll sum : sumsA) {
        result += countB[T - sum];
    }
    
    cout << result << '\n';
    
    return 0;
}