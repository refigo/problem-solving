#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string city, ans;
    int temp, best = INT_MAX;
    while (cin >> city >> temp) {
        if (temp < best) { best = temp; ans = city; }
    }
    cout << ans << '\n';
    return 0;
}