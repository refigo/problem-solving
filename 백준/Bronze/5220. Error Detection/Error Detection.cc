#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        unsigned int v; int c;
        cin >> v >> c;
        unsigned int x = v & 0xFFFFu;
        int ones = __builtin_popcount(x);
        cout << ((ones % 2) == c ? "Valid" : "Corrupt") << '\n';
    }
    return 0;
}