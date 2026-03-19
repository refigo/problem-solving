#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int L;
    if (!(cin >> L)) return 0;

    int arcane[6][3] = {
        {200, 210, 220},
        {210, 220, 225},
        {220, 225, 230},
        {225, 230, 235},
        {230, 235, 245},
        {235, 245, 250}
    };

    int grandis[7][3] = {
        {260, 265, 270},
        {265, 270, 275},
        {270, 275, 280},
        {275, 280, 285},
        {280, 285, 290},
        {285, 290, 295},
        {290, 295, 300}
    };

    for (int i = 0; i < 6; ++i) {
        int target = arcane[i][0];
        int r1 = arcane[i][1];
        int r2 = arcane[i][2];

        if (L < target) {
            cout << 0 << (i == 5 ? "" : " ");
        } else {
            int count = 500;
            if (L >= r1) count -= 200;
            if (L >= r2) count -= 200;
            cout << count << (i == 5 ? "" : " ");
        }
    }
    cout << "\n";

    for (int i = 0; i < 7; ++i) {
        int target = grandis[i][0];
        int r1 = grandis[i][1];
        int r2 = grandis[i][2];

        if (L < target) {
            cout << 0 << (i == 6 ? "" : " ");
        } else {
            int count = 500;
            if (L >= r1) count -= 200;
            if (L >= r2) count -= 200;
            cout << count << (i == 6 ? "" : " ");
        }
    }
    cout << "\n";

    return 0;
}
