#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    double K;
    cin >> K;
    
    double D1, D2;
    cin >> D1 >> D2;
    
    double height_squared = K*K - pow((D1-D2)/2, 2);
    
    cout << fixed << setprecision(10) << height_squared << '\n';
    
    return 0;
}