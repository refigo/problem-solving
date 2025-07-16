#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int d, n, s, p;
        cin >> d >> n >> s >> p;
        
        long long serial_time = (long long)n * s;
        long long parallel_time = d + (long long)n * p;
        
        if (serial_time < parallel_time) {
            cout << "do not parallelize\n";
        } else if (serial_time > parallel_time) {
            cout << "parallelize\n";
        } else {
            cout << "does not matter\n";
        }
    }
    
    return 0;
}