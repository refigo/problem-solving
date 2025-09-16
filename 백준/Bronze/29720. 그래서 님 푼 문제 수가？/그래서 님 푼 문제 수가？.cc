#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N, M, K;
    if (!(cin >> N >> M >> K)) return 0;

    long long mn = N - M * K;
    if (mn < 0) mn = 0;
    long long mx = N - M * (K - 1) - 1;
    if (mx < 0) mx = 0;

    cout << mn << ' ' << mx << '\n';
    return 0;
}