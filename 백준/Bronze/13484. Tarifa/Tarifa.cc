#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long X, N;
    if (!(cin >> X)) return 0;
    cin >> N;
    long long used = 0;
    for (int i = 0; i < N; i++) {
        long long p; cin >> p; used += p;
    }
    cout << X * (N + 1) - used << '\n';
    return 0;
}