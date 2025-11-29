#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int M;
        cin >> M;
        long long cur = 0, mn = 0;
        for (int i = 0; i < M; ++i) {
            long long p1, p2;
            cin >> p1 >> p2;
            cur += p1;
            cur -= p2;
            if (cur < mn) mn = cur;
        }
        cout << -mn << '\n';
    }
    return 0;
}