#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string x, y;
    if (!(cin >> x >> y)) return 0;
    auto hasLetter = [](const string& s) {
        for (char c : s) if (isalpha(static_cast<unsigned char>(c))) return true;
        return false;
    };
    if (hasLetter(x) || hasLetter(y)) {
        cout << "NaN\n";
        return 0;
    }
    long long a = 0, b = 0;
    for (char c : x) a = a * 10 + (c - '0');
    for (char c : y) b = b * 10 + (c - '0');
    cout << (a - b) << '\n';
    return 0;
}