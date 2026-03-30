#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n1, n2;
    if (cin >> n1 >> n2) {
        int diff = n2 - n1;
        if (diff <= -180) {
            diff += 360;
        } else if (diff > 180) {
            diff -= 360;
        }
        cout << diff << "\n";
    }

    return 0;
}
