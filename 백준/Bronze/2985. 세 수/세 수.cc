#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c;
    cin >> a >> b >> c;
    
    // Case 1: a + b = c
    if (a + b == c) {
        cout << a << "+" << b << "=" << c << "\n";
        return 0;
    }
    
    // Case 2: a - b = c
    if (a - b == c) {
        cout << a << "-" << b << "=" << c << "\n";
        return 0;
    }
    
    // Case 3: a * b = c
    if (a * b == c) {
        cout << a << "*" << b << "=" << c << "\n";
        return 0;
    }
    
    // Case 4: a / b = c
    if (b != 0 && a % b == 0 && a / b == c) {
        cout << a << "/" << b << "=" << c << "\n";
        return 0;
    }
    
    // Case 5: a = b + c
    if (a == b + c) {
        cout << a << "=" << b << "+" << c << "\n";
        return 0;
    }
    
    // Case 6: a = b - c
    if (a == b - c) {
        cout << a << "=" << b << "-" << c << "\n";
        return 0;
    }
    
    // Case 7: a = b * c
    if (a == b * c) {
        cout << a << "=" << b << "*" << c << "\n";
        return 0;
    }
    
    // Case 8: a = b / c
    if (c != 0 && b % c == 0 && a == b / c) {
        cout << a << "=" << b << "/" << c << "\n";
        return 0;
    }
    
    return 0;
}