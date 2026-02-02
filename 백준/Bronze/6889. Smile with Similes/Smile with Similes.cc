#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    cin.ignore();
    
    vector<string> adjectives(n);
    vector<string> nouns(m);
    
    for (int i = 0; i < n; ++i) {
        getline(cin, adjectives[i]);
    }
    
    for (int i = 0; i < m; ++i) {
        getline(cin, nouns[i]);
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << adjectives[i] << " as " << nouns[j] << '\n';
        }
    }
    
    return 0;
}