#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        long long N, D;
        cin >> N >> D;
        long long count = 0;
        for (int i = 0; i < N; i++) {
            long long v, f, c;
            cin >> v >> f >> c;
            if (v * f >= c * D) count++;
        }
        cout << count << '\n';
    }
    return 0;
}