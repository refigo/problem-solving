#include <bits/stdc++.h>
using namespace std;

long long solve(int n, int r, int c) {
    if (n == 0) return 0;
    
    int size = 1 << n;  // 2^n
    int half = size / 2;
    
    if (r < half && c < half)
        return solve(n-1, r, c);
    else if (r < half && c >= half)
        return half * half + solve(n-1, r, c-half);
    else if (r >= half && c < half)
        return 2 * half * half + solve(n-1, r-half, c);
    else
        return 3 * half * half + solve(n-1, r-half, c-half);
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n, r, c;
    cin >> n >> r >> c;
    
    cout << solve(n, r, c) << '\n';
    
    return 0;
}