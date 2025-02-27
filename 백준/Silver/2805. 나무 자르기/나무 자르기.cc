#include <bits/stdc++.h>
using namespace std;

long long get_wood_length(const vector<int>& trees, int height) {
    long long total = 0;
    for (int tree : trees) {
        if (tree > height) {
            total += (long long)(tree - height);
        }
    }
    return total;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> trees(n);
    int max_height = 0;
    for (int i = 0; i < n; i++) {
        cin >> trees[i];
        max_height = max(max_height, trees[i]);
    }
    
    int left = 0, right = max_height;
    int result = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long wood = get_wood_length(trees, mid);
        
        if (wood >= m) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    cout << result << '\n';
    
    return 0;
}