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
        long long S1 = N * (N + 1) / 2;
        long long S2 = N * N;
        long long S3 = N * (N + 1);
        cout << K << ' ' << S1 << ' ' << S2 << ' ' << S3 << '\n';
    }
    return 0;
}