#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    int T[5][5] = {
        {1,0,0,0,1},
        {1,0,0,1,0},
        {1,1,1,0,0},
        {1,0,0,1,0},
        {1,0,0,0,1}
    };

    for (int r = 0; r < 5; r++) {
        int last = 4;
        while (last >= 0 && T[r][last] == 0) last--;
        for (int rr = 0; rr < N; rr++) {
            for (int c = 0; c <= last; c++) {
                if (T[r][c]) for (int k = 0; k < N; k++) cout << '@';
                else for (int k = 0; k < N; k++) cout << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}