#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    if(!(cin >> N)) return 0;
    long long score = 0;
    while (N != 1){
        if (N % 2) N = 3*N + 1;
        else N /= 2;
        ++score;
    }
    cout << score << '\n';
    return 0;
}