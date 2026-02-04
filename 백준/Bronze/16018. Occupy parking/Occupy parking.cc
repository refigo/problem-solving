#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    string yesterday, today;
    cin >> yesterday >> today;
    
    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (yesterday[i] == 'C' && today[i] == 'C') {
            count++;
        }
    }
    
    cout << count << '\n';
    
    return 0;
}