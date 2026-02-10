#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> picked(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> picked[i];
    }
    
    vector<int> recipient(n + 1);
    for (int i = 1; i <= n; ++i) {
        recipient[picked[i]] = i;
    }
    
    for (int i = 1; i <= n; ++i) {
        cout << recipient[i] << '\n';
    }
    
    return 0;
}