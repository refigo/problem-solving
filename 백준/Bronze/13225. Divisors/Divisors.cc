#include <iostream>
#include <cmath>
using namespace std;

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                count++;
            } else {
                count += 2;
            }
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int C;
    cin >> C;
    
    while (C--) {
        int n;
        cin >> n;
        
        int divisors = countDivisors(n);
        cout << n << " " << divisors << "\n";
    }
    
    return 0;
}