#include <bits/stdc++.h>
using namespace std;

vector<int> parent;

int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y) {
        parent[x] = y;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int G, P;
    cin >> G >> P;
    
    parent.resize(G + 1);
    for (int i = 0; i <= G; i++) {
        parent[i] = i;
    }
    
    int result = 0;
    for (int i = 0; i < P; i++) {
        int g;
        cin >> g;
        
        int dockGate = find(g);
        
        if (dockGate == 0) {
            break;
        }
        
        unite(dockGate, dockGate - 1);
        result++;
    }
    
    cout << result << '\n';
    
    return 0;
}