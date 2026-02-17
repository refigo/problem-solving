#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, M;
    cin >> h >> M;
    
    for (int t = 1; t <= M; ++t) {
        __int128 t_sq = t * t;
        __int128 t_cubed = t_sq * t;
        __int128 t_quad = t_sq * t_sq;
        __int128 A = -6 * t_quad + h * t_cubed + 2 * t_sq + t;
        
        if (A <= 0) {
            cout << "The balloon first touches ground at hour: " << t << '\n';
            return 0;
        }
    }
    
    cout << "The balloon does not touch ground in the given time.\n";
    return 0;
}