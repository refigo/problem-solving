#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    vector<string> grid(10, string(20, '.'));
    for (int i = 0; i < N; i++) {
        string s; cin >> s;
        int row = s[0] - 'A';
        int col = stoi(s.substr(1)) - 1;
        if (0 <= row && row < 10 && 0 <= col && col < 20) grid[row][col] = 'o';
    }
    for (int r = 0; r < 10; r++) cout << grid[r] << '\n';
    return 0;
}