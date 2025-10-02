#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int k; cin >> k;
        long long se = 0, so = 0;
        for (int i = 0; i < k; i++) {
            long long x; cin >> x;
            if ((x & 1LL) == 0) se += x; else so += x;
        }
        if (se > so) cout << "EVEN\n";
        else if (so > se) cout << "ODD\n";
        else cout << "TIE\n";
    }
    return 0;
}