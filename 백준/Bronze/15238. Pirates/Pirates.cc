#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    string s;
    cin >> s;
    vector<int> cnt(26, 0);
    for (char c : s) cnt[c - 'a']++;
    int bestc = 0, bestv = -1;
    for (int i = 0; i < 26; ++i) if (cnt[i] > bestv) { bestv = cnt[i]; bestc = i; }
    cout << char('a' + bestc) << ' ' << bestv << '\n';
    return 0;
}