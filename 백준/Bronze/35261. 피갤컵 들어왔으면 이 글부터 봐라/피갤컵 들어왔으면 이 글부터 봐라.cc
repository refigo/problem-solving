#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    string S;
    cin >> S;

    string target = "eagle";
    int min_diff = 100;

    for (int i = 0; i <= N - 5; ++i) {
        int diff = 0;
        for (int j = 0; j < 5; ++j) {
            if (S[i + j] != target[j]) {
                diff++;
            }
        }
        min_diff = min(min_diff, diff);
    }

    cout << min_diff << "\n";

    return 0;
}