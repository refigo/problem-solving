#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    if (!(cin >> N >> K)) return 0;
    int d1 = K % 10;
    int d2 = (2 * K) % 10;

    vector<int> ans;
    ans.reserve(N);
    for (int x = 1; x <= N; x++) {
        int d = x % 10;
        if (d != d1 && d != d2) ans.push_back(x);
    }

    cout << ans.size() << '\n';
    for (size_t i = 0; i < ans.size(); i++) {
        if (i) cout << ' ';
        cout << ans[i];
    }
    cout << '\n';
    return 0;
}