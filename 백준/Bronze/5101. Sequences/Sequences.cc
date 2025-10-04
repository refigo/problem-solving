#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, d, v;
    while (cin >> a >> d >> v) {
        if (a == 0 && d == 0 && v == 0) break;
        if (d != 0) {
            long long diff = v - a;
            if (diff % d == 0) {
                long long n = diff / d + 1;
                if (n >= 1) {
                    cout << n << '\n';
                    continue;
                }
            }
        }
        cout << 'X' << '\n';
    }
    return 0;
}