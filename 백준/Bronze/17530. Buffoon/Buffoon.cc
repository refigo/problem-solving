#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    int bestIdx = 1;
    int bestVotes;
    cin >> bestVotes;

    for (int i = 2; i <= N; i++) {
        int v; cin >> v;
        if (v > bestVotes) {
            bestVotes = v;
            bestIdx = i;
        }
    }

    cout << (bestIdx == 1 ? 'S' : 'N') << '\n';
    return 0;
}