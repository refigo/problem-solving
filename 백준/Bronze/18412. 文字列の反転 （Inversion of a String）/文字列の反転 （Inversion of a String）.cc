#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, A, B;
    cin >> N >> A >> B;
    
    string S;
    cin >> S;
    
    reverse(S.begin() + A - 1, S.begin() + B);
    
    cout << S << '\n';
    
    return 0;
}