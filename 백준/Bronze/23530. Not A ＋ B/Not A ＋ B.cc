#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int sum = a + b;
        int c;
        
        if (sum != 42) {
            c = 42;
        } else {
            c = 13;
        }
        
        cout << c << "\n";
    }
    
    return 0;
}