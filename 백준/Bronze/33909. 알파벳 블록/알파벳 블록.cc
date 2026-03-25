#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long s, c, o, n;
    if (cin >> s >> c >> o >> n) {
        long long sn_count = (s + n) / 3;
        long long co_count = (c + o * 2) / 6;

        cout << min(sn_count, co_count) << "\n";
    }

    return 0;
}
