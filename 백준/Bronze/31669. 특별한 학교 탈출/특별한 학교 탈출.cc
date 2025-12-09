#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    if(!(cin >> N >> M)) return 0;
    vector<string> v(N);
    for(int i = 0; i < N; ++i) cin >> v[i];
    for(int c = 0; c < M; ++c){
        bool ok = true;
        for(int r = 0; r < N; ++r){
            if (v[r][c] == 'O') { ok = false; break; }
        }
        if (ok){
            cout << (c+1) << '\n';
            return 0;
        }
    }
    cout << "ESCAPE FAILED\n";
    return 0;
}