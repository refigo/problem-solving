#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    if (!(cin >> N)) return 0;
    long long need, have;
    long long ans = LLONG_MAX;
    for (int i = 0; i < N; ++i) {
        cin >> need >> have;
        ans = min(ans, have / need);
    }
    cout << ans << '\n';
    return 0;
}