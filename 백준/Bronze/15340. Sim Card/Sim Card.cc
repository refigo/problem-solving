#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long c, d;
    while (cin >> c >> d) {
        if (c == 0 && d == 0) break;
        long long a = 30 * c + 40 * d;
        long long b = 35 * c + 30 * d;
        long long e = 40 * c + 20 * d;
        cout << min(a, min(b, e)) << '\n';
    }
    return 0;
}