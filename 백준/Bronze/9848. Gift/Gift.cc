#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; long long k;
    if(!(cin >> n >> k)) return 0;
    long long prev; 
    cin >> prev;
    long long gifts = 0;
    for (int i = 1; i < n; ++i) {
        long long t; 
        cin >> t;
        if (prev - t >= k) ++gifts;
        prev = t;
    }
    cout << gifts << '\n';
    return 0;
}