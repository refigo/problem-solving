#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int total_bases = 0;
    int official_at_bats = 0;

    for (int i = 0; i < n; ++i) {
        int outcome;
        cin >> outcome;
        if (outcome != -1) {
            total_bases += outcome;
            official_at_bats++;
        }
    }

    if (official_at_bats > 0) {
        double slugging_percentage = (double)total_bases / official_at_bats;
        cout << fixed << setprecision(16) << slugging_percentage << "\n";
    }

    return 0;
}