#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N; 
    if (!(cin >> N)) return 0;
    int xr = 0;
    for (int i = 1; i <= N; i++) xr ^= i;
    for (int i = 0; i < N - 1; i++) { int a; cin >> a; xr ^= a; }
    cout << xr << '\n';
    return 0;
}