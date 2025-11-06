#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N, T;
    if (!(cin >> N >> T)) return 0;

    long long L = 4 * N - 2;
    long long t = (T - 1) % L + 1;
    long long ans;
    if (t <= 2 * N) ans = t;
    else ans = 4 * N - t;

    cout << ans << '\n';
    return 0;
}