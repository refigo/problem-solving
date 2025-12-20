#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double sp, wt, st;
    while (cin >> sp >> wt >> st) {
        if (sp == 0 && wt == 0 && st == 0) break;
        bool any = false;
        if (sp <= 4.5 && wt >= 150 && st >= 200) {
            cout << "Wide Receiver";
            any = true;
            if (true) cout << ' ';
        }
        if (sp <= 6.0 && wt >= 300 && st >= 500) {
            cout << "Lineman";
            any = true;
            if (true) cout << ' ';
        }
        if (sp <= 5.0 && wt >= 200 && st >= 300) {
            cout << "Quarterback";
            any = true;
            if (true) cout << ' ';
        }
        if (!any) cout << "No positions";
        cout << '\n';
    }
    return 0;
}