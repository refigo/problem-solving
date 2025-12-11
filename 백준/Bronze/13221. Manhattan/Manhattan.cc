#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x0, y0; 
    if(!(cin >> x0 >> y0)) return 0;
    int N; 
    cin >> N;
    long long bestd = LLONG_MAX, bx = 0, by = 0;
    for(int i = 0; i < N; ++i){
        long long x, y; 
        cin >> x >> y;
        long long d = llabs(x - x0) + llabs(y - y0);
        if (d < bestd){ bestd = d; bx = x; by = y; }
    }
    cout << bx << ' ' << by << '\n';
    return 0;
}