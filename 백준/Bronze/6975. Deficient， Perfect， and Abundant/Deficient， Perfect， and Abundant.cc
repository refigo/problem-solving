#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if(!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        int sum = 1;
        if (n == 1) sum = 0;
        else {
            for (int d = 2; 1LL*d*d <= n; ++d) {
                if (n % d == 0) {
                    int q = n / d;
                    if (q == d) sum += d;
                    else sum += d + q;
                }
            }
        }
        if (sum == n) cout << n << " is a perfect number.\n\n";
        else if (sum < n) cout << n << " is a deficient number.\n\n";
        else cout << n << " is an abundant number.\n\n";
    }
    return 0;
}