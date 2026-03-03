#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    if (!(cin >> N >> K)) return 0;

    string s;
    cin >> s;

    int current_zero_streak = 0;
    for (int i = 0; i < N; ++i) {
        if (s[i] == '0') {
            current_zero_streak++;
            if (current_zero_streak >= K) {
                cout << 0 << "\n";
                return 0;
            }
        } else {
            current_zero_streak = 0;
        }
    }

    cout << 1 << "\n";

    return 0;
}
