#include <iostream>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    int min_x = INT_MAX;
    int max_x = INT_MIN;
    int min_y = INT_MAX;
    int max_y = INT_MIN;
    
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        
        min_x = min(min_x, x);
        max_x = max(max_x, x);
        min_y = min(min_y, y);
        max_y = max(max_y, y);
    }
    
    int width = max_x - min_x;
    int height = max_y - min_y;
    int area = width * height;
    
    cout << area << '\n';
    
    return 0;
}