#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long N; cin >> N;
        long long S1 = N * (N + 1) / 2;
        long long S2 = N * N;
        long long S3 = N * (N + 1);
        cout << S1 << ' ' << S2 << ' ' << S3 << '\n';
    }
    return 0;
}