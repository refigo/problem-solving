#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> cubes;
    for (long long i = 1;; ++i) {
        long long v = i * i * i;
        if (v > 2000000000LL) break;
        cubes.push_back(v);
    }
    int T;
    if (!(cin >> T)) return 0;
    for (int cs = 1; cs <= T; ++cs) {
        long long A, B;
        cin >> A >> B;
        long long cnt = upper_bound(cubes.begin(), cubes.end(), B) - lower_bound(cubes.begin(), cubes.end(), A);
        cout << "Case #" << cs << ": " << cnt << '\n';
    }
    return 0;
}