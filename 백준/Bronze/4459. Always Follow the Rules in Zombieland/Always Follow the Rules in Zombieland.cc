#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q)) return 0;
    string line;
    getline(cin, line);
    vector<string> quotes(q);
    for (int i = 0; i < q; ++i) getline(cin, quotes[i]);
    int r;
    cin >> r;
    for (int i = 0; i < r; ++i) {
        long long rule;
        cin >> rule;
        cout << "Rule " << rule << ": ";
        if (1 <= rule && rule <= q) cout << quotes[rule - 1];
        else cout << "No such rule";
        cout << '\n';
    }
    return 0;
}