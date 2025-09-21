#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c;
    if (!(cin >> a >> b >> c)) return 0;

    if (c == 0) {
        long long s = a + b;
        long long r = (long long) sqrtl((long double)s);
        while ((r + 1) * (r + 1) <= s) r++;
        while (r * r > s) r--;
        cout << r << '\n';
    } else if (a == 0) {
        cout << (c * c - b) << '\n';
    } else {
        cout << (c * c - a) << '\n';
    }
    return 0;
}