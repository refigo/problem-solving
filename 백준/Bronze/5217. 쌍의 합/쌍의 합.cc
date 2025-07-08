#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        cout << "Pairs for " << n << ":";
        
        bool first_pair = true;
        for (int a = 1; a < n; a++) {
            int b = n - a;
            
            if (a < b) {
                if (first_pair) {
                    cout << " " << a << " " << b;
                    first_pair = false;
                } else {
                    cout << ", " << a << " " << b;
                }
            }
        }
        
        cout << "\n";
    }
    
    return 0;
}