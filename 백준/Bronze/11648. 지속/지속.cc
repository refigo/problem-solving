#include <iostream>
#include <string>

using namespace std;

long long multiplyDigits(long long n) {
    if (n == 0) return 0;
    
    long long product = 1;
    
    while (n > 0) {
        int digit = n % 10;
        product *= digit;
        n /= 10;
    }
    
    return product;
}

bool isSingleDigit(long long n) {
    return n >= 0 && n <= 9;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    long long N;
    cin >> N;
    
    int steps = 0;
    
    if (isSingleDigit(N)) {
        cout << steps << '\n';
        return 0;
    }
    
    while (!isSingleDigit(N)) {
        N = multiplyDigits(N);
        steps++;
    }
    
    cout << steps << '\n';
    
    return 0;
}