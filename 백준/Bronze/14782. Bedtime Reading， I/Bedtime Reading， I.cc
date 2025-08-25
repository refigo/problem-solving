#include <iostream>
#include <cmath>
using namespace std;

long long sumDivisors(int n) {
    long long sum = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += (n / i);
            }
        }
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int I;
    cin >> I;
    
    long long result = sumDivisors(I);
    cout << result << "\n";
    
    return 0;
}