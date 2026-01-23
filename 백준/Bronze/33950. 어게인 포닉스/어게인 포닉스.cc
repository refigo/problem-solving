#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        string s;
        cin >> s;
        string result;
        for (int i = 0; i < s.size(); ++i) {
            if (i + 1 < s.size() && s[i] == 'P' && s[i+1] == 'O') {
                result += "PHO";
                ++i;
            } else {
                result += s[i];
            }
        }
        cout << result << '\n';
    }
    return 0;
}