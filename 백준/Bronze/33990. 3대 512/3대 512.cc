#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;
    int best = INT_MAX;
    for (int i = 0; i < N; ++i) {
        int A, B, C;
        cin >> A >> B >> C;
        int s = A + B + C;
        if (s >= 512 && s < best) best = s;
    }
    cout << (best == INT_MAX ? -1 : best) << '\n';
    return 0;
}