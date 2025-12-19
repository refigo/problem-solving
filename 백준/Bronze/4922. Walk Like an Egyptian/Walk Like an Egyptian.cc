#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    while (cin >> N) {
        if (N == 0) break;
        long long res = 1LL * N * (N - 1) + 1;
        cout << N << " => " << res << '\n';
    }
    return 0;
}