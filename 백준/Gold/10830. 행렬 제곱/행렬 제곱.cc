#include <bits/stdc++.h>
using namespace std;
#define MOD 1000

typedef vector<vector<long long>> matrix;

matrix multiply(const matrix& A, const matrix& B) {
    int n = A.size();
    matrix C(n, vector<long long>(n, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
            }
        }
    }
    
    return C;
}

matrix power(matrix A, long long B) {
    int n = A.size();
    matrix result(n, vector<long long>(n, 0));
    
    for (int i = 0; i < n; i++) {
        result[i][i] = 1;
    }
    
    while (B > 0) {
        if (B % 2 == 1) {
            result = multiply(result, A);
        }
        A = multiply(A, A);
        B /= 2;
    }
    
    return result;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    long long B;
    cin >> N >> B;
    
    matrix A(N, vector<long long>(N));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    
    matrix result = power(A, B);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << result[i][j] << (j == N-1 ? '\n' : ' ');
        }
    }
    
    return 0;
}