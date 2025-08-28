#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N; 
    int k;
    if (!(cin >> N)) return 0;
    cin >> k;

    long long sum = 0;
    long long term = N;
    for (int i = 0; i <= k; i++) {
        sum += term;
        term *= 10;
    }

    cout << sum << '\n';
    return 0;
}