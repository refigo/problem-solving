#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int m = 2;
    while (true) {
        vector<int> count(m, 0);
        for (int num : a) {
            count[num % m]++;
        }
        
        int max_count = *max_element(count.begin(), count.end());
        if (2 * max_count >= n) {
            int k = max_element(count.begin(), count.end()) - count.begin();
            cout << m << " " << k << '\n';
            return 0;
        }
        m++;
    }
    
    return 0;
}