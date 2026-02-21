#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    vector<long long> X(N);
    for (int i = 0; i < N; ++i) cin >> X[i];

    vector<long long> L(N);
    for (int i = 0; i < N; ++i) cin >> L[i];

    vector<char> C(N);
    for (int i = 0; i < N; ++i) cin >> C[i];

    long long best_val[3] = {-2000000007LL, -2000000007LL, -2000000007LL};
    int best_idx[3] = {-1, -1, -1};

    auto getColorIndex = [](char c) {
        if (c == 'R') return 0;
        if (c == 'Y') return 1;
        return 2;
    };

    for (int i = 0; i < N; ++i) {
        int curColor = getColorIndex(C[i]);
        long long current_reach_back = X[i] - L[i];

        for (int c = 0; c < 3; ++c) {
            if (c != curColor && best_idx[c] != -1) {
                if (best_val[c] >= current_reach_back) {
                    cout << "YES" << "\n";
                    cout << best_idx[c] + 1 << " " << i + 1 << endl;
                    return 0;
                }
            }
        }

        long long current_reach_forward = X[i] + L[i];
        if (current_reach_forward > best_val[curColor]) {
            best_val[curColor] = current_reach_forward;
            best_idx[curColor] = i;
        }
    }

    cout << "NO" << endl;

    return 0;
}