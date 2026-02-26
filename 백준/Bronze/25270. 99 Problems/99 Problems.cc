#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    int low = (N / 100) * 100 - 1;
    int high = (N / 100) * 100 + 99;

    if (low <= 0) {
        cout << high << "\n";
    } else {
        if (N - low >= high - N) {
            cout << high << "\n";
        } else {
            cout << low << "\n";
        }
    }

    return 0;
}
