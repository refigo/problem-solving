#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, W, H;
    if (!(cin >> N >> W >> H)) return 0;
    long long diag2 = 1LL * W * W + 1LL * H * H;
    for (int i = 0; i < N; i++) {
        long long L; cin >> L;
        cout << (L * L <= diag2 ? "YES" : "NO") << '\n';
    }
    return 0;
}