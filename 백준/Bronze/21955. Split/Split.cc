#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    if (!(cin >> s)) return 0;
    int n = s.size() / 2;
    cout << s.substr(0, n) << ' ' << s.substr(n) << '\n';
    return 0;
}