#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    
    int total = 1;
    int current = 1;
    
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] > s[i-1]) {
            current++;
        } else {
            current = 1;
        }
        total += current;
    }
    
    cout << total << '\n';
    return 0;
}