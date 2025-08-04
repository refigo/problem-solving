#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x;
    cin >> n >> x;
    
    vector<int> t(n);
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }
    
    if (t[0] < x) {
        cout << 1 << "\n";
        return 0;
    }
    
    int current_voice = x;
    int current_person = 0;
    
    while (true) {
        current_person = (current_person + 1) % n;
        current_voice++;
        
        if (t[current_person] < current_voice) {
            cout << current_person + 1 << "\n";
            break;
        }
    }
    
    return 0;
}