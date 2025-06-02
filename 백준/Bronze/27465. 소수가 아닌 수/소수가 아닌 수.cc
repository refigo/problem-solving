#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    long long N;
    cin >> N;
    
    if (N <= 1) {
        cout << 1 << '\n';
    } else if (N == 2) {
        cout << 4 << '\n';
    } else if (N % 2 == 0) {
        cout << N << '\n';
    } else {
        if (!isPrime(N)) {
            cout << N << '\n';
        } else {
            cout << N + 1 << '\n';
        }
    }
    
    return 0;
}