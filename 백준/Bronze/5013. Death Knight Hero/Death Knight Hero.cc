#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    if(!(cin >> n)) return 0;
    int wins = 0;
    for(int i = 0; i < n; ++i){
        string s; 
        cin >> s;
        if (s.find("CD") == string::npos) ++wins;
    }
    cout << wins << '\n';
    return 0;
}