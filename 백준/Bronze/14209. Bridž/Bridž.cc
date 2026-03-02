#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    long long total = 0;
    for (int i = 0; i < N; ++i) {
        string cards;
        cin >> cards;
        for (char c : cards) {
            if (c == 'A') {
                total += 4;
            } else if (c == 'K') {
                total += 3;
            } else if (c == 'Q') {
                total += 2;
            } else if (c == 'J') {
                total += 1;
            }
        }
    }

    cout << total << "\n";

    return 0;
}
