#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; 
    if (!(cin >> N)) return 0;
    for (int i = 0; i < N; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        int s = a + b + c;
        if (s == 180) cout << a << ' ' << b << ' ' << c << " Seems OK\n";
        else cout << a << ' ' << b << ' ' << c << " Check\n";
    }
    return 0;
}