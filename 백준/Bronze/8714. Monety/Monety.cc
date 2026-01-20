#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    if (!(cin >> n)) return 0;
    long long c0 = 0, c1 = 0, x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x == 0) ++c0; else ++c1;
    }
    cout << min(c0, c1) << '\n';
    return 0;
}