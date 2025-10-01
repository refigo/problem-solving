#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    while (N--) {
        int M; cin >> M;
        vector<long long> K(M), D(M), A(M);
        for (int i = 0; i < M; i++) cin >> K[i] >> D[i] >> A[i];
        long long k, d, a; cin >> k >> d >> a;
        long long total = 0;
        for (int i = 0; i < M; i++) {
            long long val = k * K[i] - d * D[i] + a * A[i];
            if (val > 0) total += val;
        }
        cout << total << '\n';
    }
    return 0;
}