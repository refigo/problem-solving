#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    if (!(cin >> n)) return 0;
    long long s = 0, x;
    for (int i = 0; i < n; i++) { cin >> x; s += x; }
    cout << (s % 3 == 0 ? "yes" : "no") << '\n';
    return 0;
}