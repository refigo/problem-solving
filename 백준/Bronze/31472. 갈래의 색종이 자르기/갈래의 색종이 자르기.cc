#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int W;
    cin >> W;
    
    int s = sqrt(2 * W);
    
    int perimeter = 4 * s;
    
    cout << perimeter << "\n";
    
    return 0;
}