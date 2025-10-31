#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N; 
    if (!(cin >> N)) return 0;
    string name; 
    cin >> name;
    int K; 
    cin >> K;

    int targetParity = (name == "annyong") ? 1 : 0;

    if ((K & 1) == targetParity) {
        cout << K << '\n';
        return 0;
    }

    int down = (K > 1) ? K - 1 : -1;
    int up = (K < N) ? K + 1 : -1;

    if (down != -1 && (down & 1) == targetParity) {
        cout << down << '\n';
        return 0;
    }
    if (up != -1 && (up & 1) == targetParity) {
        cout << up << '\n';
        return 0;
    }

    int best = -1;
    for (int d = 1; d <= N; d++) {
        if (K - d >= 1 && ((K - d) & 1) == targetParity) { best = K - d; break; }
        if (K + d <= N && ((K + d) & 1) == targetParity) { best = K + d; break; }
    }
    if (best == -1) best = K;
    cout << best << '\n';
    return 0;
}