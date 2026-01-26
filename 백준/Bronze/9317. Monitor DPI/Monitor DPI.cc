#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double D;
    int RH, RV;
    
    while (cin >> D >> RH >> RV) {
        if (D == 0 && RH == 0 && RV == 0) break;
        
        double W = 16.0 * D / sqrt(337.0);
        double H = 9.0 * D / sqrt(337.0);
        
        double DPI_H = RH / W;
        double DPI_V = RV / H;
        
        cout << fixed << setprecision(2);
        cout << "Horizontal DPI: " << DPI_H << '\n';
        cout << "Vertical DPI: " << DPI_V << '\n';
    }
    
    return 0;
}