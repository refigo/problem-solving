#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long fs, cs, es, bs;
    if (!(cin >> fs >> cs >> es >> bs)) return 0;

    long long fn, cn, en, bn;
    cin >> fn >> cn >> en >> bn;

    int q;
    cin >> q;

    long long total = 0;
    while (q--) {
        int type;
        long long val;
        cin >> type >> val;

        if (type == 1) {
            long long req_f = fn * val;
            long long req_c = cn * val;
            long long req_e = en * val;
            long long req_b = bn * val;

            if (fs >= req_f && cs >= req_c && es >= req_e && bs >= req_b) {
                fs -= req_f;
                cs -= req_c;
                es -= req_e;
                bs -= req_b;
                total += val;
                cout << total << "\n";
            } else {
                cout << "Hello, siumii\n";
            }
        } else if (type == 2) {
            fs += val;
            cout << fs << "\n";
        } else if (type == 3) {
            cs += val;
            cout << cs << "\n";
        } else if (type == 4) {
            es += val;
            cout << es << "\n";
        } else if (type == 5) {
            bs += val;
            cout << bs << "\n";
        }
    }

    return 0;
}
