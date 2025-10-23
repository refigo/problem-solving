#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int x){
    if (x < 2) return false;
    if (x % 2 == 0) return x == 2;
    for (int d = 3; d * d <= x; d += 2) if (x % d == 0) return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N; 
    if (!(cin >> N)) return 0;
    vector<int> A(N);
    for (int i = 0; i < N - 1; i++) A[i] = i + 1;
    int v = N;
    while (!isPrime(v)) v++;
    A[N - 1] = v;

    cout << N << '\n';
    for (int i = 0; i < N; i++){
        if (i) cout << ' ';
        cout << A[i];
    }
    cout << '\n';
    return 0;
}