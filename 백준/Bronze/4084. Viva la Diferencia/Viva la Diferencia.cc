#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    while (true) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if (a == 0 && b == 0 && c == 0 && d == 0) {
            break;
        }
        
        int count = 0;
        while (!(a == b && b == c && c == d)) {
            long long new_a = abs(a - b);
            long long new_b = abs(b - c);
            long long new_c = abs(c - d);
            long long new_d = abs(d - a);
            
            a = new_a;
            b = new_b;
            c = new_c;
            d = new_d;
            
            count++;
        }
        
        cout << count << "\n";
    }
    
    return 0;
}
