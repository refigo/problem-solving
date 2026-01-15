#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    for (int cs = 0; cs < T; ++cs) {
        int num; char ch;
        cin >> num >> ch;
        for (int i = 1; i <= num; ++i) {
            for (int k = 0; k < i; ++k) cout << ch;
            cout << '\n';
            ch = (ch == 'Z' ? 'A' : char(ch + 1));
        }
        if (cs + 1 < T) cout << '\n';
    }
    return 0;
}