#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    if (!(cin >> N)) return 0;
    long long ans = N * (N + 1) * (N + 2) / 2;
    cout << ans << '\n';
    return 0;
}