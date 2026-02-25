#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    double sum = 0.0;
    for (int i = 0; i < N; ++i) {
        double code;
        cin >> code;
        if (code == 0) {
            sum += 2.0;
        } else {
            sum += 1.0 / code;
        }
    }

    cout << fixed << setprecision(7) << sum << "\n";

    return 0;
}
