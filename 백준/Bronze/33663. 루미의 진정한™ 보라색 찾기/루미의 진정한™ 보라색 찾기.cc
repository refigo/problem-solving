#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double hlo, hhi, slo, shi, vlo, vhi;
    if (!(cin >> hlo >> hhi >> slo >> shi >> vlo >> vhi)) return 0;

    double r, g, b;
    if (!(cin >> r >> g >> b)) return 0;

    double mn = min({r, g, b});
    double mx = max({r, g, b});

    double v = mx;
    double s = 255.0 * (v - mn) / v;
    double h;

    if (v == r) {
        h = 60.0 * (g - b) / (v - mn);
    } else if (v == g) {
        h = 120.0 + 60.0 * (b - r) / (v - mn);
    } else {
        h = 240.0 + 60.0 * (r - g) / (v - mn);
    }

    if (h < 0.0) h += 360.0;

    double eps = 1e-9;
    if (h >= hlo - eps && h <= hhi + eps && 
        s >= slo - eps && s <= shi + eps && 
        v >= vlo - eps && v <= vhi + eps) {
        cout << "Lumi will like it.\n";
    } else {
        cout << "Lumi will not like it.\n";
    }

    return 0;
}
