#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long pow_mod(long long base, long long exp) {
    long long result = 1;
    base %= MOD;
    
    while(exp > 0) {
        if(exp & 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp >>= 1;
    }
    
    return result;
}

long long mod_inverse(long long n) {
    return pow_mod(n, MOD - 2);
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int M;
    cin >> M;
    
    long long total = 0;
    
    for(int i = 0; i < M; i++) {
        long long N, S;
        cin >> N >> S;
        
        long long n_inverse = mod_inverse(N);
        long long expectation = (S * n_inverse) % MOD;
        
        total = (total + expectation) % MOD;
    }
    
    cout << total << '\n';
    
    return 0;
}