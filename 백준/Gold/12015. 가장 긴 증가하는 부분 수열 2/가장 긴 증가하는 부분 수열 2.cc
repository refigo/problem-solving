#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> dp;
    dp.push_back(arr[0]);
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > dp.back()) {
            dp.push_back(arr[i]);
        }
        else {
            auto it = lower_bound(dp.begin(), dp.end(), arr[i]);
            *it = arr[i];
        }
    }
    
    cout << dp.size() << '\n';
    
    return 0;
}