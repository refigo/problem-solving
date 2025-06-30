#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;
    cout.precision(6);
    
    int R;
    cin >> R;
    
    double euclidean_area = M_PI * R * R;
    double taxicab_area = 2.0 * R * R;
    
    cout << euclidean_area << '\n';
    cout << taxicab_area << '\n';
    
    return 0;
}