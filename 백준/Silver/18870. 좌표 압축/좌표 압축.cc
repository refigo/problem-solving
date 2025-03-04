#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> sorted = arr;
    sort(sorted.begin(), sorted.end());
    sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
    
    for (int i = 0; i < n; i++) {
        cout << lower_bound(sorted.begin(), sorted.end(), arr[i]) - sorted.begin();
        if (i < n-1) cout << ' ';
    }
    cout << '\n';
    
    return 0;
}