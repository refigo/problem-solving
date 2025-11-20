#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int P;
    if (!(cin >> P)) return 0;
    while (P--) {
        long long l;
        cin >> l;
        __int128 t = (__int128)l * (l + 1) * (2 * l + 1) / 6;
        long long ans = (long long)t;
        cout << ans << '\n';
    }
    return 0;
}