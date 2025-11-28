#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long A, B, N;
    if (!(cin >> A >> B >> N)) return 0;
    long long base = N * A;
    for (long long k = 1; k <= N; ++k) {
        if (k > 1) cout << ' ';
        cout << base + k * B;
    }
    cout << '\n';
    return 0;
}