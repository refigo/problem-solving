#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int P;
    if (!(cin >> P)) return 0;
    while (P--) {
        long long K, N;
        cin >> K >> N;
        long long candles = N * (N + 3) / 2;
        cout << K << ' ' << candles << '\n';
    }
    return 0;
}