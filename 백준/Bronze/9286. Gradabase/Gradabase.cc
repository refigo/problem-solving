#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if(!(cin >> t)) return 0;
    for (int cs = 1; cs <= t; ++cs) {
        int m;
        cin >> m;
        cout << "Case " << cs << ":\n";
        for (int i = 0; i < m; ++i) {
            int g;
            cin >> g;
            int ng = g + 1;
            if (ng <= 6) cout << ng << '\n';
        }
    }
    return 0;
}