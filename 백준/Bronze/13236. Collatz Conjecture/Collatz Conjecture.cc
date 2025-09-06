#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    cout << n;
    while (n != 1) {
        if ((n & 1) == 0) n >>= 1;
        else n = 3 * n + 1;
        cout << ' ' << n;
    }
    cout << '\n';
    return 0;
}
