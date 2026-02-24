#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c;
    if (!(cin >> n >> c)) return 0;

    int total_seconds = 0;
    for (int i = 0; i < n; ++i) {
        string t;
        cin >> t;
        int colon_pos = t.find(':');
        int m = stoi(t.substr(0, colon_pos));
        int ss = stoi(t.substr(colon_pos + 1));
        total_seconds += m * 60 + ss;
    }

    if (n > 0) {
        total_seconds -= (n - 1) * c;
    }

    int hh = total_seconds / 3600;
    int mm = (total_seconds % 3600) / 60;
    int ss = total_seconds % 60;

    cout << setfill('0') << setw(2) << hh << ":"
         << setfill('0') << setw(2) << mm << ":"
         << setfill('0') << setw(2) << ss << "\n";

    return 0;
}