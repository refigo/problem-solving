#include <iostream>
using namespace std;

bool leap(int y) {
    if (y % 400 == 0) return true;
    if (y % 100 == 0) return false;
    return y % 4 == 0;
}

int dim(int y, int m) {
    if (m == 2) return leap(y) ? 29 : 28;
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    return 31;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T; 
    if (!(cin >> T)) return 0;
    while (T--) {
        int y, m; 
        cin >> y >> m;
        int d = m;
        int k = m;
        while (k > 0) {
            d--;
            if (d == 0) {
                m--;
                if (m == 0) { y--; m = 12; }
                d = dim(y, m);
            }
            k--;
        }
        cout << y << ' ' << m << ' ' << d << '\n';
    }
    return 0;
}