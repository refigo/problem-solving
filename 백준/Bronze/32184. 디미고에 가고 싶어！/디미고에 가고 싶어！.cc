#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long A, B;
    if (!(cin >> A >> B)) return 0;
    long long sA = (A + 1) / 2;
    long long sB = (B + 1) / 2;
    cout << (sB - sA + 1) << '\n';
    return 0;
}