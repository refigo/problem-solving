#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<long long> lemons(n);
    for (int i = 0; i < n; ++i) {
        cin >> lemons[i];
    }
    
    long long max_lemons = 0;
    
    for (int i = 0; i < n; ++i) {
        long long remaining = lemons[i] - (n - i);
        if (remaining < 0) remaining = 0;
        max_lemons = max(max_lemons, remaining);
    }
    
    cout << max_lemons << "\n";
    
    return 0;
}