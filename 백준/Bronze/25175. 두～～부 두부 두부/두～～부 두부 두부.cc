#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N, M, K;
    cin >> N >> M >> K;

    long long offset = K - 3;
    long long idx0 = (M - 1 + (offset % N) + N) % N;
    cout << (idx0 + 1) << '\n';
    return 0;
}