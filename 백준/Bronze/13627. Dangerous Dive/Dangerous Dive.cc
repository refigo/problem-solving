#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, R;
    if (cin >> N >> R) {
        vector<bool> returned(N + 1, false);
        for (int i = 0; i < R; ++i) {
            int id;
            cin >> id;
            returned[id] = true;
        }

        if (N == R) {
            cout << "*\n";
        } else {
            for (int i = 1; i <= N; ++i) {
                if (!returned[i]) {
                    cout << i << " ";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
