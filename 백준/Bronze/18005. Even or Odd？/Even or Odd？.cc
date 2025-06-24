#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    
    if (n % 2 == 1) {
        cout << "0" << '\n';
    } else if (n % 4 == 2) {
        cout << "1" << '\n';
    } else {
        cout << "2" << '\n';
    }
    
    return 0;
}
