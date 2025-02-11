#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<long long, long long>> points;

double calculateArea() {
    double area = 0.0;
    
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        
        // (x1*y2 - x2*y1)
        area += (double)points[i].first * points[j].second;
        area -= (double)points[j].first * points[i].second;
    }
    
    area = abs(area) / 2.0;
    return area;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> n;
    points.resize(n);
    
    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }
    
    double result = calculateArea();
    
    cout << fixed << setprecision(1) << result << '\n';
    
    return 0;
}