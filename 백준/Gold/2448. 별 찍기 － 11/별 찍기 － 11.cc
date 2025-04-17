#include <bits/stdc++.h>
using namespace std;

char stars[3072][6144];

void draw_stars(int x, int y, int n) {
    if (n == 3) {
        stars[x][y] = '*';
        stars[x+1][y-1] = '*';
        stars[x+1][y+1] = '*';
        stars[x+2][y-2] = '*';
        stars[x+2][y-1] = '*';
        stars[x+2][y] = '*';
        stars[x+2][y+1] = '*';
        stars[x+2][y+2] = '*';
        return;
    }
    
    int half = n / 2;
    draw_stars(x, y, half);
    draw_stars(x + half, y - half, half);
    draw_stars(x + half, y + half, half);
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;
    
    memset(stars, ' ', sizeof(stars));
    
    draw_stars(0, N-1, N);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2*N-1; j++) {
            cout << stars[i][j];
        }
        cout << '\n';
    }
    
    return 0;
}