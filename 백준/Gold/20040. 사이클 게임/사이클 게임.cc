#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 500001;
int parent[MAX_N];
int rank_arr[MAX_N];

void init(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        rank_arr[i] = 0;
    }
}

int find(int x) {
    if (x == parent[x]) return x;
    return parent[x] = find(parent[x]);
}

void union_sets(int x, int y) {
    x = find(x);
    y = find(y);
    
    if (x == y) return;
    
    if (rank_arr[x] < rank_arr[y]) {
        parent[x] = y;
    } else if (rank_arr[x] > rank_arr[y]) {
        parent[y] = x;
    } else {
        parent[y] = x;
        rank_arr[x]++;
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n, m;
    cin >> n >> m;
    
    init(n);
    
    int result = 0;
    
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        
        if (find(x) == find(y)) {
            if (result == 0) {
                result = i;
            }
        } else {
            union_sets(x, y);
        }
    }
    
    cout << result << '\n';
    
    return 0;
}