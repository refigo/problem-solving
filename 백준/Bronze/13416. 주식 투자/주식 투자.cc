#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        long long total_profit = 0;
        
        for (int i = 0; i < N; i++) {
            int A, B, C;
            cin >> A >> B >> C;
            
            int max_profit = max({0, A, B, C});
            total_profit += max_profit;
        }
        
        cout << total_profit << '\n';
    }
    
    return 0;
}