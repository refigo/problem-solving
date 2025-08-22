#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long L;
    cin >> L;
    
    double area = L * L * sqrt(3) / 4.0;
    
    cout << fixed << setprecision(15) << area << "\n";
    
    return 0;
}