#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long K; int N;
    if (!(cin >> K)) return 0;
    cin >> N;
    long long S = 1LL * N * (N + 1) / 2;
    long long R = K - S;
    for (int i = 1; i < N; ++i) cout << i << '\n';
    cout << (N + R) << '\n';
    return 0;
}