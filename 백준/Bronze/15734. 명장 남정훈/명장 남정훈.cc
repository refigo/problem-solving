#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int L, R, A;
    cin >> L >> R >> A;
    
    int maxPlayers = 0;
    
    if (L < R) {
        int diff = min(R - L, A);
        L += diff;
        A -= diff;
    } else if (R < L) {
        int diff = min(L - R, A);
        R += diff;
        A -= diff;
    }
    
    int total = L + R + A;
    int pairs = min(L, R);
    
    pairs += A / 2;
    
    maxPlayers = pairs * 2;
    
    cout << maxPlayers << '\n';
    
    return 0;
}