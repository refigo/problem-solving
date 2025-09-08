#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;

    int days[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

    while (T--) {
        int x, y;
        cin >> x >> y;
        bool timeOk = (0 <= x && x <= 23) && (0 <= y && y <= 59);
        bool dateOk = false;
        if (1 <= x && x <= 12) {
            if (1 <= y && y <= days[x]) dateOk = true;
        }
        cout << (timeOk ? "Yes" : "No") << ' ' << (dateOk ? "Yes" : "No") << '\n';
    }

    return 0;
}