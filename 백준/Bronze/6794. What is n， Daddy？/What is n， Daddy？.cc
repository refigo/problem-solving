#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
    int lower = (n + 1) / 2;
    lower = max(lower, n - 5);
    lower = max(lower, 0);
    int upper = min(5, n);
    int ans = 0;
    if (lower <= upper) ans = upper - lower + 1;
    cout << ans << '\n';
    return 0;
}