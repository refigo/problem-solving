#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    if (!(cin >> Q)) return 0;
    int stock = 0;
    for (int i = 0; i < Q; ++i) {
        int t, v;
        cin >> t >> v;
        if (t == 1) {
            stock += v;
        } else {
            if (stock < v) {
                cout << "Adios\n";
                return 0;
            }
            stock -= v;
        }
    }
    cout << "See you next month\n";
    return 0;
}