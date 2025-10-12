#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    if (!(cin >> N >> M)) return 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << (((i + j) % 2 == 0) ? '*' : '.');
        }
        cout << '\n';
    }
    return 0;
}