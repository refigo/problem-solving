#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    while (cin >> n) {
        if (n == 0) break;
        long long net;
        if (n <= 1000000) net = n;
        else if (n <= 5000000) net = n * 9 / 10;
        else net = n * 8 / 10;
        cout << net << '\n';
    }
    return 0;
}