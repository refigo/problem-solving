#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; long long c;
    if(!(cin >> n >> c)) return 0;
    int total = 0;
    int bedrooms = 0;
    double reduced = 0.0;
    for (int i = 0; i < n; ++i){
        int a; string t;
        cin >> a >> t;
        total += a;
        if (t == "bedroom") bedrooms += a;
        if (t == "balcony") reduced += a * 0.5;
        else reduced += a;
    }
    double cost = reduced * (double)c;
    cout << total << '\n';
    cout << bedrooms << '\n';
    cout.setf(std::ios::fixed);
    cout << setprecision(6) << cost << '\n';
    return 0;
}