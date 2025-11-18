#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        long long n;
        cin >> n;
        long long r = sqrtl((long double)n);
        while ((r + 1) * (r + 1) <= n) ++r;
        while (r * r > n) --r;
        cout << (r * r == n) << '\n';
    }
    return 0;
}