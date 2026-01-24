#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;
    
    int groups = 0;
    char prev = '\0';
    
    for (int i = 0; i < N; ++i) {
        char c;
        cin >> c;
        if (c != prev) {
            groups++;
            prev = c;
        }
    }
    
    cout << groups + 1 << '\n';
    return 0;
}