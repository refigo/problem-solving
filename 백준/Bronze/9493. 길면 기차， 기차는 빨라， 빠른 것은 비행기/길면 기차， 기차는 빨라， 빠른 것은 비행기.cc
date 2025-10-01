#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long M, A, B;
    while (cin >> M >> A >> B) {
        if (M == 0 && A == 0 && B == 0) break;
        long long num = M * 3600LL * (B - A);
        long long den = A * B;
        long long secs = (num + den / 2) / den;
        long long h = secs / 3600;
        secs %= 3600;
        long long m = secs / 60;
        long long s = secs % 60;
        cout << h << ':' << setw(2) << setfill('0') << m << ':' << setw(2) << setfill('0') << s << '\n';
        cout << setfill(' ');
    }
    return 0;
}