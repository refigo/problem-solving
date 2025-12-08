#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if(!(cin >> s)) return 0;
    string ok = "IOSHZXN";
    for(char c : s){
        if (ok.find(c) == string::npos){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}