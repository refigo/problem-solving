#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> odd, even;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        if (num % 2 == 1) {
            odd.push_back(num);
        } else {
            even.push_back(num);
        }
    }
    
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    
    int oddNeeded = (n + 1) / 2;
    int evenNeeded = n / 2;
    
    if (odd.size() >= oddNeeded && even.size() >= evenNeeded) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }
    
    return 0;
}