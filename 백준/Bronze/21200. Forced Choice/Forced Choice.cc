#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p, s;
    if (!(cin >> n >> p >> s)) return 0;

    for (int i = 0; i < s; ++i) {
        int m;
        cin >> m;
        bool found = false;
        for (int j = 0; j < m; ++j) {
            int card;
            cin >> card;
            if (card == p) {
                found = true;
            }
        }
        if (found) {
            cout << "KEEP\n";
        } else {
            cout << "REMOVE\n";
        }
    }

    return 0;
}
