#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    long long points_per_side = (1LL << n) + 1;
    long long total_points = points_per_side * points_per_side;
    
    cout << total_points << '\n';
    
    return 0;
}