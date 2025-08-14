#include <iostream>
using namespace std;

long long combination(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    
    long long result = 1;
    
    if (k > n - k) {
        k = n - k;
    }
    
    for (int i = 0; i < k; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int j;
    cin >> j;
    
    long long validCombinations = combination(j - 1, 3);
    cout << validCombinations << "\n";
    
    return 0;
}