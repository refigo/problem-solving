#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    int maxs = -1, f = -1, tf = 0;
    for (int i = 1; i <= n; ++i) {
        int t, s;
        cin >> t >> s;
        if (s > maxs) { maxs = s; f = i; tf = t; }
    }
    if (maxs == 0) cout << 0 << '\n';
    else cout << tf + (long long)(f - 1) * 20 << '\n';
    return 0;
}