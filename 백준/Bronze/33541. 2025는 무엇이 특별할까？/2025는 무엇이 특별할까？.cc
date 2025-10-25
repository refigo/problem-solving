#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    if (!(cin >> X)) return 0;
    for (int y = X + 1; y <= 9999; y++) {
        int a = y / 100;
        int b = y % 100;
        int s = a + b;
        if (s * s == y) {
            cout << y << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';
    return 0;
}