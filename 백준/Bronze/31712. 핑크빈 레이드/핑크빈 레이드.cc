#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long CU, DU, CD, DD, CP, DP, H;
    if (!(cin >> CU >> DU)) return 0;
    cin >> CD >> DD;
    cin >> CP >> DP;
    cin >> H;

    auto dmg = [&](long long t) -> long long {
        return DU * (t / CU + 1) + DD * (t / CD + 1) + DP * (t / CP + 1);
    };

    if (dmg(0) >= H) {
        cout << 0 << '\n';
        return 0;
    }

    long long lo = 0, hi = 1;
    while (dmg(hi) < H) {
        hi <<= 1;
    }
    while (lo + 1 < hi) {
        long long mid = (lo + hi) >> 1;
        if (dmg(mid) >= H) hi = mid; else lo = mid;
    }
    cout << hi << '\n';
    return 0;
}