#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if(!(cin >> T)) return 0;
    long long accA = 0, accB = 0, accC = 0;
    for (int day = 0; day < T; ++day) {
        long long a, b, c;
        cin >> a >> b >> c;
        accA += a; accB += b; accC += c;
        long long k = min(accA, min(accB, accC));
        if (k >= 30) {
            cout << k << '\n';
            accA -= k; accB -= k; accC -= k;
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}