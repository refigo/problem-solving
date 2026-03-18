#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double w, h, r;
    if (cin >> w >> h >> r) {
        double total_area = w * h;
        double visible_area = (acos(-1.0) * r * r) / 4.0;
        double safe_area = total_area - visible_area;

        cout << fixed << setprecision(2) << safe_area << "\n";
    }

    return 0;
}
