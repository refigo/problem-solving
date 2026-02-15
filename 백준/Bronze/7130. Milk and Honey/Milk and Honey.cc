#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int M, H;
    cin >> M >> H;
    
    int N;
    cin >> N;
    
    int total_happiness = 0;
    
    for (int i = 0; i < N; ++i) {
        int C, B;
        cin >> C >> B;
        
        int milk_happiness = C * M;
        int honey_happiness = B * H;
        
        total_happiness += max(milk_happiness, honey_happiness);
    }
    
    cout << total_happiness << '\n';
    
    return 0;
}