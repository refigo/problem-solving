#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long v[4];
    if (cin >> v[0] >> v[1] >> v[2] >> v[3]) {
        sort(v, v + 4);
        cout << v[0] << " " << v[2] << " " << v[1] << " " << v[3] << "\n";
    }

    return 0;
}
