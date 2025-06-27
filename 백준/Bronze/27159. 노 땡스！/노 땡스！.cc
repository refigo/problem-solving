#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int prev = -1, ans = 0, x;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if (i == 0 || x != prev + 1) ans += x;
        prev = x;
    }
    cout << ans << '\n';
    return 0;
}