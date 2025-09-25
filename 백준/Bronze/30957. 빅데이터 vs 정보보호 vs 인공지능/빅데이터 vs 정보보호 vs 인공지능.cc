#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    string s;
    cin >> s;

    int cB = 0, cS = 0, cA = 0;
    for (char ch : s) {
        if (ch == 'B') cB++;
        else if (ch == 'S') cS++;
        else if (ch == 'A') cA++;
    }

    if (cB == cS && cS == cA) {
        cout << "SCU\n";
        return 0;
    }

    int m = cB;
    if (cS > m) m = cS;
    if (cA > m) m = cA;

    string out;
    if (cB == m) out += 'B';
    if (cS == m) out += 'S';
    if (cA == m) out += 'A';

    cout << out << '\n';
    return 0;
}