#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long A, B, C;
    if (!(cin >> A >> B >> C)) return 0;

    long long lo = 0, hi = 2000000;
    while (lo < hi) {
        long long mid = (lo + hi) >> 1;
        long long coins = A * mid + B * (mid / 7);
        if (coins >= C) hi = mid;
        else lo = mid + 1;
    }
    cout << lo << '\n';
    return 0;
}