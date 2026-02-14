#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int p, s;
    int hole_num = 1;
    
    while (cin >> p >> s) {
        if (p == 0) break;
        
        cout << "Hole #" << hole_num << '\n';
        
        if (s == 1) {
            cout << "Hole-in-one." << '\n';
        } else {
            int diff = s - p;
            if (diff <= -3) {
                cout << "Double eagle." << '\n';
            } else if (diff == -2) {
                cout << "Eagle." << '\n';
            } else if (diff == -1) {
                cout << "Birdie." << '\n';
            } else if (diff == 0) {
                cout << "Par." << '\n';
            } else if (diff == 1) {
                cout << "Bogey." << '\n';
            } else {
                cout << "Double Bogey." << '\n';
            }
        }
        
        cout << '\n';
        hole_num++;
    }
    
    return 0;
}