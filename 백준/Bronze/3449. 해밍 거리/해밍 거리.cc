#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        string binary1, binary2;
        cin >> binary1 >> binary2;
        
        int hammingDistance = 0;
        
        for (size_t i = 0; i < binary1.length(); ++i) {
            if (binary1[i] != binary2[i]) {
                hammingDistance++;
            }
        }
        
        cout << "Hamming distance is " << hammingDistance << ".\n";
    }
    
    return 0;
}