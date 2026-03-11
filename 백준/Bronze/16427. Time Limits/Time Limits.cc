#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;
    while (cin >> n >> s) {
        int max_m = 0;
        for (int i = 0; i < n; ++i) {
            int m;
            cin >> m;
            if (m > max_m) max_m = m;
        }

        long long total_ms = (long long)max_m * s;
        long long result_s = (total_ms + 999) / 1000;

        cout << result_s << "\n";
    }

    return 0;
}
