#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i < n; ++i) if (s[i] == t[i]) ++cnt;
    cout << cnt << '\n';
    return 0;
}