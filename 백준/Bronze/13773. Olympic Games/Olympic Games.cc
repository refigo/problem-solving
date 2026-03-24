#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int year;
    while (cin >> year && year != 0) {
        cout << year << " ";
        if (year >= 1896 && year % 4 == 0) {
            if (year == 1916 || year == 1940 || year == 1944) {
                cout << "Games cancelled\n";
            } else if (year > 2020) {
                cout << "No city yet chosen\n";
            } else {
                cout << "Summer Olympics\n";
            }
        } else {
            cout << "No summer games\n";
        }
    }

    return 0;
}