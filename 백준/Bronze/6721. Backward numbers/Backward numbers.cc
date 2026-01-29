#include <bits/stdc++.h>
using namespace std;

long long reverseNumber(long long n) {
    long long result = 0;
    while (n > 0) {
        result = result * 10 + n % 10;
        n /= 10;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    for (int i = 0; i < N; ++i) {
        long long a, b;
        cin >> a >> b;
        
        long long num1 = reverseNumber(a);
        long long num2 = reverseNumber(b);
        long long sum = num1 + num2;
        long long result = reverseNumber(sum);
        
        cout << result << '\n';
    }
    
    return 0;
}