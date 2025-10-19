#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;
    int n = (int)s.size();
    for (int i = 0; i < n; i++) {
        cout << s[i];
        int rem = n - i - 1;
        if (rem > 0 && rem % 3 == 0) cout << ',';
    }
    cout << '\n';
    return 0;
}