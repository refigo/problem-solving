#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    long long N;
    if (!(cin >> s)) return 0;
    cin >> N;

    int yyyy = stoi(s.substr(0, 4));
    int mm = stoi(s.substr(5, 2));
    int dd = stoi(s.substr(8, 2));

    long long total = 1LL * yyyy * 360 + 1LL * (mm - 1) * 30 + (dd - 1);
    total += N;

    long long ny = total / 360;
    long long rem = total % 360;
    int nm = int(rem / 30) + 1;
    int nd = int(rem % 30) + 1;

    cout << ny << '-' << setw(2) << setfill('0') << nm << '-' << setw(2) << setfill('0') << nd << '\n';
    return 0;
}