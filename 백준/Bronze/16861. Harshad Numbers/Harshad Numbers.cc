#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    if(!(cin >> n)) return 0;
    while (true) {
        long long x = n, sum = 0;
        while (x) { sum += x % 10; x /= 10; }
        if (n % sum == 0) { cout << n << '\n'; break; }
        ++n;
    }
    return 0;
}