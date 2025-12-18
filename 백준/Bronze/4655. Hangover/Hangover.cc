#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (cin >> s) {
        if (s == "0.00") break;
        double c = stod(s);
        double sum = 0.0;
        int n = 0;
        int k = 2;
        while (sum < c) {
            sum += 1.0 / k;
            ++n;
            ++k;
        }
        cout << n << " card(s)\n";
    }
    return 0;
}