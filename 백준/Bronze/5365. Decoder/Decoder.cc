#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    string prev_word;
    for (int i = 0; i < n; ++i) {
        string current_word;
        cin >> current_word;

        if (i == 0) {
            cout << current_word[0];
        } else {
            int L = prev_word.length();
            int M = current_word.length();
            
            if (L > M) {
                cout << ' ';
            } else {
                cout << current_word[L - 1];
            }
        }
        prev_word = current_word;
    }
    cout << "\n";

    return 0;
}
