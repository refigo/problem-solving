#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string P;
int K;

long long modulo(string num, long long a) {
    long long res = 0;
    for (int i = 0; i < num.length(); i++) {
        res = (res * 10 + (num[i] - '0')) % a;
    }
    return res;
}

bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> P >> K;
    
    long long factor = 0;
    for (long long i = 2; i < K; i++) {
        if (modulo(P, i) == 0) {
            if (is_prime(i)) {
                factor = i;
                break;
            }
        }
    }
    
    if (factor == 0) {
        cout << "GOOD" << '\n';
    } else {
        cout << "BAD " << factor << '\n';
    }
    
    return 0;
}