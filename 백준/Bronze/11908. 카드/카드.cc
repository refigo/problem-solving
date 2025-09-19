#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
    long long sum = 0;
    int mx = -1;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        sum += x;
        if (x > mx) mx = x;
    }
    cout << (sum - mx) << '\n';
    return 0;
}