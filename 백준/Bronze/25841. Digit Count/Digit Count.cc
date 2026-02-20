#include <iostream>

using namespace std;

int main() {
    int low, high, digit;
    if (!(cin >> low >> high >> digit)) return 0;

    int count = 0;
    for (int i = low; i <= high; ++i) {
        int temp = i;
        while (temp > 0) {
            if (temp % 10 == digit) {
                count++;
            }
            temp /= 10;
        }
    }

    cout << count << endl;

    return 0;
}

