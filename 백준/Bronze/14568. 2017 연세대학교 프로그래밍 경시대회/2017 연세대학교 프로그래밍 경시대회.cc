#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    int count = 0;
    
    for (int A = 2; A <= N - 3; A += 2) {
        for (int B = 1; B <= (N - A) / 2 - 1; B++) {
            int C = N - A - B;
            
            if (C >= B + 2) {
                count++;
            }
        }
    }
    
    cout << count << "\n";
    
    return 0;
}