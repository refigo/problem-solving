#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long T, H;
    while (cin >> T >> H){
        if (T == 0 && H == 0) break;
        long long r = T - H;
        if (r < 0) r = 0;
        if (r % 2 == 0){
            cout << (r/2) << ' ' << 0 << '\n';
        } else {
            if (r >= 3) cout << ((r-3)/2) << ' ' << 1 << '\n';
            else cout << 0 << ' ' << 0 << '\n';
        }
    }
    return 0;
}