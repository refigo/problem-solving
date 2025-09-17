#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    double V = 0.0;
    cout.setf(ios::fixed);
    cout << setprecision(10);
    for (int i = 0; i < N; i++) {
        int A; cin >> A;
        double a = A / 100.0;
        V = 1.0 - (1.0 - V) * (1.0 - a);
        cout << (V * 100.0) << '\n';
    }
    return 0;
}