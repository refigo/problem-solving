#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        long long A, B;
        cin >> A >> B;
        
        long long ratio = A / B;
        long long result = ratio * ratio;
        
        cout << result << "\n";
    }
    
    return 0;
}