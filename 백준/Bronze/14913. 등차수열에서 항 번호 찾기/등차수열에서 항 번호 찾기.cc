#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, d, k;
    cin >> a >> d >> k;
    
    if ((k - a) % d == 0) {
        long long n = (k - a) / d + 1;
        if (n > 0) {
            cout << n << endl;
        } else {
            cout << "X" << endl;
        }
    } else {
        cout << "X" << endl;
    }
    
    return 0;
}
