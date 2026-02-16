#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int E, N;
        cin >> E >> N;
        
        int empty_count = 0;
        for (int i = 0; i < N; ++i) {
            int attempts;
            cin >> attempts;
            if (attempts > E) {
                empty_count++;
            }
        }
        
        cout << empty_count << '\n';
    }
    
    return 0;
}