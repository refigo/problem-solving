#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int N, K, P;
    cin >> N >> K >> P;
    
    vector<int> breads(N * K);
    for (int i = 0; i < N * K; i++) {
        cin >> breads[i];
    }
    
    int sellable_bundles = 0;
    
    for (int i = 0; i < N; i++) {
        int no_cream_count = 0;
        
        for (int j = 0; j < K; j++) {
            int bread_index = i * K + j;
            if (breads[bread_index] == 0) {
                no_cream_count++;
            }
        }
        
        if (no_cream_count < P) {
            sellable_bundles++;
        }
    }
    
    cout << sellable_bundles << '\n';
    
    return 0;
}
