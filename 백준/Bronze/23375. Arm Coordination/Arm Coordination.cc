#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long x, y, r;
    if (!(cin >> x >> y)) return 0;
    if (!(cin >> r)) return 0;

    long long x1 = x - r, y1 = y - r;
    long long x2 = x + r, y2 = y - r;
    long long x3 = x + r, y3 = y + r;
    long long x4 = x - r, y4 = y + r;

    cout << x1 << ' ' << y1 << '\n';
    cout << x2 << ' ' << y2 << '\n';
    cout << x3 << ' ' << y3 << '\n';
    cout << x4 << ' ' << y4 << '\n';
    return 0;
}