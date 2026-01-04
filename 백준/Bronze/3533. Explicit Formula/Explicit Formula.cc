#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int z = 0;
    for (int i = 0; i < 10; ++i) {
        int x; cin >> x; if (!cin) return 0; if (x == 0) ++z;
    }
    cout << (z % 4 == 2 ? 0 : 1) << '\n';
    return 0;
}