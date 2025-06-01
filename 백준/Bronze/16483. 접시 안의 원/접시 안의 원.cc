#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    
    double result = pow(T, 2) / 4.0;
    
    int rounded_result = round(result);
    
    cout << rounded_result << '\n';
    
    return 0;
}