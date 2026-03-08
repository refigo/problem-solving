#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (cin >> s) {
        int w[] = {2, 7, 6, 5, 4, 3, 2};
        const char result_chars[] = "JABCDEFGHIZ";
        
        int sum = 0;
        for (int i = 0; i < 7; ++i) {
            sum += (s[i] - '0') * w[i];
        }
        
        cout << result_chars[sum % 11] << "\n";
    }

    return 0;
}
