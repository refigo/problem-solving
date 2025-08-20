#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;
        
        long long A, B;
        cin >> A >> B;
        
        // Read part information but we don't need to process it
        for (int i = 0; i < N; i++) {
            long long u, v;
            cin >> u >> v;
        }
        
        // Output the required messages
        cout << "Material Management " << t << "\n";
        cout << "Classification ---- End!\n";
    }
    
    return 0;
}