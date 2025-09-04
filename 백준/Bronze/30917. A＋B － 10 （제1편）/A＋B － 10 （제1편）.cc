#include <iostream>
using namespace std;

int main() {
    int resp;
    int A = 0, B = 0;

    for (int a = 1; a <= 9; a++) {
        cout << "? A " << a << endl;
        if (!(cin >> resp)) return 0;
        if (resp == 1) { A = a; break; }
    }

    for (int b = 1; b <= 9; b++) {
        cout << "? B " << b << endl;
        if (!(cin >> resp)) return 0;
        if (resp == 1) { B = b; break; }
    }

    cout << "! " << (A + B) << endl;
    return 0;
}