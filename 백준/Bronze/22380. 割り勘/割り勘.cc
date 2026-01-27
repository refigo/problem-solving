#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    while (cin >> N >> M) {
        if (N == 0 && M == 0) break;
        
        int per_person = M / N;
        int total = 0;
        
        for (int i = 0; i < N; ++i) {
            int A;
            cin >> A;
            total += min(A, per_person);
        }
        
        cout << total << '\n';
    }
    
    return 0;
}