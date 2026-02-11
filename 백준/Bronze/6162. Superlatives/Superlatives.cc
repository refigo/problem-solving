#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int K;
    cin >> K;
    
    for (int ds = 1; ds <= K; ++ds) {
        long long E, A;
        cin >> E >> A;
        
        cout << "Data Set " << ds << ":\n";
        
        if (E <= A) {
            cout << "no drought\n";
        } else {
            double ratio = (double)E / (double)A;
            
            if (ratio <= 5.0) {
                cout << "drought\n";
            } else {
                int mega_count = 0;
                double threshold = 5.0;
                
                while (ratio > threshold) {
                    mega_count++;
                    threshold *= 5.0;
                }
                
                for (int i = 0; i < mega_count; ++i) {
                    cout << "mega ";
                }
                cout << "drought\n";
            }
        }
        
        cout << "\n";
    }
    
    return 0;
}