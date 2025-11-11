#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int W, N, P;
    if (!(cin >> W >> N >> P)) return 0;
    int cnt = 0;
    for (int i = 0; i < P; i++) {
        int h; cin >> h;
        if (W <= h && h <= N) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}