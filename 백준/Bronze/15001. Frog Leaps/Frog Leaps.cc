#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    long long ans = 0;
    long long x_prev;
    if (!(cin >> x_prev)) return 0;

    for (int i = 1; i < n; ++i) {
        long long x_curr;
        if (!(cin >> x_curr)) break;
        long long diff = x_curr - x_prev;
        ans += diff * diff;
        x_prev = x_curr;
    }

    cout << ans << "\n";

    return 0;
}
