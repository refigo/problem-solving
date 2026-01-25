#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;
    
    int total = 0;
    for (int i = 0; i < N; ++i) {
        int H, B, K;
        cin >> H >> B >> K;
        int need = max(0, B - H);
        total += need * K;
    }
    
    cout << total << '\n';
    return 0;
}