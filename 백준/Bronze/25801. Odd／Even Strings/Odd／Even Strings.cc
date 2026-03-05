#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (cin >> s) {
        vector<int> count(26, 0);
        for (char c : s) {
            count[c - 'a']++;
        }

        bool has_odd = false;
        bool has_even = false;

        for (int i = 0; i < 26; ++i) {
            if (count[i] > 0) {
                if (count[i] % 2 == 0) {
                    has_even = true;
                } else {
                    has_odd = true;
                }
            }
        }

        if (has_odd && has_even) {
            cout << "0/1\n";
        } else if (has_odd) {
            cout << "1\n";
        } else {
            cout << "0\n";
        }
    }

    return 0;
}