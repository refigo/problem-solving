#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    long long sa = 0, sb = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        if (a > b) sa += a + b;
        else if (b > a) sb += a + b;
        else { sa += a; sb += b; }
    }
    cout << sa << ' ' << sb << '\n';
    return 0;
}