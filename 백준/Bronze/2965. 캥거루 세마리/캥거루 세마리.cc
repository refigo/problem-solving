#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A, B, C;
    cin >> A >> B >> C;
    
    int gap1 = B - A - 1;
    int gap2 = C - B - 1;
    
    cout << max(gap1, gap2) << '\n';
    
    return 0;
}