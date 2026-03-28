#include <iostream>
#include <string>

using namespace std;

int getWeight(const string& s) {
    int sum = 0;
    for (char c : s) {
        sum += c - '0';
    }
    return s.length() * sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    if (cin >> a >> b) {
        int w_a = getWeight(a);
        int w_b = getWeight(b);

        if (w_a > w_b) {
            cout << 1 << "\n";
        } else if (w_b > w_a) {
            cout << 2 << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}
