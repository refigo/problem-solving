#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if(!(cin >> N)) return 0;
    long long minY = 0, maxY = 0;
    for (int i = 0; i < N; ++i) {
        long long x, y;
        cin >> x >> y;
        if (i == 0) { minY = maxY = y; }
        else {
            if (y < minY) minY = y;
            if (y > maxY) maxY = y;
        }
    }
    cout << (maxY - minY) << '\n';
    return 0;
}