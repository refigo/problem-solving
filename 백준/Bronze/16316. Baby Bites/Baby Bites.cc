#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    bool ok = true;
    for (int i = 1; i <= n; ++i) {
        string s; cin >> s;
        if (s != "mumble") {
            int v = 0;
            for (char c : s) v = v * 10 + (c - '0');
            if (v != i) ok = false;
        }
    }
    cout << (ok ? "makes sense" : "something is fishy") << '\n';
    return 0;
}