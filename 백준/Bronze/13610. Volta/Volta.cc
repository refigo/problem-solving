#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long X, Y;
    if (!(cin >> X >> Y)) return 0;
    long long d = Y - X;
    long long ans = (Y + d - 1) / d;
    cout << ans << '\n';
    return 0;
}