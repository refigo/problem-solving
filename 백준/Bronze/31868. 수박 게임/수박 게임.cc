#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N, K;
    if (!(cin >> N >> K)) return 0;
    long long denom = 1LL << (N - 1);
    cout << (K / denom) << '\n';
    return 0;
}