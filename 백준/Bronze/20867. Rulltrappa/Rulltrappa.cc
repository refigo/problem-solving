#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int M, S, G;
    if (!(cin >> M >> S >> G)) return 0;
    double A, B;
    cin >> A >> B;
    int L, R;
    cin >> L >> R;

    double leftTime = L / A + (double)M / G;
    double rightTime = R / B + (double)M / S;

    cout << (leftTime < rightTime ? "friskus" : "latmask") << '\n';
    return 0;
}