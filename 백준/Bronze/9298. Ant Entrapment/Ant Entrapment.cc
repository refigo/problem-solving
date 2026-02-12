#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    for (int tc = 1; tc <= T; ++tc) {
        int N;
        cin >> N;
        
        double min_x = 1e9, max_x = -1e9;
        double min_y = 1e9, max_y = -1e9;
        
        for (int i = 0; i < N; ++i) {
            double x, y;
            cin >> x >> y;
            min_x = min(min_x, x);
            max_x = max(max_x, x);
            min_y = min(min_y, y);
            max_y = max(max_y, y);
        }
        
        double width = max_x - min_x;
        double height = max_y - min_y;
        double area = width * height;
        double perimeter = 2 * (width + height);
        
        cout << fixed << setprecision(9);
        cout << "Case " << tc << ": Area " << area << ", Perimeter " << perimeter << '\n';
    }
    
    return 0;
}