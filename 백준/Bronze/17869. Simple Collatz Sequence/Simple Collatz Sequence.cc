#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long n;
    if (!(cin >> n)) return 0;

    unsigned long long steps = 0;
    while (n != 1) {
        if ((n & 1ULL) == 0ULL) n >>= 1;
        else n += 1ULL;
        steps++;
    }
    cout << steps << '\n';
    return 0;
}