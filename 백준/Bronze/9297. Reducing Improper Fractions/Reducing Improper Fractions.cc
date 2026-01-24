#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    for (int tc = 1; tc <= T; ++tc) {
        long long n, d;
        cin >> n >> d;
        long long I = n / d;
        long long r = n % d;
        cout << "Case " << tc << ": ";
        if (I == 0 && r == 0) {
            cout << 0 << '\n';
        } else if (r == 0) {
            cout << I << '\n';
        } else if (I == 0) {
            cout << r << '/' << d << '\n';
        } else {
            cout << I << ' ' << r << '/' << d << '\n';
        }
    }
    return 0;
}