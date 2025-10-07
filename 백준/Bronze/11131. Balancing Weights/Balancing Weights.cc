#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T; 
    if (!(cin >> T)) return 0;
    while (T--) {
        int N; cin >> N;
        long long sum = 0;
        for (int i = 0; i < N; i++) {
            long long w; cin >> w;
            sum += w;
        }
        if (sum < 0) cout << "Left\n";
        else if (sum > 0) cout << "Right\n";
        else cout << "Equilibrium\n";
    }
    return 0;
}