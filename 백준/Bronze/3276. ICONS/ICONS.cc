#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    int bestR = 1, bestC = N;
    int bestSum = bestR + bestC;
    for (int r = 1; r <= N; r++) {
        int c = (N + r - 1) / r;
        int s = r + c;
        if (s < bestSum) {
            bestSum = s;
            bestR = r;
            bestC = c;
        }
    }
    cout << bestR << ' ' << bestC << '\n';
    return 0;
}