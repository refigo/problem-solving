#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    
    if (a > b) {
        swap(a, b);
    }
    
    int min_distance = b - a;
    
    int distance1 = abs(a - x) + abs(b - y);
    
    int distance2 = abs(a - y) + abs(b - x);
    
    min_distance = min(min_distance, min(distance1, distance2));
    
    cout << min_distance << "\n";
    
    return 0;
}