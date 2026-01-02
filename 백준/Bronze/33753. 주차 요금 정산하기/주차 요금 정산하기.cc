#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long A, B, C;
    if(!(cin >> A >> B >> C)) return 0;
    long long T;
    cin >> T;
    if (T <= 30) {
        cout << A << '\n';
    } else {
        long long extra = T - 30;
        long long units = (extra + B - 1) / B;
        cout << (A + units * C) << '\n';
    }
    return 0;
}