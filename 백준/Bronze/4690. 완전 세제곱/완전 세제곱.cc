#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<pair<int, tuple<int, int, int>>> results;
    
    for (int b = 2; b <= 100; b++) {
        long long b3 = (long long)b * b * b;
        
        for (int c = b; c <= 100; c++) {
            long long c3 = (long long)c * c * c;
            
            for (int d = c; d <= 100; d++) {
                long long d3 = (long long)d * d * d;
                long long sum = b3 + c3 + d3;
                
                int a = round(cbrt(sum));
                
                if ((long long)a * a * a == sum && a <= 100) {
                    results.push_back({a, {b, c, d}});
                }
            }
        }
    }
    
    sort(results.begin(), results.end());
    
    for (const auto& result : results) {
        int a = result.first;
        int b, c, d;
        tie(b, c, d) = result.second;
        cout << "Cube = " << a << ", Triple = (" << b << "," << c << "," << d << ")\n";
    }
    
    return 0;
}