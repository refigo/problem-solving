#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int M;
    if (!(cin >> M)) return 0;
    double realMin;
    if (M <= 30) realMin = M / 2.0;
    else realMin = (3.0 * M - 60.0) / 2.0;
    cout.setf(ios::fixed);
    cout << setprecision(1) << realMin << '\n';
    return 0;
}