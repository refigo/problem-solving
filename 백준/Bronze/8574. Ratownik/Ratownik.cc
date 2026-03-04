#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k, x, y;
    if (!(cin >> n >> k >> x >> y)) return 0;

    int count = 0;
    long long k2 = k * k;
    for (int i = 0; i < n; ++i) {
        long long xi, yi;
        cin >> xi >> yi;
        long long dx = xi - x;
        long long dy = yi - y;
        if (dx * dx + dy * dy > k2) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}