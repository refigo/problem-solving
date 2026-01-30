#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        if (i % 15 == 0) {
            cout << "DeadMan\n";
        } else if (i % 3 == 0) {
            cout << "Dead\n";
        } else if (i % 5 == 0) {
            cout << "Man\n";
        } else {
            cout << i;
            if (i < n) cout << ' ';
        }
    }
    
    return 0;
}