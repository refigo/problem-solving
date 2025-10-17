#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int h;
    if (!(cin >> h)) return 0;
    if (h == 0) {
        cout << 1 << '\n';
    } else if (h == 1) {
        cout << 0 << '\n';
    } else if (h % 2 == 0) {
        string s(h / 2, '8');
        cout << s << '\n';
    } else {
        string s;
        s.push_back('4');
        s.append((h - 1) / 2, '8');
        cout << s << '\n';
    }
    return 0;
}