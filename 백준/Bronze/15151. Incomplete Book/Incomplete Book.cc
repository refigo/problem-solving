#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long k, d;
    if (!(cin >> k >> d)) return 0;
    long long used = 0, t = k;
    int cnt = 0;
    while (used + t <= d) {
        used += t;
        cnt++;
        if (t > (LLONG_MAX >> 1)) break;
        t <<= 1;
    }
    cout << cnt << '\n';
    return 0;
}