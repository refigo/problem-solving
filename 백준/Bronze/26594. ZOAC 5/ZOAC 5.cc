#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = 1;
    for (size_t i = 1; i < s.size(); i++) {
        if (s[i] == s[0]) n++; else break;
    }

    cout << n << '\n';
    return 0;
}