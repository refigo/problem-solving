#include <bits/stdc++.h>
using namespace std;

int sumDigits(int n) {
    int s = 0;
    while (n) { s += n % 10; n /= 10; }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int L, D, X;
    if (!(cin >> L)) return 0;
    cin >> D >> X;

    int N = -1, M = -1;
    for (int i = L; i <= D; ++i) {
        if (sumDigits(i) == X) { N = i; break; }
    }
    for (int i = D; i >= L; --i) {
        if (sumDigits(i) == X) { M = i; break; }
    }

    cout << N << '\n' << M << '\n';
    return 0;
}