#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    if (N % 2 != 0) {
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
    }

    return 0;
}
