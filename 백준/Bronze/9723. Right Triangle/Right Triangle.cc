#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T; 
    if (!(cin >> T)) return 0;
    for (int tc = 1; tc <= T; tc++) {
        int a, b, c; 
        cin >> a >> b >> c;
        int s[3] = {a, b, c};
        sort(s, s + 3);
        int x = s[0], y = s[1], z = s[2];
        bool ok = (x * x + y * y == z * z);
        cout << "Case #" << tc << ": " << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}