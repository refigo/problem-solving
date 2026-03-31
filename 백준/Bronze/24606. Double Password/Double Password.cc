#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    if (cin >> s1 >> s2) {
        int count = 1;
        for (int i = 0; i < 4; ++i) {
            if (s1[i] != s2[i]) {
                count *= 2;
            }
        }
        cout << count << "\n";
    }

    return 0;
}
