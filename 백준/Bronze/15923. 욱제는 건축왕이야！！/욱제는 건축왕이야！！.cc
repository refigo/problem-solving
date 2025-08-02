#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<pair<int, int>> vertices(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> vertices[i].first >> vertices[i].second;
    }
    
    int perimeter = 0;
    
    for (int i = 0; i < n; ++i) {
        int next = (i + 1) % n;
        perimeter += abs(vertices[i].first - vertices[next].first) +
                     abs(vertices[i].second - vertices[next].second);
    }
    
    cout << perimeter << "\n";
    
    return 0;
}