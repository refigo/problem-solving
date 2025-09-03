#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    if (!(cin >> N >> M)) return 0;

    vector<long long> ans(N + M, 0);
    for (int i = 0; i < N; i++) {
        long long s; cin >> s;
        ans[i] = s;
    }

    for (int i = 0; i < N; i++) {
        long long out = 0;
        for (int j = 0; j < N + M; j++) {
            long long x; cin >> x;
            ans[j] += x;
            out += x;
        }
        ans[i] -= out;
    }

    for (int j = 0; j < N + M; j++) {
        if (j) cout << ' ';
        cout << ans[j];
    }
    cout << '\n';
    return 0;
}