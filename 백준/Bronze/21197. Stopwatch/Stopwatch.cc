#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (cin >> N) {
        vector<int> t(N);
        for (int i = 0; i < N; ++i) {
            cin >> t[i];
        }

        if (N % 2 != 0) {
            cout << "still running\n";
        } else {
            int total_time = 0;
            for (int i = 0; i < N; i += 2) {
                total_time += t[i+1] - t[i];
            }
            cout << total_time << "\n";
        }
    }

    return 0;
}
