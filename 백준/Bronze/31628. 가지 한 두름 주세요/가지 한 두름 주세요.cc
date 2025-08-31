#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a[10][10];
    for (int r = 0; r < 10; r++) {
        for (int c = 0; c < 10; c++) cin >> a[r][c];
    }

    for (int r = 0; r < 10; r++) {
        bool ok = true;
        for (int c = 1; c < 10; c++) if (a[r][c] != a[r][0]) { ok = false; break; }
        if (ok) { cout << 1 << '\n'; return 0; }
    }

    for (int c = 0; c < 10; c++) {
        bool ok = true;
        for (int r = 1; r < 10; r++) if (a[r][c] != a[0][c]) { ok = false; break; }
        if (ok) { cout << 1 << '\n'; return 0; }
    }

    cout << 0 << '\n';
    return 0;
}