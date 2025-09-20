#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int P, Q;
    if (!(cin >> P >> Q)) return 0;

    vector<int> dp, dq;
    for (int i = 1; i * i <= P; i++) {
        if (P % i == 0) {
            dp.push_back(i);
            if (i * i != P) dp.push_back(P / i);
        }
    }
    for (int i = 1; i * i <= Q; i++) {
        if (Q % i == 0) {
            dq.push_back(i);
            if (i * i != Q) dq.push_back(Q / i);
        }
    }
    sort(dp.begin(), dp.end());
    sort(dq.begin(), dq.end());

    for (int a : dp) for (int b : dq) cout << a << ' ' << b << '\n';
    return 0;
}