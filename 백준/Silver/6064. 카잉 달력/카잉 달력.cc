#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int solve(int M, int N, int x, int y) {
    int last_year = lcm(M, N);
    
    int year = x;
    while(year <= last_year) {
        int temp_y = year % N;
        if(temp_y == 0) temp_y = N;
        
        if(temp_y == y) {
            return year;
        }
        
        year += M;
    }
    
    return -1;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int T;
    cin >> T;
    
    while(T--) {
        int M, N, x, y;
        cin >> M >> N >> x >> y;
        cout << solve(M, N, x, y) << '\n';
    }
    
    return 0;
}