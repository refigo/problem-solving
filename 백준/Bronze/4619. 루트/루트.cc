#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int B, N;
    
    while (true) {
        cin >> B >> N;
        
        if (B == 0 && N == 0) {
            break;
        }
        
        double root = pow(B, 1.0 / N);
        
        int A1 = floor(root);
        int A2 = ceil(root);
        
        if (abs(pow(A1, N) - B) <= abs(pow(A2, N) - B)) {
            cout << A1 << '\n';
        } else {
            cout << A2 << '\n';
        }
    }
    
    return 0;
}