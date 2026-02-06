#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> positions;
    int pos = 0;
    
    while (n > 0) {
        if (n & 1) {
            positions.push_back(pos);
        }
        n >>= 1;
        pos++;
    }
    
    for (int i = 0; i < positions.size(); ++i) {
        if (i > 0) cout << ' ';
        cout << positions[i];
    }
    cout << '\n';
    
    return 0;
}