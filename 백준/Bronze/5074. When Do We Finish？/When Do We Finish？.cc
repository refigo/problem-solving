#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, d;
    while (cin >> s >> d) {
        if (s == "00:00" && d == "00:00") break;
        int sh = stoi(s.substr(0, 2));
        int sm = stoi(s.substr(3, 2));
        int dh = stoi(d.substr(0, 2));
        int dm = stoi(d.substr(3, 2));
        long long total = (long long)sh * 60 + sm + (long long)dh * 60 + dm;
        long long days = total / (24 * 60);
        int rem = (int)(total % (24 * 60));
        int eh = rem / 60;
        int em = rem % 60;
        cout << setw(2) << setfill('0') << eh << ':' << setw(2) << setfill('0') << em;
        if (days > 0) cout << ' ' << '+' << days;
        cout << '\n';
    }
    return 0;
}