#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long A, B;
    if (!(cin >> A >> B)) return 0;
    long long n = B + 1; // order
    long long ans = ((A - 2) * n * n - (A - 4) * n) / 2;
    cout << ans << '\n';
    return 0;
}