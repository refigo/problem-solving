#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    if (n == 1) {
        cout << 1 << "\n";
        return 0;
    }

    vector<int> lineup(n);
    lineup[0] = 1;

    for (int i = 2; i <= n; ++i) {
        int d;
        cin >> d;
        lineup[d + 1] = i;
    }

    for (int i = 0; i < n; ++i) {
        cout << lineup[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
