#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<int> X(2 * N + 1);
    for (int i = 1; i <= 2 * N; ++i) {
        cin >> X[i];
    }
    
    int max_distance = 0;
    
    for (int k = 1; k <= N; ++k) {
        int first = -1, second = -1;
        for (int i = 1; i <= 2 * N; ++i) {
            if (X[i] == k) {
                if (first == -1) {
                    first = i;
                } else {
                    second = i;
                    break;
                }
            }
        }
        int distance = second - first - 1;
        max_distance = max(max_distance, distance);
    }
    
    cout << max_distance << '\n';
    
    return 0;
}