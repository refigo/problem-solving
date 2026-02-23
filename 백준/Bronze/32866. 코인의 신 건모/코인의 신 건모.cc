#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double N, X;
    if (!(cin >> N >> X)) return 0;

    double result = (100.0 * X) / (100.0 - X);

    cout << fixed << setprecision(10) << result << endl;

    return 0;
}
