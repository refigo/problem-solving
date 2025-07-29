#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string line(5 * n, '@');
        cout << line << "\n";
    }
    
    for (int i = 0; i < n; i++) {
        string line(n, '@');
        cout << line << "\n";
    }
    
    for (int i = 0; i < n; i++) {
        string line(5 * n, '@');
        cout << line << "\n";
    }
    
    for (int i = 0; i < 2 * n; i++) {
        string line(n, '@');
        cout << line << "\n";
    }
    
    return 0;
}