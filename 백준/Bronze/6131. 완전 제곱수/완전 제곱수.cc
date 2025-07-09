#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    int count = 0;
    
    for (int i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            int factor1 = i;
            int factor2 = N / i;
            
            if ((factor2 + factor1) % 2 == 0) {
                int A = (factor2 + factor1) / 2;
                int B = (factor2 - factor1) / 2;
                
                if (1 <= B && B <= A && A <= 500) {
                    count++;
                }
            }
        }
    }
    
    cout << count << "\n";
    
    return 0;
}