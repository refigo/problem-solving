#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;
    
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<int> lis(N, 1);
    
    vector<int> lds(N, 1);
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < i; j++) {
            if(A[j] < A[i] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
        }
    }
    
    for(int i = N-1; i >= 0; i--) {
        for(int j = N-1; j > i; j--) {
            if(A[j] < A[i] && lds[i] < lds[j] + 1) {
                lds[i] = lds[j] + 1;
            }
        }
    }
    
    int max_length = 0;
    for(int i = 0; i < N; i++) {
        max_length = max(max_length, lis[i] + lds[i] - 1);
    }
    
    cout << max_length << '\n';
    
    return 0;
}