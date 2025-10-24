#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    if (!(cin >> Q)) return 0;
    while (Q--) {
        string s; cin >> s;
        int n = (int)s.size();
        int cnt = 0;
        for (int i = 0; i + 2 < n; i++) {
            if (s[i] == 'W' && s[i + 1] == 'O' && s[i + 2] == 'W') cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}