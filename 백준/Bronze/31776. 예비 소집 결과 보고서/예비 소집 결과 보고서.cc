#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        int t[3];
        cin >> t[0] >> t[1] >> t[2];
        bool any = (t[0] != -1) || (t[1] != -1) || (t[2] != -1);
        bool ok = any;
        int prev = -1;
        bool seen_unsolved = false;
        for (int k = 0; k < 3; ++k) {
            if (t[k] == -1) {
                seen_unsolved = true;
            } else {
                if (seen_unsolved) ok = false;
                if (prev != -1 && t[k] < prev) ok = false;
                prev = t[k];
            }
        }
        if (ok) ++ans;
    }
    cout << ans << '\n';
    return 0;
}