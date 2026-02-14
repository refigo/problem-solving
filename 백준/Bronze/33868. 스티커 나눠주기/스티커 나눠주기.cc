#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    int max_T = 0;
    int min_B = 1e9;
    
    for (int i = 0; i < N; ++i) {
        int T, B;
        cin >> T >> B;
        max_T = max(max_T, T);
        min_B = min(min_B, B);
    }
    
    int product = max_T * min_B;
    int remainder = product % 7;
    
    int character_number;
    if (remainder == 0) character_number = 1;
    else if (remainder == 1) character_number = 2;
    else if (remainder == 2) character_number = 3;
    else if (remainder == 3) character_number = 4;
    else if (remainder == 4) character_number = 5;
    else if (remainder == 5) character_number = 6;
    else character_number = 7;
    
    cout << character_number << '\n';
    
    return 0;
}