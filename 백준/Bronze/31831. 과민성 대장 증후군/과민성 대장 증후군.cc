#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N; long long M;
    if (!(cin >> N >> M)) return 0;
    long long cur = 0;
    long long ans = 0;
    for (int i = 0; i < N; i++) {
        long long a; cin >> a;
        cur += a;
        if (cur < 0) cur = 0;
        if (cur >= M) ans++;
    }
    cout << ans << '\n';
    return 0;
}