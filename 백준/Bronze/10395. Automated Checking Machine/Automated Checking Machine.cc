#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a[5], b[5];
    for (int i = 0; i < 5; i++) if (!(cin >> a[i])) return 0;
    for (int i = 0; i < 5; i++) cin >> b[i];
    for (int i = 0; i < 5; i++) {
        if (a[i] == b[i]) { cout << 'N' << '\n'; return 0; }
    }
    cout << 'Y' << '\n';
    return 0;
}