#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> b(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    
    int moves = 0;
    
    for (int i = 0; i < n; ++i) {
        if (b[i] > a[i]) {
            moves += b[i] - a[i];
        }
    }
    
    cout << moves << "\n";
    
    return 0;
}