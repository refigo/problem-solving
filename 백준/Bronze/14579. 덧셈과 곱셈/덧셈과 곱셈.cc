#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    
    const int MOD = 14579;
    long long result = 1;
    
    for (int i = a; i <= b; i++) {
        long long sum = (long long)i * (i + 1) / 2;
        sum %= MOD;
        
        result = (result * sum) % MOD;
    }
    
    cout << result << '\n';
    
    return 0;
}
