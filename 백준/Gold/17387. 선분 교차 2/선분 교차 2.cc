#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

int ccw(pll a, pll b, pll c) {
    ll op = a.first*b.second + b.first*c.second + c.first*a.second;
    op -= (a.second*b.first + b.second*c.first + c.second*a.first);
    
    if(op > 0) return 1;
    if(op < 0) return -1;
    return 0;
}

bool isSame(pll a, pll b) {
    return a.first == b.first && a.second == b.second;
}

bool isPointOnSegment(pll p, pll a, pll b) {
    if(ccw(a, p, b) != 0) return false;
    
    ll minX = min(a.first, b.first);
    ll maxX = max(a.first, b.first);
    ll minY = min(a.second, b.second);
    ll maxY = max(a.second, b.second);
    
    return minX <= p.first && p.first <= maxX &&
           minY <= p.second && p.second <= maxY;
}

bool checkIntersection(pll a, pll b, pll c, pll d) {
    if(isSame(a, c) || isSame(a, d) || isSame(b, c) || isSame(b, d))
        return true;
        
    int abc = ccw(a, b, c);
    int abd = ccw(a, b, d);
    int cda = ccw(c, d, a);
    int cdb = ccw(c, d, b);
    
    if(abc * abd <= 0 && cda * cdb <= 0) {
        if(abc == 0 && abd == 0) {
            return isPointOnSegment(c, a, b) || 
                   isPointOnSegment(d, a, b) ||
                   isPointOnSegment(a, c, d) ||
                   isPointOnSegment(b, c, d);
        }
        return true;
    }
    
    return false;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    ll x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    
    pll a = {x1, y1};
    pll b = {x2, y2};
    pll c = {x3, y3};
    pll d = {x4, y4};
    
    cout << checkIntersection(a, b, c, d) << '\n';
    
    return 0;
}