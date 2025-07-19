#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long A, B;
    cin >> A >> B;
    
    long long q = A / B;
    long long r = A % B;
    
    if (r < 0) {
        if (B > 0) {
            q--;
            r += B;
        } else {
            q++;
            r -= B;
        }
    }
    
    cout << q << "\n" << r << "\n";
    
    return 0;
}