#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    if (n > 198) {
        cout << 0 << '\n';
        return 0;
    }
    int lower = n - 99;
    if (lower < 0) lower = 0;
    int upper = n;
    if (upper > 99) upper = 99;
    int ans = 0;
    if (lower <= upper) ans = upper - lower + 1;
    cout << ans << '\n';
    return 0;
}