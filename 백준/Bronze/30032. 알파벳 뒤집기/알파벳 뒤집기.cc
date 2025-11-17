#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, D;
    if (!(cin >> N >> D)) return 0;
    vector<string> g(N);
    for (int i = 0; i < N; ++i) cin >> g[i];

    auto flip = [&](char c) {
        if (D == 1) {
            if (c == 'd') return 'q';
            if (c == 'q') return 'd';
            if (c == 'b') return 'p';
            return 'b';
        } else {
            if (c == 'd') return 'b';
            if (c == 'b') return 'd';
            if (c == 'q') return 'p';
            return 'q';
        }
    };

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) g[i][j] = flip(g[i][j]);
        cout << g[i] << '\n';
    }
    return 0;
}