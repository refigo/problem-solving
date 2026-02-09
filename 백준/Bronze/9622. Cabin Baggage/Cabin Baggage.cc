#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    int allowed_count = 0;
    
    for (int i = 0; i < t; ++i) {
        double length, width, depth, weight;
        cin >> length >> width >> depth >> weight;
        
        bool size_ok = (length <= 56.0 && width <= 45.0 && depth <= 25.0) || 
                       (length + width + depth <= 125.0);
        bool weight_ok = weight <= 7.0;
        
        if (size_ok && weight_ok) {
            cout << 1 << '\n';
            allowed_count++;
        } else {
            cout << 0 << '\n';
        }
    }
    
    cout << allowed_count << '\n';
    
    return 0;
}