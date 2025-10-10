#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long S, N, M;
    if (!(cin >> S >> N >> M)) return 0;
    long long U = 0;
    long long total = N + M;
    for (long long i = 0; i < total; i++) {
        int op; cin >> op;
        if (op == 1) {
            if (U == S) S *= 2;
            U++;
        } else {
            U--;
        }
    }
    cout << S << '\n';
    return 0;
}