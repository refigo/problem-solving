#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    long long X, S;
    cin >> X >> S;

    bool ok = false;
    for (int i = 0; i < N; i++) {
        long long c, p;
        cin >> c >> p;
        if (c <= X && p > S) ok = true;
    }

    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}