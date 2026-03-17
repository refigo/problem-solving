#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (cin >> s) {
        int count = 0;
        int n = s.length();
        for (int i = 0; i <= n - 4; ++i) {
            if (s[i] == 'k' && s[i+1] == 'i' && s[i+2] == 'c' && s[i+3] == 'k') {
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}
