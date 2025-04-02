#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<vector<ll>> matrix;
const ll MOD = 1000000007;

matrix multiply(const matrix &a, const matrix &b) {
    int n = a.size();
    matrix c(n, vector<ll>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
            }
        }
    }
    return c;
}

matrix power(matrix a, ll n) {
    int size = a.size();
    matrix result(size, vector<ll>(size));
    
    for(int i = 0; i < size; i++) {
        result[i][i] = 1;
    }
    
    while(n > 0) {
        if(n & 1) {
            result = multiply(result, a);
        }
        a = multiply(a, a);
        n >>= 1;
    }
    
    return result;
}

ll fibonacci(ll n) {
    if(n <= 1) return n;
    
    matrix base = {{1, 1}, {1, 0}};
    
    matrix result = power(base, n - 1);
    
    return result[0][0];
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    ll n;
    cin >> n;
    
    cout << fibonacci(n) << '\n';
    
    return 0;
}