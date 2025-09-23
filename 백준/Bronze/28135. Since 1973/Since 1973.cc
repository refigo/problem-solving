#include <iostream>
using namespace std;

static inline bool has50(int x) {
    int prev = -1;
    while (x > 0) {
        int d = x % 10;
        if (prev == 0 && d == 5) return true;
        prev = d;
        x /= 10;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    long long extra = 0;
    for (int i = 1; i < N; i++) if (has50(i)) extra++;
    cout << (extra + N) << '\n';
    return 0;
}