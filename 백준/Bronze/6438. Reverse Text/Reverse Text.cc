#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    if(!(cin >> T)) return 0;
    string line; 
    getline(cin, line);
    for(int i = 0; i < T; ++i){
        getline(cin, line);
        string r = line;
        reverse(r.begin(), r.end());
        cout << r << '\n';
    }
    return 0;
}