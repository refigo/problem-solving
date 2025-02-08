#include <bits/stdc++.h>
using namespace std;

int findMinOperations(long long a, long long b) {
    queue<pair<long long, int>> q;
    q.push({b, 0});
    
    while (!q.empty()) {
        long long curr = q.front().first;
        int ops = q.front().second;
        q.pop();
        
        if (curr == a) {
            return ops;
        }
        
        if (curr < a) continue;
        
        if (curr % 2 == 0) {
            q.push({curr / 2, ops + 1});
        }
        
        if (curr % 10 == 1) {
            q.push({curr / 10, ops + 1});
        }
    }
    
    return -1;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    long long a, b;
    cin >> a >> b;
    
    int result = findMinOperations(a, b);
    
    cout << (result == -1 ? -1 : result + 1) << '\n';
    
    return 0;
}