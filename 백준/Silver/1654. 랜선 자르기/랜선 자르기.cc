#include <bits/stdc++.h>
using namespace std;

int k, n;
vector<long long> lines;

long long countLines(long long length) {
    if (length == 0) return INT_MAX;
    
    long long count = 0;
    for (int i = 0; i < k; i++) {
        count += lines[i] / length;
    }
    return count;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> k >> n;
    lines.resize(k);
    
    long long max_length = 0;
    for (int i = 0; i < k; i++) {
        cin >> lines[i];
        max_length = max(max_length, lines[i]);
    }
    
    long long left = 1;
    long long right = max_length;
    long long result = 0;
    
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long count = countLines(mid);
        
        if (count >= n) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    cout << result << '\n';
    
    return 0;
}