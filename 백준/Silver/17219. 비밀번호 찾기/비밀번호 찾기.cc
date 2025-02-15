#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n, m;
    unordered_map<string, string> passwords;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        string site, password;
        cin >> site >> password;
        passwords[site] = password;
    }
    
    for (int i = 0; i < m; i++) {
        string site;
        cin >> site;
            cout << passwords[site] << '\n';
    }
    
    return 0;
}