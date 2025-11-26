#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    for (int tc = 1; tc <= T; ++tc) {
        int s;
        cin >> s;
        cout << "Case " << tc << ":\n";
        for (int i = 1; i <= 6; ++i) {
            int j = s - i;
            if (j < i) continue;
            if (j > 6) continue;
            if (j < 1) continue;
            cout << '(' << i << ',' << j << ")\n";
        }
    }
    return 0;
}