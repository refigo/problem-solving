#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, b, c;
    if (!(cin >> a >> b >> c)) return 0;
    __int128 prod = (__int128)a * (__int128)b;
    long double x = (long double)prod / (long double)c;
    cout.setf(std::ios::fixed);
    cout << setprecision(12) << x << '\n';
    return 0;
}