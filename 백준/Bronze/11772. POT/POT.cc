#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    long long result = 0;
    
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        
        int power = p % 10;
        int base = p / 10;
        
        result += pow(base, power);
    }
    
    cout << result << "\n";
    
    return 0;
}