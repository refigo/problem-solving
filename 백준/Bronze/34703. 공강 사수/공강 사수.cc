#include <iostream>

using namespace std;

int main() {
    int N;
    if (!(cin >> N)) return 0;

    bool days[6] = {false};
    for (int i = 0; i < N; ++i) {
        int day;
        cin >> day;
        if (day >= 1 && day <= 5) {
            days[day] = true;
        }
    }

    bool success = false;
    for (int i = 1; i <= 5; ++i) {
        if (!days[i]) {
            success = true;
            break;
        }
    }

    if (success) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
