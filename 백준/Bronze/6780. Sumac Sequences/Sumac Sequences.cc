#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t1, t2;
    if (!(cin >> t1)) return 0;
    cin >> t2;
    int len = 2;
    long long a = t1, b = t2;
    while (a >= b) {
        long long c = a - b;
        a = b;
        b = c;
        ++len;
    }
    cout << len << '\n';
    return 0;
}