#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 128;
int paper[MAX_N][MAX_N];
int white = 0, blue = 0;

bool is_same_color(int x, int y, int size) {
    int color = paper[x][y];
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (paper[i][j] != color) return false;
        }
    }
    return true;
}

void solve(int x, int y, int size) {
    if (is_same_color(x, y, size)) {
        if (paper[x][y] == 0) white++;
        else blue++;
        return;
    }
    
    int half = size / 2;
    solve(x, y, half);
    solve(x, y + half, half);
    solve(x + half, y, half);
    solve(x + half, y + half, half);
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> paper[i][j];
        }
    }
    
    solve(0, 0, n);
    
    cout << white << '\n' << blue << '\n';
    
    return 0;
}