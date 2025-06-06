#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N, M;
        cin >> N >> M;
        
        const int L_ROW = 12;
        const int SEAT_NUMBER = 4;
        
        if (N < L_ROW || M < SEAT_NUMBER) {
            cout << -1 << '\n';
            continue;
        }
        
        int seatNumber = (L_ROW - 1) * M + SEAT_NUMBER;
        
        cout << seatNumber << '\n';
    }
    
    return 0;
}