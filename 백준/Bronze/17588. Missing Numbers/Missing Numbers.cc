#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if(!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int last = a.back();
    int idx = 0;
    bool any = false;
    for (int x = 1; x <= last; ++x) {
        if (idx < n && a[idx] == x) ++idx;
        else { cout << x << '\n'; any = true; }
    }
    if (!any) cout << "good job\n";
    return 0;
}